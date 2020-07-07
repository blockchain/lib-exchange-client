# DefaultApi

All URIs are relative to *https://api.exchange.blockchain.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**accountsAccountCurrencyGet**](DefaultApi.md#accountsAccountCurrencyGet) | **GET** /accounts/{account}/{currency} | Receive current account balances
[**accountsGet**](DefaultApi.md#accountsGet) | **GET** /accounts | Receive current account balances
[**depositAddressesCurrencyGet**](DefaultApi.md#depositAddressesCurrencyGet) | **GET** /deposit-addresses/{currency} | Get a deposit address
[**feesGet**](DefaultApi.md#feesGet) | **GET** /fees | Get current fee level
[**l2PairGet**](DefaultApi.md#l2PairGet) | **GET** /l2/{pair} | L2 Order Book
[**l3PairGet**](DefaultApi.md#l3PairGet) | **GET** /l3/{pair} | L3 Order Book
[**ordersDelete**](DefaultApi.md#ordersDelete) | **DELETE** /orders | Delete all open orders (of a symbol, if specified)
[**ordersGet**](DefaultApi.md#ordersGet) | **GET** /orders | Get a list of orders
[**ordersOrderIdDelete**](DefaultApi.md#ordersOrderIdDelete) | **DELETE** /orders/{orderId} | Cancel a trade
[**ordersOrderIdGet**](DefaultApi.md#ordersOrderIdGet) | **GET** /orders/{orderId} | Get a specific order
[**ordersPost**](DefaultApi.md#ordersPost) | **POST** /orders | Add an order
[**symbolsGet**](DefaultApi.md#symbolsGet) | **GET** /symbols | Symbols
[**symbolsPairGet**](DefaultApi.md#symbolsPairGet) | **GET** /symbols/{pair} | Symbols
[**tickersGet**](DefaultApi.md#tickersGet) | **GET** /tickers | Price
[**tickersPairGet**](DefaultApi.md#tickersPairGet) | **GET** /tickers/{pair} | Price
[**tradesGet**](DefaultApi.md#tradesGet) | **GET** /trades | List historical trades
[**whitelistCurrencyGet**](DefaultApi.md#whitelistCurrencyGet) | **GET** /whitelist/{currency} | Get a list of all whitelisted withdrawal accounts
[**whitelistGet**](DefaultApi.md#whitelistGet) | **GET** /whitelist | Get a list of all whitelisted withdrawal accounts
[**withdrawalsPost**](DefaultApi.md#withdrawalsPost) | **POST** /withdrawals | Request a withdrawal
[**withdrawalsWithdrawalIdGet**](DefaultApi.md#withdrawalsWithdrawalIdGet) | **GET** /withdrawals/{withdrawalId} | Get status about a withdrawal


<a name="accountsAccountCurrencyGet"></a>
# **accountsAccountCurrencyGet**
> Balance accountsAccountCurrencyGet(account, currency)

Receive current account balances

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val account : kotlin.String = account_example // kotlin.String | Account
val currency : kotlin.String = currency_example // kotlin.String | Currency
try {
    val result : Balance = apiInstance.accountsAccountCurrencyGet(account, currency)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#accountsAccountCurrencyGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#accountsAccountCurrencyGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **account** | **kotlin.String**| Account |
 **currency** | **kotlin.String**| Currency |

### Return type

[**Balance**](Balance.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="accountsGet"></a>
# **accountsGet**
> BalanceMap accountsGet()

Receive current account balances

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
try {
    val result : BalanceMap = apiInstance.accountsGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#accountsGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#accountsGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**BalanceMap**](BalanceMap.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="depositAddressesCurrencyGet"></a>
# **depositAddressesCurrencyGet**
> DepositAddressCrypto depositAddressesCurrencyGet(currency)

Get a deposit address

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val currency : kotlin.String = currency_example // kotlin.String | Currency
try {
    val result : DepositAddressCrypto = apiInstance.depositAddressesCurrencyGet(currency)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#depositAddressesCurrencyGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#depositAddressesCurrencyGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **kotlin.String**| Currency |

### Return type

[**DepositAddressCrypto**](DepositAddressCrypto.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="feesGet"></a>
# **feesGet**
> Fees feesGet()

Get current fee level

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
try {
    val result : Fees = apiInstance.feesGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#feesGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#feesGet")
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

<a name="l2PairGet"></a>
# **l2PairGet**
> OrderBook l2PairGet(pair)

L2 Order Book

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val pair : kotlin.String = pair_example // kotlin.String | Pair
try {
    val result : OrderBook = apiInstance.l2PairGet(pair)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#l2PairGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#l2PairGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pair** | **kotlin.String**| Pair |

### Return type

[**OrderBook**](OrderBook.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="l3PairGet"></a>
# **l3PairGet**
> OrderBook l3PairGet(pair)

L3 Order Book

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val pair : kotlin.String = pair_example // kotlin.String | Pair
try {
    val result : OrderBook = apiInstance.l3PairGet(pair)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#l3PairGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#l3PairGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pair** | **kotlin.String**| Pair |

### Return type

[**OrderBook**](OrderBook.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="ordersDelete"></a>
# **ordersDelete**
> ordersDelete(symbol)

Delete all open orders (of a symbol, if specified)

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val symbol : kotlin.String = symbol_example // kotlin.String | 
try {
    apiInstance.ordersDelete(symbol)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#ordersDelete")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#ordersDelete")
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

<a name="ordersGet"></a>
# **ordersGet**
> kotlin.Array&lt;OrderSummary&gt; ordersGet(status, from, to, offset)

Get a list of orders

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val status : OrderStatus =  // OrderStatus | Order Status
val from : kotlin.Long = 789 // kotlin.Long | Time From
val to : kotlin.Long = 789 // kotlin.Long | Time To
val offset : kotlin.Long = 789 // kotlin.Long | Offset
try {
    val result : kotlin.Array<OrderSummary> = apiInstance.ordersGet(status, from, to, offset)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#ordersGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#ordersGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **status** | [**OrderStatus**](.md)| Order Status | [optional] [enum: PENDING, OPEN, REJECTED, CANCELLED, FILLED, PARTIAL, EXPIRED]
 **from** | **kotlin.Long**| Time From | [optional]
 **to** | **kotlin.Long**| Time To | [optional]
 **offset** | **kotlin.Long**| Offset | [optional]

### Return type

[**kotlin.Array&lt;OrderSummary&gt;**](OrderSummary.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="ordersOrderIdDelete"></a>
# **ordersOrderIdDelete**
> ordersOrderIdDelete(orderId)

Cancel a trade

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val orderId : kotlin.Long = 789 // kotlin.Long | Order ID
try {
    apiInstance.ordersOrderIdDelete(orderId)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#ordersOrderIdDelete")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#ordersOrderIdDelete")
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

<a name="ordersOrderIdGet"></a>
# **ordersOrderIdGet**
> OrderSummary ordersOrderIdGet(orderId)

Get a specific order

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val orderId : kotlin.Long = 789 // kotlin.Long | Order ID
try {
    val result : OrderSummary = apiInstance.ordersOrderIdGet(orderId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#ordersOrderIdGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#ordersOrderIdGet")
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

<a name="ordersPost"></a>
# **ordersPost**
> OrderSummary ordersPost(baseOrder)

Add an order

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val baseOrder : BaseOrder =  // BaseOrder | Trade
try {
    val result : OrderSummary = apiInstance.ordersPost(baseOrder)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#ordersPost")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#ordersPost")
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

<a name="symbolsGet"></a>
# **symbolsGet**
> kotlin.collections.Map&lt;kotlin.String, SymbolStatus&gt; symbolsGet()

Symbols

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
try {
    val result : kotlin.collections.Map<kotlin.String, SymbolStatus> = apiInstance.symbolsGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#symbolsGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#symbolsGet")
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

<a name="symbolsPairGet"></a>
# **symbolsPairGet**
> SymbolStatus symbolsPairGet(pair)

Symbols

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val pair : kotlin.String = pair_example // kotlin.String | Pair
try {
    val result : SymbolStatus = apiInstance.symbolsPairGet(pair)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#symbolsPairGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#symbolsPairGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pair** | **kotlin.String**| Pair |

### Return type

[**SymbolStatus**](SymbolStatus.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="tickersGet"></a>
# **tickersGet**
> kotlin.Array&lt;PriceEvent&gt; tickersGet()

Price

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
try {
    val result : kotlin.Array<PriceEvent> = apiInstance.tickersGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#tickersGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#tickersGet")
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

<a name="tickersPairGet"></a>
# **tickersPairGet**
> PriceEvent tickersPairGet(pair)

Price

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val pair : kotlin.String = pair_example // kotlin.String | Pair
try {
    val result : PriceEvent = apiInstance.tickersPairGet(pair)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#tickersPairGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#tickersPairGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **pair** | **kotlin.String**| Pair |

### Return type

[**PriceEvent**](PriceEvent.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="tradesGet"></a>
# **tradesGet**
> kotlin.Array&lt;OrderSummary&gt; tradesGet()

List historical trades

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
try {
    val result : kotlin.Array<OrderSummary> = apiInstance.tradesGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#tradesGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#tradesGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.Array&lt;OrderSummary&gt;**](OrderSummary.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="whitelistCurrencyGet"></a>
# **whitelistCurrencyGet**
> kotlin.Array&lt;WhitelistEntry&gt; whitelistCurrencyGet(currency)

Get a list of all whitelisted withdrawal accounts

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val currency : kotlin.String = currency_example // kotlin.String | Currency
try {
    val result : kotlin.Array<WhitelistEntry> = apiInstance.whitelistCurrencyGet(currency)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#whitelistCurrencyGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#whitelistCurrencyGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **kotlin.String**| Currency |

### Return type

[**kotlin.Array&lt;WhitelistEntry&gt;**](WhitelistEntry.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="whitelistGet"></a>
# **whitelistGet**
> kotlin.Array&lt;WhitelistEntry&gt; whitelistGet()

Get a list of all whitelisted withdrawal accounts

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
try {
    val result : kotlin.Array<WhitelistEntry> = apiInstance.whitelistGet()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#whitelistGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#whitelistGet")
    e.printStackTrace()
}
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**kotlin.Array&lt;WhitelistEntry&gt;**](WhitelistEntry.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="withdrawalsPost"></a>
# **withdrawalsPost**
> CreateWithdrawalResponse withdrawalsPost(createWithdrawalRequest)

Request a withdrawal

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val createWithdrawalRequest : CreateWithdrawalRequest =  // CreateWithdrawalRequest | 
try {
    val result : CreateWithdrawalResponse = apiInstance.withdrawalsPost(createWithdrawalRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#withdrawalsPost")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#withdrawalsPost")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createWithdrawalRequest** | [**CreateWithdrawalRequest**](CreateWithdrawalRequest.md)|  |

### Return type

[**CreateWithdrawalResponse**](CreateWithdrawalResponse.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="withdrawalsWithdrawalIdGet"></a>
# **withdrawalsWithdrawalIdGet**
> GetWithdrawalResponse withdrawalsWithdrawalIdGet(withdrawalId)

Get status about a withdrawal

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = DefaultApi()
val withdrawalId : kotlin.String = withdrawalId_example // kotlin.String | Withdrawal ID
try {
    val result : GetWithdrawalResponse = apiInstance.withdrawalsWithdrawalIdGet(withdrawalId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling DefaultApi#withdrawalsWithdrawalIdGet")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling DefaultApi#withdrawalsWithdrawalIdGet")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdrawalId** | **kotlin.String**| Withdrawal ID |

### Return type

[**GetWithdrawalResponse**](GetWithdrawalResponse.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

