
# OrderSummary

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**clOrdId** | **kotlin.String** | Reference field provided by client. Cannot exceed 20 characters, only alphanumeric characters are allowed. | 
**ordType** | [**OrdType**](OrdType.md) |  | 
**ordStatus** | [**OrderStatus**](OrderStatus.md) |  | 
**side** | [**Side**](Side.md) |  | 
**symbol** | **kotlin.String** | Blockchain symbol identifier | 
**exOrdId** | **kotlin.Long** | The unique order id assigned by the exchange |  [optional]
**price** | **kotlin.Double** | The limit price for the order |  [optional]
**text** | **kotlin.String** | The reason for rejecting the order, if applicable |  [optional]
**lastShares** | **kotlin.Double** | The executed quantity for the order&#39;s last fill |  [optional]
**lastPx** | **kotlin.Double** | The executed price for the last fill |  [optional]
**leavesQty** | **kotlin.Double** | For Open and Partially Filled orders this is the remaining quantity open for execution. For Canceled and Expired orders this is the quantity than was still open before cancellation/expiration. For Rejected order this is equal to orderQty. For other states this is always zero. |  [optional]
**cumQty** | **kotlin.Double** | The quantity of the order which has been filled |  [optional]
**avgPx** | **kotlin.Double** | Calculated the Volume Weighted Average Price of all fills for this order |  [optional]
**timestamp** | **kotlin.Long** | Time in ms since 01/01/1970 (epoch) |  [optional]



