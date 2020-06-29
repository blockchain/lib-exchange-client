# com.blockchain.exchange.rest\UnauthenticatedApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetL2OrderBook**](UnauthenticatedApi.md#GetL2OrderBook) | **Get** /l2/{symbol} | L2 Order Book
[**GetL3OrderBook**](UnauthenticatedApi.md#GetL3OrderBook) | **Get** /l3/{symbol} | L3 Order Book
[**GetSymbolByName**](UnauthenticatedApi.md#GetSymbolByName) | **Get** /symbols/{symbol} | Symbols
[**GetSymbols**](UnauthenticatedApi.md#GetSymbols) | **Get** /symbols | Symbols
[**GetTickerBySymbol**](UnauthenticatedApi.md#GetTickerBySymbol) | **Get** /tickers/{symbol} | Price
[**GetTickers**](UnauthenticatedApi.md#GetTickers) | **Get** /tickers | Price



## GetL2OrderBook

> OrderBook GetL2OrderBook(ctx, symbol)

L2 Order Book

Level 2 Order Book data is available through the l2 channel. This channel returns the volume available at each price. All the price levels are retrieved with this channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**symbol** | **string**| Symbol | 

### Return type

[**OrderBook**](OrderBook.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetL3OrderBook

> OrderBook GetL3OrderBook(ctx, symbol)

L3 Order Book

Level 3 Order Book data is available through the l3 channel. This channel returns all the order updates reaching the exchange; by applying the updates to the snapshot you can recreate the full state of the orderbook. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**symbol** | **string**| Symbol | 

### Return type

[**OrderBook**](OrderBook.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSymbolByName

> SymbolStatus GetSymbolByName(ctx, symbol)

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**symbol** | **string**| Symbol | 

### Return type

[**SymbolStatus**](SymbolStatus.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSymbols

> map[string]SymbolStatus GetSymbols(ctx, )

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**map[string]SymbolStatus**](SymbolStatus.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTickerBySymbol

> PriceEvent GetTickerBySymbol(ctx, symbol)

Price

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**symbol** | **string**| Symbol | 

### Return type

[**PriceEvent**](PriceEvent.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTickers

> []PriceEvent GetTickers(ctx, )

Price

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**[]PriceEvent**](PriceEvent.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

