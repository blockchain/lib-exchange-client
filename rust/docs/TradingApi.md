# com.blockchain.exchange.rest\TradingApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_order**](TradingApi.md#create_order) | **Post** /orders | Add an order
[**delete_all_orders**](TradingApi.md#delete_all_orders) | **Delete** /orders | Delete all open orders (of a symbol, if specified)
[**delete_order**](TradingApi.md#delete_order) | **Delete** /orders/{orderId} | Cancel a trade
[**get_fees**](TradingApi.md#get_fees) | **Get** /fees | Get current fee level
[**get_fills**](TradingApi.md#get_fills) | **Get** /trades | Get a list of filled orders
[**get_order_by_id**](TradingApi.md#get_order_by_id) | **Get** /orders/{orderId} | Get a specific order
[**get_orders**](TradingApi.md#get_orders) | **Get** /orders | Get a list orders



## create_order

> crate::models::OrderSummary create_order(base_order)
Add an order

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**base_order** | [**BaseOrder**](BaseOrder.md) | Trade | [required] |

### Return type

[**crate::models::OrderSummary**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## delete_all_orders

> delete_all_orders(symbol)
Delete all open orders (of a symbol, if specified)

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**symbol** | Option<**String**> |  |  |

### Return type

 (empty response body)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## delete_order

> delete_order(order_id)
Cancel a trade

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**order_id** | **i64** | Order ID | [required] |

### Return type

 (empty response body)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_fees

> crate::models::Fees get_fees()
Get current fee level

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::Fees**](Fees.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_fills

> Vec<crate::models::OrderSummary> get_fills(symbol, from, to, limit)
Get a list of filled orders

Returns filled orders, including partial fills. Returns at most 100 results, use timestamp to paginate for further results

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**symbol** | Option<**String**> | Only return results for this symbol |  |
**from** | Option<**i64**> | Epoch timestamp in ms |  |
**to** | Option<**i64**> | Epoch timestamp in ms |  |
**limit** | Option<**i32**> | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  |  |

### Return type

[**Vec<crate::models::OrderSummary>**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_order_by_id

> crate::models::OrderSummary get_order_by_id(order_id)
Get a specific order

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**order_id** | **i64** | Order ID | [required] |

### Return type

[**crate::models::OrderSummary**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_orders

> Vec<crate::models::OrderSummary> get_orders(symbol, from, to, status, limit)
Get a list orders

Returns live and historic orders, defaulting to live orders. Returns at most 100 results, use timestamp to paginate for further results

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**symbol** | Option<**String**> | Only return results for this symbol |  |
**from** | Option<**i64**> | Epoch timestamp in ms |  |
**to** | Option<**i64**> | Epoch timestamp in ms |  |
**status** | Option<[**crate::models::OrderStatus**](.md)> | Order Status |  |
**limit** | Option<**i32**> | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  |  |

### Return type

[**Vec<crate::models::OrderSummary>**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

