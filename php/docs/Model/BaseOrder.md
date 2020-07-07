# # BaseOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cl_ord_id** | **string** | Reference field provided by client and cannot exceed 20 characters | 
**ord_type** | [**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\OrdType**](OrdType.md) |  | 
**symbol** | **string** | Blockchain symbol identifier | 
**side** | [**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\Side**](Side.md) |  | 
**order_qty** | **double** | The order size in the terms of the base currency | 
**time_in_force** | [**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\TimeInForce**](TimeInForce.md) |  | [optional] 
**price** | **double** | The limit price for the order | [optional] 
**expire_date** | **int** | expiry date in the format YYYYMMDD | [optional] 
**min_qty** | **double** | The minimum quantity required for an IOC fill | [optional] 
**stop_px** | **double** | The limit price for the order | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)


