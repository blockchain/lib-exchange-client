# SymbolStatus

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**base_currency** | **str** | Blockchain symbol identifier | [optional] 
**base_currency_scale** | **int** | The number of decimals the currency can be split in | [optional] 
**counter_currency** | **str** | Blockchain symbol identifier | [optional] 
**counter_currency_scale** | **int** | The number of decimals the currency can be split in | [optional] 
**min_price_increment** | **int** | The price of the instrument must be a multiple of min_price_increment * (10^-min_price_increment_scale) | [optional] 
**min_price_increment_scale** | **int** |  | [optional] 
**min_order_size** | **int** | The minimum quantity for an order for this instrument must be min_order_size*(10^-min_order_size_scale) | [optional] 
**min_order_size_scale** | **int** |  | [optional] 
**max_order_size** | **int** | The maximum quantity for an order for this instrument is max_order_size*(10^-max_order_size_scale). If this equal to zero, there is no limit | [optional] 
**max_order_size_scale** | **int** |  | [optional] 
**lot_size** | **int** |  | [optional] 
**lot_size_scale** | **int** |  | [optional] 
**status** | **str** | Symbol status; open, close, suspend, halt, halt-freeze. | [optional] 
**id** | **int** |  | [optional] 
**auction_price** | **float** | If the symbol is halted and will open on an auction, this will be the opening price. | [optional] 
**auction_size** | **float** | Opening size | [optional] 
**auction_time** | **int** | Opening time in HHMM format | [optional] 
**imbalance** | **float** | Auction imbalance. If &gt; 0 then there will be buy orders left over at the auction price. If &lt; 0 then there will be sell orders left over at the auction price. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


