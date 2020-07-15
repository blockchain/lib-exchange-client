# BaseOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ClOrdId** | **string** | Reference field provided by client. Cannot exceed 20 characters, only alphanumeric characters are allowed. | 
**OrdType** | [**OrdType**](ordType.md) |  | 
**Symbol** | **string** | Blockchain symbol identifier | 
**Side** | [**Side**](side.md) |  | 
**OrderQty** | **float64** | The order size in the terms of the base currency | 
**TimeInForce** | [**TimeInForce**](TimeInForce.md) |  | [optional] 
**Price** | **float64** | The limit price for the order | [optional] 
**ExpireDate** | **int32** | expiry date in the format YYYYMMDD | [optional] 
**MinQty** | **float64** | The minimum quantity required for an IOC fill | [optional] 
**StopPx** | **float64** | The limit price for the order | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


