# BlockchainComExchangeRestApi.BaseOrder

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**clOrdId** | **String** | Reference field provided by client and cannot exceed 20 characters | 
**ordType** | [**OrdType**](OrdType.md) |  | 
**symbol** | **String** | Blockchain symbol identifier | 
**side** | [**Side**](Side.md) |  | 
**orderQty** | **Number** | The order size in the terms of the base currency | 
**timeInForce** | [**TimeInForce**](TimeInForce.md) |  | [optional] 
**price** | **Number** | The limit price for the order | [optional] 
**expireDate** | **Number** | expiry date in the format YYYYMMDD | [optional] 
**minQty** | **Number** | The minimum quantity required for an IOC fill | [optional] 
**stopPx** | **Number** | The limit price for the order | [optional] 


