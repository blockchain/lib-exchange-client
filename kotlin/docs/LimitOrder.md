

# LimitOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ordType** | [**OrdTypeEnum**](#OrdTypeEnum) |  | 
**clOrdId** | **String** | Reference field provided by client and cannot exceed 20 characters | 
**symbol** | **String** | Blockchain symbol identifier | 
**side** | [**Side**](Side.md) |  | 
**orderQty** | **Double** | The order size in the terms of the base currency | 
**timeInForce** | [**TimeInForceLimit**](TimeInForceLimit.md) |  | 
**price** | **Double** | The limit price for the order | 
**expireDate** | **Integer** | expiry date in the format YYYYMMDD |  [optional]
**minQty** | **Double** | The minimum quantity required for an IOC fill |  [optional]



## Enum: OrdTypeEnum

Name | Value
---- | -----
MARKET | &quot;market&quot;
LIMIT | &quot;limit&quot;
STOP | &quot;stop&quot;
STOPLIMIT | &quot;stopLimit&quot;


## Implemented Interfaces

* CreateOrderRequest


