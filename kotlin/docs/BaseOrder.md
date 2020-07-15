
# BaseOrder

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**clOrdId** | **kotlin.String** | Reference field provided by client. Cannot exceed 20 characters, only alphanumeric characters are allowed. | 
**ordType** | [**OrdType**](OrdType.md) |  | 
**symbol** | **kotlin.String** | Blockchain symbol identifier | 
**side** | [**Side**](Side.md) |  | 
**orderQty** | **kotlin.Double** | The order size in the terms of the base currency | 
**timeInForce** | [**TimeInForce**](TimeInForce.md) |  |  [optional]
**price** | **kotlin.Double** | The limit price for the order |  [optional]
**expireDate** | **kotlin.Int** | expiry date in the format YYYYMMDD |  [optional]
**minQty** | **kotlin.Double** | The minimum quantity required for an IOC fill |  [optional]
**stopPx** | **kotlin.Double** | The limit price for the order |  [optional]



