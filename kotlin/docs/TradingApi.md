# TradingApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createOrder**](TradingApi.md#createOrder) | **POST** /orders | Add an order
[**deleteAllOrders**](TradingApi.md#deleteAllOrders) | **DELETE** /orders | Delete all open orders (of a symbol, if specified)
[**deleteOrder**](TradingApi.md#deleteOrder) | **DELETE** /orders/{orderId} | Cancel a trade
[**getFees**](TradingApi.md#getFees) | **GET** /fees | Get current fee level
[**getOrderById**](TradingApi.md#getOrderById) | **GET** /orders/{orderId} | Get a specific order
[**getOrders**](TradingApi.md#getOrders) | **GET** /orders | Get a list orders


<a name="createOrder"></a>
# **createOrder**
> OrderSummary createOrder(baseOrder)

Add an order

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = TradingApi()
val baseOrder : BaseOrder =  // BaseOrder | Trade
try {
    val result : OrderSummary = apiInstance.createOrder(baseOrder)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TradingApi#createOrder")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TradingApi#createOrder")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **baseOrder** | [**BaseOrder**](BaseOrder.md)| Trade |

### Return type

[**OrderSummary**](OrderSummary.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="deleteAllOrders"></a>
# **deleteAllOrders**
> deleteAllOrders(symbol)

Delete all open orders (of a symbol, if specified)

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = TradingApi()
val symbol : kotlin.String = symbol_example // kotlin.String | 
try {
    apiInstance.deleteAllOrders(symbol)
} catch (e: ClientException) {
    println("4xx response calling TradingApi#deleteAllOrders")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TradingApi#deleteAllOrders")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **kotlin.String**|  | [optional]

### Return type

null (empty response body)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a name="deleteOrder"></a>
# **deleteOrder**
> deleteOrder(orderId)

Cancel a trade

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = TradingApi()
val orderId : kotlin.Long = 789 // kotlin.Long | Order ID
try {
    apiInstance.deleteOrder(orderId)
} catch (e: ClientException) {
    println("4xx response calling TradingApi#deleteOrder")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TradingApi#deleteOrder")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderId** | **kotlin.Long**| Order ID |

### Return type

null (empty response body)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a name="getFees"></a>
# **getFees**
> Fees getFees()

Get current fee level

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = TradingApi()
try {
    val result : Fees = apiInstance.getFees()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TradingApi#getFees")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TradingApi#getFees")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Fees**](Fees.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getOrderById"></a>
# **getOrderById**
> OrderSummary getOrderById(orderId)

Get a specific order

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = TradingApi()
val orderId : kotlin.Long = 789 // kotlin.Long | Order ID
try {
    val result : OrderSummary = apiInstance.getOrderById(orderId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TradingApi#getOrderById")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TradingApi#getOrderById")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderId** | **kotlin.Long**| Order ID |

### Return type

[**OrderSummary**](OrderSummary.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getOrders"></a>
# **getOrders**
> kotlin.Array&lt;OrderSummary&gt; getOrders(symbol, from, to, status, limit)

Get a list orders

Returns live and historic orders, defaulting to live orders. Returns at most 100 results, use timestamp to paginate for further results

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = TradingApi()
val symbol : kotlin.String = symbol_example // kotlin.String | Only return results for this symbol
val from : kotlin.Long = 789 // kotlin.Long | Epoch timestamp in ms
val to : kotlin.Long = 789 // kotlin.Long | Epoch timestamp in ms
val status : OrderStatus =  // OrderStatus | Order Status
val limit : kotlin.Int = 100 // kotlin.Int | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default. 
try {
    val result : kotlin.Array<OrderSummary> = apiInstance.getOrders(symbol, from, to, status, limit)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling TradingApi#getOrders")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling TradingApi#getOrders")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **kotlin.String**| Only return results for this symbol | [optional]
 **from** | **kotlin.Long**| Epoch timestamp in ms | [optional]
 **to** | **kotlin.Long**| Epoch timestamp in ms | [optional]
 **status** | [**OrderStatus**](.md)| Order Status | [optional] [enum: OPEN, REJECTED, CANCELED, FILLED, EXPIRED]
 **limit** | **kotlin.Int**| Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  | [optional]

### Return type

[**kotlin.Array&lt;OrderSummary&gt;**](OrderSummary.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

