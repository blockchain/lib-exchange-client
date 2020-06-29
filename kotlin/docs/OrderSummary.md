
# OrderSummary

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exOrdId** | **kotlin.Long** | The unique order id assigned by the exchange |  [optional]
**clOrdId** | **kotlin.String** | Reference field provided by client and cannot exceed 20 characters |  [optional]
**ordStatus** | [**OrderStatus**](OrderStatus.md) |  |  [optional]
**text** | **kotlin.String** | The reason for rejecting the order, if applicable |  [optional]
**symbol** | **kotlin.String** | Blockchain symbol identifier |  [optional]
**lastShares** | **kotlin.Double** | The executed quantity for the order&#39;s last fill |  [optional]
**lastPx** | **kotlin.Double** | The executed price for the last fill |  [optional]
**leavesQty** | **kotlin.Double** | For Open and Partially Filled orders this is the remaining quantity open for execution. For Canceled and Expired orders this is the quantity than was still open before cancellation/expiration. For Rejected order this is equal to orderQty. For other states this is always zero. |  [optional]
**cumQty** | **kotlin.Double** | The quantity of the order which has been filled |  [optional]
**avgPx** | **kotlin.Double** | Calculated the Volume Weighted Average Price of all fills for this order |  [optional]
**timestamp** | **kotlin.Long** | Time in ms since 01/01/1970 (epoch) |  [optional]



