{-# OPTIONS_GHC -fno-warn-unused-imports -fno-warn-unused-matches #-}

module Instances where

import Blockchain.comExchangeREST.Model
import Blockchain.comExchangeREST.Core

import qualified Data.Aeson as A
import qualified Data.ByteString.Lazy as BL
import qualified Data.HashMap.Strict as HM
import qualified Data.Set as Set
import qualified Data.Text as T
import qualified Data.Time as TI
import qualified Data.Vector as V

import Control.Monad
import Data.Char (isSpace)
import Data.List (sort)
import Test.QuickCheck

import ApproxEq

instance Arbitrary T.Text where
  arbitrary = T.pack <$> arbitrary

instance Arbitrary TI.Day where
  arbitrary = TI.ModifiedJulianDay . (2000 +) <$> arbitrary
  shrink = (TI.ModifiedJulianDay <$>) . shrink . TI.toModifiedJulianDay

instance Arbitrary TI.UTCTime where
  arbitrary =
    TI.UTCTime <$> arbitrary <*> (TI.secondsToDiffTime <$> choose (0, 86401))

instance Arbitrary BL.ByteString where
    arbitrary = BL.pack <$> arbitrary
    shrink xs = BL.pack <$> shrink (BL.unpack xs)

instance Arbitrary ByteArray where
    arbitrary = ByteArray <$> arbitrary
    shrink (ByteArray xs) = ByteArray <$> shrink xs

instance Arbitrary Binary where
    arbitrary = Binary <$> arbitrary
    shrink (Binary xs) = Binary <$> shrink xs

instance Arbitrary DateTime where
    arbitrary = DateTime <$> arbitrary
    shrink (DateTime xs) = DateTime <$> shrink xs

instance Arbitrary Date where
    arbitrary = Date <$> arbitrary
    shrink (Date xs) = Date <$> shrink xs

-- | A naive Arbitrary instance for A.Value:
instance Arbitrary A.Value where
  arbitrary = frequency [(3, simpleTypes), (1, arrayTypes), (1, objectTypes)]
    where
      simpleTypes :: Gen A.Value
      simpleTypes =
        frequency
          [ (1, return A.Null)
          , (2, liftM A.Bool (arbitrary :: Gen Bool))
          , (2, liftM (A.Number . fromIntegral) (arbitrary :: Gen Int))
          , (2, liftM (A.String . T.pack) (arbitrary :: Gen String))
          ]
      mapF (k, v) = (T.pack k, v)
      simpleAndArrays = frequency [(1, sized sizedArray), (4, simpleTypes)]
      arrayTypes = sized sizedArray
      objectTypes = sized sizedObject
      sizedArray n = liftM (A.Array . V.fromList) $ replicateM n simpleTypes
      sizedObject n =
        liftM (A.object . map mapF) $
        replicateM n $ (,) <$> (arbitrary :: Gen String) <*> simpleAndArrays
    
-- | Checks if a given list has no duplicates in _O(n log n)_.
hasNoDups
  :: (Ord a)
  => [a] -> Bool
hasNoDups = go Set.empty
  where
    go _ [] = True
    go s (x:xs)
      | s' <- Set.insert x s
      , Set.size s' > Set.size s = go s' xs
      | otherwise = False

instance ApproxEq TI.Day where
  (=~) = (==)
    
arbitraryReduced :: Arbitrary a => Int -> Gen a
arbitraryReduced n = resize (n `div` 2) arbitrary

arbitraryReducedMaybe :: Arbitrary a => Int -> Gen (Maybe a)
arbitraryReducedMaybe 0 = elements [Nothing]
arbitraryReducedMaybe n = arbitraryReduced n

arbitraryReducedMaybeValue :: Int -> Gen (Maybe A.Value)
arbitraryReducedMaybeValue 0 = elements [Nothing]
arbitraryReducedMaybeValue n = do
  generated <- arbitraryReduced n
  if generated == Just A.Null
    then return Nothing
    else return generated

-- * Models
 
instance Arbitrary Balance where
  arbitrary = sized genBalance

genBalance :: Int -> Gen Balance
genBalance n =
  Balance
    <$> arbitrary -- balanceCurrency :: Text
    <*> arbitrary -- balanceBalance :: Double
    <*> arbitrary -- balanceAvailable :: Double
    <*> arbitrary -- balanceBalanceLocal :: Double
    <*> arbitrary -- balanceAvailableLocal :: Double
    <*> arbitrary -- balanceRate :: Double
  
instance Arbitrary BalanceMap where
  arbitrary = sized genBalanceMap

genBalanceMap :: Int -> Gen BalanceMap
genBalanceMap n =
  BalanceMap
    <$> arbitraryReduced n -- balanceMapPrimary :: [Balance]
  
instance Arbitrary BaseOrder where
  arbitrary = sized genBaseOrder

genBaseOrder :: Int -> Gen BaseOrder
genBaseOrder n =
  BaseOrder
    <$> arbitrary -- baseOrderClOrdId :: Text
    <*> arbitraryReduced n -- baseOrderOrdType :: OrdType
    <*> arbitrary -- baseOrderSymbol :: Text
    <*> arbitraryReduced n -- baseOrderSide :: Side
    <*> arbitrary -- baseOrderOrderQty :: Double
    <*> arbitraryReducedMaybe n -- baseOrderTimeInForce :: Maybe TimeInForce
    <*> arbitraryReducedMaybe n -- baseOrderPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- baseOrderExpireDate :: Maybe Int
    <*> arbitraryReducedMaybe n -- baseOrderMinQty :: Maybe Double
    <*> arbitraryReducedMaybe n -- baseOrderStopPx :: Maybe Double
  
instance Arbitrary CancelOrderRequest where
  arbitrary = sized genCancelOrderRequest

genCancelOrderRequest :: Int -> Gen CancelOrderRequest
genCancelOrderRequest n =
  CancelOrderRequest
    <$> arbitrary -- cancelOrderRequestAction :: E'Action
    <*> arbitrary -- cancelOrderRequestOrderId :: Integer
  
instance Arbitrary CreateWithdrawalRequest where
  arbitrary = sized genCreateWithdrawalRequest

genCreateWithdrawalRequest :: Int -> Gen CreateWithdrawalRequest
genCreateWithdrawalRequest n =
  CreateWithdrawalRequest
    <$> arbitraryReducedMaybe n -- createWithdrawalRequestAmount :: Maybe Double
    <*> arbitrary -- createWithdrawalRequestCurrency :: Text
    <*> arbitrary -- createWithdrawalRequestBeneficiary :: Text
    <*> arbitraryReducedMaybe n -- createWithdrawalRequestSendMax :: Maybe Bool
  
instance Arbitrary DepositAddressCrypto where
  arbitrary = sized genDepositAddressCrypto

genDepositAddressCrypto :: Int -> Gen DepositAddressCrypto
genDepositAddressCrypto n =
  DepositAddressCrypto
    <$> arbitrary -- depositAddressCryptoType :: Text
    <*> arbitrary -- depositAddressCryptoAddress :: Text
  
instance Arbitrary DepositInfo where
  arbitrary = sized genDepositInfo

genDepositInfo :: Int -> Gen DepositInfo
genDepositInfo n =
  DepositInfo
    <$> arbitrary -- depositInfoDepositId :: Text
    <*> arbitrary -- depositInfoAmount :: Double
    <*> arbitrary -- depositInfoCurrency :: Text
    <*> arbitrary -- depositInfoAddress :: Text
    <*> arbitraryReducedMaybe n -- depositInfoTxHash :: Maybe Text
    <*> arbitrary -- depositInfoState :: E'State
    <*> arbitraryReducedMaybe n -- depositInfoTimestamp :: Maybe Integer
  
instance Arbitrary Fees where
  arbitrary = sized genFees

genFees :: Int -> Gen Fees
genFees n =
  Fees
    <$> arbitrary -- feesMakerRate :: Double
    <*> arbitrary -- feesTakerRate :: Double
    <*> arbitrary -- feesVolumeInUsd :: Double
  
instance Arbitrary OrderBook where
  arbitrary = sized genOrderBook

genOrderBook :: Int -> Gen OrderBook
genOrderBook n =
  OrderBook
    <$> arbitraryReducedMaybe n -- orderBookSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- orderBookBids :: Maybe [OrderBookEntry]
    <*> arbitraryReducedMaybe n -- orderBookAsks :: Maybe [OrderBookEntry]
  
instance Arbitrary OrderBookEntry where
  arbitrary = sized genOrderBookEntry

genOrderBookEntry :: Int -> Gen OrderBookEntry
genOrderBookEntry n =
  OrderBookEntry
    <$> arbitraryReducedMaybe n -- orderBookEntryPx :: Maybe Double
    <*> arbitraryReducedMaybe n -- orderBookEntryQty :: Maybe Double
    <*> arbitraryReducedMaybe n -- orderBookEntryNum :: Maybe Integer
  
instance Arbitrary OrderSummary where
  arbitrary = sized genOrderSummary

genOrderSummary :: Int -> Gen OrderSummary
genOrderSummary n =
  OrderSummary
    <$> arbitraryReducedMaybe n -- orderSummaryExOrdId :: Maybe Integer
    <*> arbitrary -- orderSummaryClOrdId :: Text
    <*> arbitraryReduced n -- orderSummaryOrdType :: OrdType
    <*> arbitraryReduced n -- orderSummaryOrdStatus :: OrderStatus
    <*> arbitraryReduced n -- orderSummarySide :: Side
    <*> arbitraryReducedMaybe n -- orderSummaryPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- orderSummaryText :: Maybe Text
    <*> arbitrary -- orderSummarySymbol :: Text
    <*> arbitraryReducedMaybe n -- orderSummaryLastShares :: Maybe Double
    <*> arbitraryReducedMaybe n -- orderSummaryLastPx :: Maybe Double
    <*> arbitraryReducedMaybe n -- orderSummaryLeavesQty :: Maybe Double
    <*> arbitraryReducedMaybe n -- orderSummaryCumQty :: Maybe Double
    <*> arbitraryReducedMaybe n -- orderSummaryAvgPx :: Maybe Double
    <*> arbitraryReducedMaybe n -- orderSummaryTimestamp :: Maybe Integer
  
instance Arbitrary PriceEvent where
  arbitrary = sized genPriceEvent

genPriceEvent :: Int -> Gen PriceEvent
genPriceEvent n =
  PriceEvent
    <$> arbitraryReducedMaybe n -- priceEventSymbol :: Maybe Text
    <*> arbitraryReducedMaybe n -- priceEventPrice24h :: Maybe Double
    <*> arbitraryReducedMaybe n -- priceEventVolume24h :: Maybe Double
    <*> arbitraryReducedMaybe n -- priceEventLastTradePrice :: Maybe Double
  
instance Arbitrary PriceEventList where
  arbitrary = sized genPriceEventList

genPriceEventList :: Int -> Gen PriceEventList
genPriceEventList n =
  PriceEventList
    <$> arbitraryReducedMaybe n -- priceEventListOrders :: Maybe [PriceEvent]
  
instance Arbitrary SymbolStatus where
  arbitrary = sized genSymbolStatus

genSymbolStatus :: Int -> Gen SymbolStatus
genSymbolStatus n =
  SymbolStatus
    <$> arbitraryReducedMaybe n -- symbolStatusBaseCurrency :: Maybe Text
    <*> arbitraryReducedMaybe n -- symbolStatusBaseCurrencyScale :: Maybe Int
    <*> arbitraryReducedMaybe n -- symbolStatusCounterCurrency :: Maybe Text
    <*> arbitraryReducedMaybe n -- symbolStatusCounterCurrencyScale :: Maybe Int
    <*> arbitraryReducedMaybe n -- symbolStatusMinPriceIncrement :: Maybe Integer
    <*> arbitraryReducedMaybe n -- symbolStatusMinPriceIncrementScale :: Maybe Int
    <*> arbitraryReducedMaybe n -- symbolStatusMinOrderSize :: Maybe Integer
    <*> arbitraryReducedMaybe n -- symbolStatusMinOrderSizeScale :: Maybe Int
    <*> arbitraryReducedMaybe n -- symbolStatusMaxOrderSize :: Maybe Integer
    <*> arbitraryReducedMaybe n -- symbolStatusMaxOrderSizeScale :: Maybe Int
    <*> arbitraryReducedMaybe n -- symbolStatusLotSize :: Maybe Integer
    <*> arbitraryReducedMaybe n -- symbolStatusLotSizeScale :: Maybe Int
    <*> arbitraryReducedMaybe n -- symbolStatusStatus :: Maybe E'Status
    <*> arbitraryReducedMaybe n -- symbolStatusId :: Maybe Integer
    <*> arbitraryReducedMaybe n -- symbolStatusAuctionPrice :: Maybe Double
    <*> arbitraryReducedMaybe n -- symbolStatusAuctionSize :: Maybe Double
    <*> arbitraryReducedMaybe n -- symbolStatusAuctionTime :: Maybe Text
    <*> arbitraryReducedMaybe n -- symbolStatusImbalance :: Maybe Double
  
instance Arbitrary UnauthorizedError where
  arbitrary = sized genUnauthorizedError

genUnauthorizedError :: Int -> Gen UnauthorizedError
genUnauthorizedError n =
  UnauthorizedError
    <$> arbitraryReducedMaybe n -- unauthorizedErrorError :: Maybe Text
  
instance Arbitrary WhitelistEntry where
  arbitrary = sized genWhitelistEntry

genWhitelistEntry :: Int -> Gen WhitelistEntry
genWhitelistEntry n =
  WhitelistEntry
    <$> arbitraryReducedMaybe n -- whitelistEntryWhitelistId :: Maybe Text
    <*> arbitraryReducedMaybe n -- whitelistEntryName :: Maybe Text
    <*> arbitraryReducedMaybe n -- whitelistEntryCurrency :: Maybe Text
  
instance Arbitrary WithdrawalInfo where
  arbitrary = sized genWithdrawalInfo

genWithdrawalInfo :: Int -> Gen WithdrawalInfo
genWithdrawalInfo n =
  WithdrawalInfo
    <$> arbitraryReducedMaybe n -- withdrawalInfoWithdrawalId :: Maybe Text
    <*> arbitrary -- withdrawalInfoAmount :: Double
    <*> arbitraryReducedMaybe n -- withdrawalInfoFee :: Maybe Double
    <*> arbitrary -- withdrawalInfoCurrency :: Text
    <*> arbitrary -- withdrawalInfoBeneficiary :: Text
    <*> arbitraryReducedMaybe n -- withdrawalInfoState :: Maybe WithdrawalStatus
    <*> arbitraryReducedMaybe n -- withdrawalInfoTimestamp :: Maybe Integer
  



instance Arbitrary E'Action where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary E'State where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary E'Status where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary OrdType where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary OrderStatus where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary Side where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary TimeInForce where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary TimeInForceStop where
  arbitrary = arbitraryBoundedEnum

instance Arbitrary WithdrawalStatus where
  arbitrary = arbitraryBoundedEnum

