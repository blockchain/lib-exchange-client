
# BaseOrder

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**clOrdId** | **kotlin.String** | Reference field provided by client and cannot exceed 20 characters | 
**symbol** | **kotlin.String** | Blockchain symbol identifier | 
**side** | [**Side**](Side.md) |  | 
**orderQty** | **kotlin.Double** | The order size in the terms of the base currency | 
**ordType** | [**inline**](#OrdTypeEnum) |  |  [optional]
**timeInForce** | [**TimeInForce**](TimeInForce.md) |  |  [optional]
**price** | **kotlin.Double** | The limit price for the order |  [optional]
**expireDate** | **kotlin.Int** | expiry date in the format YYYYMMDD |  [optional]
**minQty** | **kotlin.Double** | The minimum quantity required for an IOC fill |  [optional]
**stopPx** | **kotlin.Double** | The limit price for the order |  [optional]


<a name="OrdTypeEnum"></a>
## Enum: ordType
Name | Value
---- | -----
ordType | MARKET, LIMIT, STOP, STOPLIMIT



