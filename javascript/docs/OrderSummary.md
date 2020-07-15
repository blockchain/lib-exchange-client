# BlockchainComExchangeRestApi.OrderSummary

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exOrdId** | **Number** | The unique order id assigned by the exchange | [optional] 
**clOrdId** | **String** | Reference field provided by client. Cannot exceed 20 characters, only alphanumeric characters are allowed. | 
**ordType** | [**OrdType**](OrdType.md) |  | 
**ordStatus** | [**OrderStatus**](OrderStatus.md) |  | 
**side** | [**Side**](Side.md) |  | 
**price** | **Number** | The limit price for the order | [optional] 
**text** | **String** | The reason for rejecting the order, if applicable | [optional] 
**symbol** | **String** | Blockchain symbol identifier | 
**lastShares** | **Number** | The executed quantity for the order&#39;s last fill | [optional] 
**lastPx** | **Number** | The executed price for the last fill | [optional] 
**leavesQty** | **Number** | For Open and Partially Filled orders this is the remaining quantity open for execution. For Canceled and Expired orders this is the quantity than was still open before cancellation/expiration. For Rejected order this is equal to orderQty. For other states this is always zero. | [optional] 
**cumQty** | **Number** | The quantity of the order which has been filled | [optional] 
**avgPx** | **Number** | Calculated the Volume Weighted Average Price of all fills for this order | [optional] 
**timestamp** | **Number** | Time in ms since 01/01/1970 (epoch) | [optional] 


