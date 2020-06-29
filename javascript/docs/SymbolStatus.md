# BlockchainComExchangeRestApi.SymbolStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**baseCurrency** | **String** | Blockchain symbol identifier | [optional] 
**baseCurrencyScale** | **Number** | The number of decimals the currency can be split in | [optional] 
**counterCurrency** | **String** | Blockchain symbol identifier | [optional] 
**counterCurrencyScale** | **Number** | The number of decimals the currency can be split in | [optional] 
**minPriceIncrement** | **Number** | The price of the instrument must be a multiple of min_price_increment * (10^-min_price_increment_scale) | [optional] 
**minPriceIncrementScale** | **Number** |  | [optional] 
**minOrderSize** | **Number** | The minimum quantity for an order for this instrument must be min_order_size*(10^-min_order_size_scale) | [optional] 
**minOrderSizeScale** | **Number** |  | [optional] 
**maxOrderSize** | **Number** | The maximum quantity for an order for this instrument is max_order_size*(10^-max_order_size_scale). If this equal to zero, there is no limit | [optional] 
**maxOrderSizeScale** | **Number** |  | [optional] 
**lotSize** | **Number** |  | [optional] 
**lotSizeScale** | **Number** |  | [optional] 
**status** | **String** | Symbol status; open, close, suspend, halt, halt-freeze. | [optional] 
**id** | **Number** |  | [optional] 
**auctionPrice** | **Number** | If the symbol is halted and will open on an auction, this will be the opening price. | [optional] 
**auctionSize** | **Number** | Opening size | [optional] 
**auctionTime** | **Number** | Opening time in HHMM format | [optional] 
**imbalance** | **Number** | Auction imbalance. If &gt; 0 then there will be buy orders left over at the auction price. If &lt; 0 then there will be sell orders left over at the auction price. | [optional] 



## Enum: StatusEnum


* `open` (value: `"open"`)

* `close` (value: `"close"`)

* `suspend` (value: `"suspend"`)

* `halt` (value: `"halt"`)

* `halt-freeze` (value: `"halt-freeze"`)




