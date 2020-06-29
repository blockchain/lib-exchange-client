{-# LANGUAGE ScopedTypeVariables #-}
{-# LANGUAGE OverloadedStrings #-}
{-# LANGUAGE RecordWildCards #-}
{-# LANGUAGE PartialTypeSignatures #-}

module Main where

import Data.Typeable (Proxy(..))
import Test.Hspec
import Test.Hspec.QuickCheck

import PropMime
import Instances ()

import Blockchain.comExchangeREST.Model
import Blockchain.comExchangeREST.MimeTypes

main :: IO ()
main =
  hspec $ modifyMaxSize (const 10) $ do
    describe "JSON instances" $ do
      pure ()
      propMimeEq MimeJSON (Proxy :: Proxy Balance)
      propMimeEq MimeJSON (Proxy :: Proxy BalanceMap)
      propMimeEq MimeJSON (Proxy :: Proxy BaseOrder)
      propMimeEq MimeJSON (Proxy :: Proxy CancelOrderRequest)
      propMimeEq MimeJSON (Proxy :: Proxy CreateWithdrawalRequest)
      propMimeEq MimeJSON (Proxy :: Proxy DepositAddressCrypto)
      propMimeEq MimeJSON (Proxy :: Proxy DepositInfo)
      propMimeEq MimeJSON (Proxy :: Proxy Fees)
      propMimeEq MimeJSON (Proxy :: Proxy OrderBook)
      propMimeEq MimeJSON (Proxy :: Proxy OrderBookEntry)
      propMimeEq MimeJSON (Proxy :: Proxy OrderStatus)
      propMimeEq MimeJSON (Proxy :: Proxy OrderSummary)
      propMimeEq MimeJSON (Proxy :: Proxy PriceEvent)
      propMimeEq MimeJSON (Proxy :: Proxy PriceEventList)
      propMimeEq MimeJSON (Proxy :: Proxy Side)
      propMimeEq MimeJSON (Proxy :: Proxy SymbolStatus)
      propMimeEq MimeJSON (Proxy :: Proxy TimeInForce)
      propMimeEq MimeJSON (Proxy :: Proxy TimeInForceStop)
      propMimeEq MimeJSON (Proxy :: Proxy UnauthorizedError)
      propMimeEq MimeJSON (Proxy :: Proxy WhitelistEntry)
      propMimeEq MimeJSON (Proxy :: Proxy WithdrawalInfo)
      propMimeEq MimeJSON (Proxy :: Proxy WithdrawalStatus)
      
