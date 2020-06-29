
# SymbolStatus

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**baseCurrency** | **kotlin.String** | Blockchain symbol identifier |  [optional]
**baseCurrencyScale** | **kotlin.Int** | The number of decimals the currency can be split in |  [optional]
**counterCurrency** | **kotlin.String** | Blockchain symbol identifier |  [optional]
**counterCurrencyScale** | **kotlin.Int** | The number of decimals the currency can be split in |  [optional]
**minPriceIncrement** | **kotlin.Long** | The price of the instrument must be a multiple of min_price_increment * (10^-min_price_increment_scale) |  [optional]
**minPriceIncrementScale** | **kotlin.Int** |  |  [optional]
**minOrderSize** | **kotlin.Long** | The minimum quantity for an order for this instrument must be min_order_size*(10^-min_order_size_scale) |  [optional]
**minOrderSizeScale** | **kotlin.Int** |  |  [optional]
**maxOrderSize** | **kotlin.Long** | The maximum quantity for an order for this instrument is max_order_size*(10^-max_order_size_scale). If this equal to zero, there is no limit |  [optional]
**maxOrderSizeScale** | **kotlin.Int** |  |  [optional]
**lotSize** | **kotlin.Long** |  |  [optional]
**lotSizeScale** | **kotlin.Int** |  |  [optional]
**status** | [**inline**](#StatusEnum) | Symbol status; open, close, suspend, halt, halt-freeze. |  [optional]
**id** | **kotlin.Long** |  |  [optional]
**auctionPrice** | **kotlin.Double** | If the symbol is halted and will open on an auction, this will be the opening price. |  [optional]
**auctionSize** | **kotlin.Double** | Opening size |  [optional]
**auctionTime** | **kotlin.Int** | Opening time in HHMM format |  [optional]
**imbalance** | **kotlin.Double** | Auction imbalance. If &gt; 0 then there will be buy orders left over at the auction price. If &lt; 0 then there will be sell orders left over at the auction price. |  [optional]


<a name="StatusEnum"></a>
## Enum: status
Name | Value
---- | -----
status | open, close, suspend, halt, halt-freeze



