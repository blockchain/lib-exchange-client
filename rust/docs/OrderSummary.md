# OrderSummary

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ex_ord_id** | Option<**i64**> | The unique order id assigned by the exchange | [optional]
**cl_ord_id** | **String** | Reference field provided by client and cannot exceed 20 characters | 
**ord_type** | [**crate::models::OrdType**](ordType.md) |  | 
**ord_status** | [**crate::models::OrderStatus**](OrderStatus.md) |  | 
**side** | [**crate::models::Side**](side.md) |  | 
**price** | Option<**f64**> | The limit price for the order | [optional]
**text** | Option<**String**> | The reason for rejecting the order, if applicable | [optional]
**symbol** | **String** | Blockchain symbol identifier | 
**last_shares** | Option<**f64**> | The executed quantity for the order's last fill | [optional]
**last_px** | Option<**f64**> | The executed price for the last fill | [optional]
**leaves_qty** | Option<**f64**> | For Open and Partially Filled orders this is the remaining quantity open for execution. For Canceled and Expired orders this is the quantity than was still open before cancellation/expiration. For Rejected order this is equal to orderQty. For other states this is always zero. | [optional]
**cum_qty** | Option<**f64**> | The quantity of the order which has been filled | [optional]
**avg_px** | Option<**f64**> | Calculated the Volume Weighted Average Price of all fills for this order | [optional]
**timestamp** | Option<**i64**> | Time in ms since 01/01/1970 (epoch) | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


