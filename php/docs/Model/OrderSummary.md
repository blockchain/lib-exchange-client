# # OrderSummary

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ex_ord_id** | **int** | The unique order id assigned by the exchange | [optional] 
**cl_ord_id** | **string** | Reference field provided by client and cannot exceed 20 characters | [optional] 
**ord_status** | [**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\OrderStatus**](OrderStatus.md) |  | [optional] 
**side** | [**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\Side**](Side.md) |  | [optional] 
**text** | **string** | The reason for rejecting the order, if applicable | [optional] 
**symbol** | **string** | Blockchain symbol identifier | [optional] 
**last_shares** | **double** | The executed quantity for the order&#39;s last fill | [optional] 
**last_px** | **double** | The executed price for the last fill | [optional] 
**leaves_qty** | **double** | For Open and Partially Filled orders this is the remaining quantity open for execution. For Canceled and Expired orders this is the quantity than was still open before cancellation/expiration. For Rejected order this is equal to orderQty. For other states this is always zero. | [optional] 
**cum_qty** | **double** | The quantity of the order which has been filled | [optional] 
**avg_px** | **double** | Calculated the Volume Weighted Average Price of all fills for this order | [optional] 
**timestamp** | **int** | Time in ms since 01/01/1970 (epoch) | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)


