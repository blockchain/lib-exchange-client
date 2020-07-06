# SymbolStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**BaseCurrency** | **string** | Blockchain symbol identifier | [optional] 
**BaseCurrencyScale** | **int32** | The number of decimals the currency can be split in | [optional] 
**CounterCurrency** | **string** | Blockchain symbol identifier | [optional] 
**CounterCurrencyScale** | **int32** | The number of decimals the currency can be split in | [optional] 
**MinPriceIncrement** | **int64** | The price of the instrument must be a multiple of min_price_increment * (10^-min_price_increment_scale) | [optional] 
**MinPriceIncrementScale** | **int32** |  | [optional] 
**MinOrderSize** | **int64** | The minimum quantity for an order for this instrument must be min_order_size*(10^-min_order_size_scale) | [optional] 
**MinOrderSizeScale** | **int32** |  | [optional] 
**MaxOrderSize** | **int64** | The maximum quantity for an order for this instrument is max_order_size*(10^-max_order_size_scale). If this equal to zero, there is no limit | [optional] 
**MaxOrderSizeScale** | **int32** |  | [optional] 
**LotSize** | **int64** |  | [optional] 
**LotSizeScale** | **int32** |  | [optional] 
**Status** | **string** | Symbol status; open, close, suspend, halt, halt-freeze. | [optional] 
**Id** | **int64** |  | [optional] 
**AuctionPrice** | **float64** | If the symbol is halted and will open on an auction, this will be the opening price. | [optional] 
**AuctionSize** | **float64** | Opening size | [optional] 
**AuctionTime** | **string** | Opening time in HHMM format | [optional] 
**Imbalance** | **float64** | Auction imbalance. If &gt; 0 then there will be buy orders left over at the auction price. If &lt; 0 then there will be sell orders left over at the auction price. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


