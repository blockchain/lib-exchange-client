# OrderSummary

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ex_ord_id** | **int** | The unique order id assigned by the exchange | [optional] 
**cl_ord_id** | **str** | Reference field provided by client and cannot exceed 20 characters | 
**ord_type** | [**OrdType**](OrdType.md) |  | 
**ord_status** | [**OrderStatus**](OrderStatus.md) |  | 
**side** | [**Side**](Side.md) |  | 
**price** | **float** | The limit price for the order | [optional] 
**text** | **str** | The reason for rejecting the order, if applicable | [optional] 
**symbol** | **str** | Blockchain symbol identifier | 
**last_shares** | **float** | The executed quantity for the order&#39;s last fill | [optional] 
**last_px** | **float** | The executed price for the last fill | [optional] 
**leaves_qty** | **float** | For Open and Partially Filled orders this is the remaining quantity open for execution. For Canceled and Expired orders this is the quantity than was still open before cancellation/expiration. For Rejected order this is equal to orderQty. For other states this is always zero. | [optional] 
**cum_qty** | **float** | The quantity of the order which has been filled | [optional] 
**avg_px** | **float** | Calculated the Volume Weighted Average Price of all fills for this order | [optional] 
**timestamp** | **int** | Time in ms since 01/01/1970 (epoch) | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


