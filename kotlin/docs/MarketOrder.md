

# MarketOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ordType** | [**OrdTypeEnum**](#OrdTypeEnum) |  | 
**clOrdId** | **String** | Reference field provided by client and cannot exceed 20 characters | 
**symbol** | **String** | Blockchain symbol identifier | 
**side** | [**Side**](Side.md) |  | 
**orderQty** | **Double** | The order size in the terms of the base currency | 
**timeInForce** | [**TimeInForceLimit**](TimeInForceLimit.md) |  |  [optional]



## Enum: OrdTypeEnum

Name | Value
---- | -----
MARKET | &quot;market&quot;
LIMIT | &quot;limit&quot;
STOP | &quot;stop&quot;
STOPLIMIT | &quot;stopLimit&quot;


## Implemented Interfaces

* CreateOrderRequest


