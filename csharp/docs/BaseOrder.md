
# Org.OpenAPITools.com.blockchain.exchange.rest.model.BaseOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ClOrdId** | **string** | Reference field provided by client and cannot exceed 20 characters | 
**OrdType** | [**OrdType**](OrdType.md) |  | 
**Symbol** | **string** | Blockchain symbol identifier | 
**Side** | [**Side**](Side.md) |  | 
**OrderQty** | **double** | The order size in the terms of the base currency | 
**TimeInForce** | **TimeInForce** |  | [optional] 
**Price** | **double** | The limit price for the order | [optional] 
**ExpireDate** | **int** | expiry date in the format YYYYMMDD | [optional] 
**MinQty** | **double** | The minimum quantity required for an IOC fill | [optional] 
**StopPx** | **double** | The limit price for the order | [optional] 

[[Back to Model list]](../README.md#documentation-for-models)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to README]](../README.md)

