# TradingApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createOrder**](TradingApi.md#createOrder) | **POST** /orders | Add an order
[**deleteAllOrders**](TradingApi.md#deleteAllOrders) | **DELETE** /orders | Delete all open orders (of a symbol, if specified)
[**deleteOrder**](TradingApi.md#deleteOrder) | **DELETE** /orders/{orderId} | Cancel a trade
[**getFees**](TradingApi.md#getFees) | **GET** /fees | Get current fee level
[**getFills**](TradingApi.md#getFills) | **GET** /trades | Get a list of filled orders
[**getOrderById**](TradingApi.md#getOrderById) | **GET** /orders/{orderId} | Get a specific order
[**getOrders**](TradingApi.md#getOrders) | **GET** /orders | Get a list orders



## createOrder

> OrderSummary createOrder(baseOrder)

Add an order

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.TradingApi;

TradingApi apiInstance = new TradingApi();
BaseOrder baseOrder = new BaseOrder(); // BaseOrder | Trade
try {
    OrderSummary result = apiInstance.createOrder(baseOrder);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TradingApi#createOrder");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **baseOrder** | [**BaseOrder**](BaseOrder.md)| Trade |

### Return type

[**OrderSummary**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## deleteAllOrders

> deleteAllOrders(symbol)

Delete all open orders (of a symbol, if specified)

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.TradingApi;

TradingApi apiInstance = new TradingApi();
String symbol = null; // String | 
try {
    apiInstance.deleteAllOrders(symbol);
} catch (ApiException e) {
    System.err.println("Exception when calling TradingApi#deleteAllOrders");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**|  | [optional] [default to null]

### Return type

null (empty response body)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## deleteOrder

> deleteOrder(orderId)

Cancel a trade

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.TradingApi;

TradingApi apiInstance = new TradingApi();
Long orderId = null; // Long | Order ID
try {
    apiInstance.deleteOrder(orderId);
} catch (ApiException e) {
    System.err.println("Exception when calling TradingApi#deleteOrder");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderId** | **Long**| Order ID | [default to null]

### Return type

null (empty response body)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## getFees

> Fees getFees()

Get current fee level

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.TradingApi;

TradingApi apiInstance = new TradingApi();
try {
    Fees result = apiInstance.getFees();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TradingApi#getFees");
    e.printStackTrace();
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Fees**](Fees.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getFills

> List&lt;OrderSummary&gt; getFills(symbol, from, to, limit)

Get a list of filled orders

Returns filled orders, including partial fills. Returns at most 100 results, use timestamp to paginate for further results

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.TradingApi;

TradingApi apiInstance = new TradingApi();
String symbol = null; // String | Only return results for this symbol
Long from = null; // Long | Epoch timestamp in ms
Long to = null; // Long | Epoch timestamp in ms
Integer limit = 100; // Integer | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default. 
try {
    List<OrderSummary> result = apiInstance.getFills(symbol, from, to, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TradingApi#getFills");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| Only return results for this symbol | [optional] [default to null]
 **from** | **Long**| Epoch timestamp in ms | [optional] [default to null]
 **to** | **Long**| Epoch timestamp in ms | [optional] [default to null]
 **limit** | **Integer**| Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  | [optional] [default to null]

### Return type

[**List&lt;OrderSummary&gt;**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getOrderById

> OrderSummary getOrderById(orderId)

Get a specific order

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.TradingApi;

TradingApi apiInstance = new TradingApi();
Long orderId = null; // Long | Order ID
try {
    OrderSummary result = apiInstance.getOrderById(orderId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TradingApi#getOrderById");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderId** | **Long**| Order ID | [default to null]

### Return type

[**OrderSummary**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getOrders

> List&lt;OrderSummary&gt; getOrders(symbol, from, to, status, limit)

Get a list orders

Returns live and historic orders, defaulting to live orders. Returns at most 100 results, use timestamp to paginate for further results

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.TradingApi;

TradingApi apiInstance = new TradingApi();
String symbol = null; // String | Only return results for this symbol
Long from = null; // Long | Epoch timestamp in ms
Long to = null; // Long | Epoch timestamp in ms
OrderStatus status = null; // OrderStatus | Order Status
Integer limit = 100; // Integer | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default. 
try {
    List<OrderSummary> result = apiInstance.getOrders(symbol, from, to, status, limit);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling TradingApi#getOrders");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| Only return results for this symbol | [optional] [default to null]
 **from** | **Long**| Epoch timestamp in ms | [optional] [default to null]
 **to** | **Long**| Epoch timestamp in ms | [optional] [default to null]
 **status** | [**OrderStatus**](.md)| Order Status | [optional] [default to null] [enum: OPEN, REJECTED, CANCELED, FILLED, PART_FILLED, EXPIRED]
 **limit** | **Integer**| Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  | [optional] [default to null]

### Return type

[**List&lt;OrderSummary&gt;**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

