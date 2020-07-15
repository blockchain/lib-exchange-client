# com.blockchain.exchange.rest\UnauthenticatedApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_l2_order_book**](UnauthenticatedApi.md#get_l2_order_book) | **Get** /l2/{symbol} | L2 Order Book
[**get_l3_order_book**](UnauthenticatedApi.md#get_l3_order_book) | **Get** /l3/{symbol} | L3 Order Book
[**get_symbol_by_name**](UnauthenticatedApi.md#get_symbol_by_name) | **Get** /symbols/{symbol} | Symbols
[**get_symbols**](UnauthenticatedApi.md#get_symbols) | **Get** /symbols | Symbols
[**get_ticker_by_symbol**](UnauthenticatedApi.md#get_ticker_by_symbol) | **Get** /tickers/{symbol} | Price
[**get_tickers**](UnauthenticatedApi.md#get_tickers) | **Get** /tickers | Price



## get_l2_order_book

> crate::models::OrderBook get_l2_order_book(symbol)
L2 Order Book

Level 2 Order Book data is available through the l2 channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**symbol** | **String** | Symbol | [required] |

### Return type

[**crate::models::OrderBook**](OrderBook.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_l3_order_book

> crate::models::OrderBook get_l3_order_book(symbol)
L3 Order Book

Level 3 Order Book data is available through the l3 channel. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes. In contrast to the L2 order book, the L3 order book contains all individual orders without aggregation.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**symbol** | **String** | Symbol | [required] |

### Return type

[**crate::models::OrderBook**](OrderBook.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_symbol_by_name

> crate::models::SymbolStatus get_symbol_by_name(symbol)
Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**symbol** | **String** | Symbol | [required] |

### Return type

[**crate::models::SymbolStatus**](SymbolStatus.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_symbols

> ::std::collections::HashMap<String, crate::models::SymbolStatus> get_symbols()
Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Parameters

This endpoint does not need any parameter.

### Return type

[**::std::collections::HashMap<String, crate::models::SymbolStatus>**](SymbolStatus.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_ticker_by_symbol

> crate::models::PriceEvent get_ticker_by_symbol(symbol)
Price

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**symbol** | **String** | Symbol | [required] |

### Return type

[**crate::models::PriceEvent**](PriceEvent.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_tickers

> Vec<crate::models::PriceEvent> get_tickers()
Price

### Parameters

This endpoint does not need any parameter.

### Return type

[**Vec<crate::models::PriceEvent>**](PriceEvent.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

