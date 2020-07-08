# UnauthenticatedApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getL2OrderBook**](UnauthenticatedApi.md#getL2OrderBook) | **GET** /l2/{symbol} | L2 Order Book
[**getL3OrderBook**](UnauthenticatedApi.md#getL3OrderBook) | **GET** /l3/{symbol} | L3 Order Book
[**getSymbolByName**](UnauthenticatedApi.md#getSymbolByName) | **GET** /symbols/{symbol} | Symbols
[**getSymbols**](UnauthenticatedApi.md#getSymbols) | **GET** /symbols | Symbols
[**getTickerBySymbol**](UnauthenticatedApi.md#getTickerBySymbol) | **GET** /tickers/{symbol} | Price
[**getTickers**](UnauthenticatedApi.md#getTickers) | **GET** /tickers | Price


<a name="getL2OrderBook"></a>
# **getL2OrderBook**
> OrderBook getL2OrderBook(symbol)

L2 Order Book

Level 2 Order Book data is available through the l2 channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = UnauthenticatedApi()
val symbol : kotlin.String = symbol_example // kotlin.String | Symbol
try {
    val result : OrderBook = apiInstance.getL2OrderBook(symbol)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UnauthenticatedApi#getL2OrderBook")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UnauthenticatedApi#getL2OrderBook")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **kotlin.String**| Symbol |

### Return type

[**OrderBook**](OrderBook.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getL3OrderBook"></a>
# **getL3OrderBook**
> OrderBook getL3OrderBook(symbol)

L3 Order Book

Level 3 Order Book data is available through the l3 channel. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = UnauthenticatedApi()
val symbol : kotlin.String = symbol_example // kotlin.String | Symbol
try {
    val result : OrderBook = apiInstance.getL3OrderBook(symbol)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UnauthenticatedApi#getL3OrderBook")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UnauthenticatedApi#getL3OrderBook")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **kotlin.String**| Symbol |

### Return type

[**OrderBook**](OrderBook.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSymbolByName"></a>
# **getSymbolByName**
> SymbolStatus getSymbolByName(symbol)

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = UnauthenticatedApi()
val symbol : kotlin.String = symbol_example // kotlin.String | Symbol
try {
    val result : SymbolStatus = apiInstance.getSymbolByName(symbol)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UnauthenticatedApi#getSymbolByName")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UnauthenticatedApi#getSymbolByName")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **kotlin.String**| Symbol |

### Return type

[**SymbolStatus**](SymbolStatus.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSymbols"></a>
# **getSymbols**
> kotlin.collections.Map&lt;kotlin.String, SymbolStatus&gt; getSymbols()

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = UnauthenticatedApi()
try {
    val result : kotlin.collections.Map<kotlin.String, SymbolStatus> = apiInstance.getSymbols()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UnauthenticatedApi#getSymbols")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UnauthenticatedApi#getSymbols")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.collections.Map&lt;kotlin.String, SymbolStatus&gt;**](SymbolStatus.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getTickerBySymbol"></a>
# **getTickerBySymbol**
> PriceEvent getTickerBySymbol(symbol)

Price

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = UnauthenticatedApi()
val symbol : kotlin.String = symbol_example // kotlin.String | Symbol
try {
    val result : PriceEvent = apiInstance.getTickerBySymbol(symbol)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UnauthenticatedApi#getTickerBySymbol")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UnauthenticatedApi#getTickerBySymbol")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **kotlin.String**| Symbol |

### Return type

[**PriceEvent**](PriceEvent.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getTickers"></a>
# **getTickers**
> kotlin.Array&lt;PriceEvent&gt; getTickers()

Price

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = UnauthenticatedApi()
try {
    val result : kotlin.Array<PriceEvent> = apiInstance.getTickers()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling UnauthenticatedApi#getTickers")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling UnauthenticatedApi#getTickers")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.Array&lt;PriceEvent&gt;**](PriceEvent.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

