

# SymbolStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**baseCurrency** | **String** | Blockchain symbol identifier |  [optional]
**baseCurrencyScale** | **Integer** | The number of decimals the currency can be split in |  [optional]
**counterCurrency** | **String** | Blockchain symbol identifier |  [optional]
**counterCurrencyScale** | **Integer** | The number of decimals the currency can be split in |  [optional]
**minPriceIncrement** | **Long** | The price of the instrument must be a multiple of min_price_increment * (10^-min_price_increment_scale) |  [optional]
**minPriceIncrementScale** | **Integer** |  |  [optional]
**minOrderSize** | **Long** | The minimum quantity for an order for this instrument must be min_order_size*(10^-min_order_size_scale) |  [optional]
**minOrderSizeScale** | **Integer** |  |  [optional]
**maxOrderSize** | **Long** | The maximum quantity for an order for this instrument is max_order_size*(10^-max_order_size_scale). If this equal to zero, there is no limit |  [optional]
**maxOrderSizeScale** | **Integer** |  |  [optional]
**lotSize** | **Long** |  |  [optional]
**lotSizeScale** | **Integer** |  |  [optional]
**status** | [**StatusEnum**](#StatusEnum) | Symbol status; open, close, suspend, halt, halt-freeze. |  [optional]
**id** | **Long** |  |  [optional]
**auctionPrice** | **Double** | If the symbol is halted and will open on an auction, this will be the opening price. |  [optional]
**auctionSize** | **Double** | Opening size |  [optional]
**auctionTime** | **String** | Opening time in HHMM format |  [optional]
**imbalance** | **Double** | Auction imbalance. If &gt; 0 then there will be buy orders left over at the auction price. If &lt; 0 then there will be sell orders left over at the auction price. |  [optional]


## Enum: StatusEnum

Name | Value
---- | -----




