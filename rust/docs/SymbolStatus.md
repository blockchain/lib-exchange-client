# SymbolStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**base_currency** | Option<**String**> | Blockchain symbol identifier | [optional]
**base_currency_scale** | Option<**i32**> | The number of decimals the currency can be split in | [optional]
**counter_currency** | Option<**String**> | Blockchain symbol identifier | [optional]
**counter_currency_scale** | Option<**i32**> | The number of decimals the currency can be split in | [optional]
**min_price_increment** | Option<**i64**> | The price of the instrument must be a multiple of min_price_increment * (10^-min_price_increment_scale) | [optional]
**min_price_increment_scale** | Option<**i32**> |  | [optional]
**min_order_size** | Option<**i64**> | The minimum quantity for an order for this instrument must be min_order_size*(10^-min_order_size_scale) | [optional]
**min_order_size_scale** | Option<**i32**> |  | [optional]
**max_order_size** | Option<**i64**> | The maximum quantity for an order for this instrument is max_order_size*(10^-max_order_size_scale). If this equal to zero, there is no limit | [optional]
**max_order_size_scale** | Option<**i32**> |  | [optional]
**lot_size** | Option<**i64**> |  | [optional]
**lot_size_scale** | Option<**i32**> |  | [optional]
**status** | Option<**String**> | Symbol status; open, close, suspend, halt, halt-freeze. | [optional]
**id** | Option<**i64**> |  | [optional]
**auction_price** | Option<**f64**> | If the symbol is halted and will open on an auction, this will be the opening price. | [optional]
**auction_size** | Option<**f64**> | Opening size | [optional]
**auction_time** | Option<**i32**> | Opening time in HHMM format | [optional]
**imbalance** | Option<**f64**> | Auction imbalance. If > 0 then there will be buy orders left over at the auction price. If < 0 then there will be sell orders left over at the auction price. | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


