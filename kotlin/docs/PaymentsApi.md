# PaymentsApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createWithdrawal**](PaymentsApi.md#createWithdrawal) | **POST** /withdrawals | Request a withdrawal
[**getAccountByTypeAndCurrency**](PaymentsApi.md#getAccountByTypeAndCurrency) | **GET** /accounts/{account}/{currency} | Receive current account balances
[**getAccounts**](PaymentsApi.md#getAccounts) | **GET** /accounts | Receive current account balances
[**getDepositAddress**](PaymentsApi.md#getDepositAddress) | **POST** /deposits/{currency} | Get a deposit address. Currently only crypto currencies are supported
[**getDepositById**](PaymentsApi.md#getDepositById) | **GET** /deposits/{depositId} | Get status about a deposit
[**getDeposits**](PaymentsApi.md#getDeposits) | **GET** /deposits | Get a list of deposits
[**getWhitelist**](PaymentsApi.md#getWhitelist) | **GET** /whitelist | Get a list of all whitelisted withdrawal accounts
[**getWhitelistByCurrency**](PaymentsApi.md#getWhitelistByCurrency) | **GET** /whitelist/{currency} | Get a list of all whitelisted withdrawal accounts
[**getWithdrawalById**](PaymentsApi.md#getWithdrawalById) | **GET** /withdrawals/{withdrawalId} | Get status about a withdrawal
[**getWithdrawals**](PaymentsApi.md#getWithdrawals) | **GET** /withdrawals | Get a list of withdrawals


<a name="createWithdrawal"></a>
# **createWithdrawal**
> WithdrawalInfo createWithdrawal(createWithdrawalRequest)

Request a withdrawal

Call &#x60;GET /whitelist&#x60; first to retrieve the ID of the beneficiary. To add a beneficiary to the whitelist, please visit the profile page in the Exchange. This call only works if 2FA is enabled on the account.

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
val createWithdrawalRequest : CreateWithdrawalRequest =  // CreateWithdrawalRequest | 
try {
    val result : WithdrawalInfo = apiInstance.createWithdrawal(createWithdrawalRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#createWithdrawal")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#createWithdrawal")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createWithdrawalRequest** | [**CreateWithdrawalRequest**](CreateWithdrawalRequest.md)|  |

### Return type

[**WithdrawalInfo**](WithdrawalInfo.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="getAccountByTypeAndCurrency"></a>
# **getAccountByTypeAndCurrency**
> Balance getAccountByTypeAndCurrency(account, currency)

Receive current account balances

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
val account : kotlin.String = primary // kotlin.String | Account
val currency : kotlin.String = currency_example // kotlin.String | Currency
try {
    val result : Balance = apiInstance.getAccountByTypeAndCurrency(account, currency)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getAccountByTypeAndCurrency")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getAccountByTypeAndCurrency")
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

<a name="getAccounts"></a>
# **getAccounts**
> BalanceMap getAccounts()

Receive current account balances

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
try {
    val result : BalanceMap = apiInstance.getAccounts()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getAccounts")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getAccounts")
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

<a name="getDepositAddress"></a>
# **getDepositAddress**
> DepositAddressCrypto getDepositAddress(currency)

Get a deposit address. Currently only crypto currencies are supported

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
val currency : kotlin.String = currency_example // kotlin.String | Currency
try {
    val result : DepositAddressCrypto = apiInstance.getDepositAddress(currency)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getDepositAddress")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getDepositAddress")
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

<a name="getDepositById"></a>
# **getDepositById**
> DepositInfo getDepositById(depositId)

Get status about a deposit

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
val depositId : kotlin.String = depositId_example // kotlin.String | Deposit ID
try {
    val result : DepositInfo = apiInstance.getDepositById(depositId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getDepositById")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getDepositById")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **depositId** | **kotlin.String**| Deposit ID |

### Return type

[**DepositInfo**](DepositInfo.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getDeposits"></a>
# **getDeposits**
> kotlin.Array&lt;DepositInfo&gt; getDeposits(from, to)

Get a list of deposits

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
val from : kotlin.Long = 789 // kotlin.Long | Epoch timestamp in ms
val to : kotlin.Long = 789 // kotlin.Long | Epoch timestamp in ms
try {
    val result : kotlin.Array<DepositInfo> = apiInstance.getDeposits(from, to)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getDeposits")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getDeposits")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **kotlin.Long**| Epoch timestamp in ms | [optional]
 **to** | **kotlin.Long**| Epoch timestamp in ms | [optional]

### Return type

[**kotlin.Array&lt;DepositInfo&gt;**](DepositInfo.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWhitelist"></a>
# **getWhitelist**
> kotlin.Array&lt;WhitelistEntry&gt; getWhitelist()

Get a list of all whitelisted withdrawal accounts

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
try {
    val result : kotlin.Array<WhitelistEntry> = apiInstance.getWhitelist()
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getWhitelist")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getWhitelist")
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

<a name="getWhitelistByCurrency"></a>
# **getWhitelistByCurrency**
> kotlin.Array&lt;WhitelistEntry&gt; getWhitelistByCurrency(currency)

Get a list of all whitelisted withdrawal accounts

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
val currency : kotlin.String = currency_example // kotlin.String | Currency
try {
    val result : kotlin.Array<WhitelistEntry> = apiInstance.getWhitelistByCurrency(currency)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getWhitelistByCurrency")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getWhitelistByCurrency")
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

<a name="getWithdrawalById"></a>
# **getWithdrawalById**
> WithdrawalInfo getWithdrawalById(withdrawalId)

Get status about a withdrawal

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
val withdrawalId : kotlin.String = withdrawalId_example // kotlin.String | Withdrawal ID
try {
    val result : WithdrawalInfo = apiInstance.getWithdrawalById(withdrawalId)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getWithdrawalById")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getWithdrawalById")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdrawalId** | **kotlin.String**| Withdrawal ID |

### Return type

[**WithdrawalInfo**](WithdrawalInfo.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getWithdrawals"></a>
# **getWithdrawals**
> kotlin.Array&lt;WithdrawalInfo&gt; getWithdrawals(from, to)

Get a list of withdrawals

### Example
```kotlin
// Import classes:
//import org.openapitools.client.infrastructure.*
//import com.blockchain.exchange.rest.model.*

val apiInstance = PaymentsApi()
val from : kotlin.Long = 789 // kotlin.Long | Epoch timestamp in ms
val to : kotlin.Long = 789 // kotlin.Long | Epoch timestamp in ms
try {
    val result : kotlin.Array<WithdrawalInfo> = apiInstance.getWithdrawals(from, to)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling PaymentsApi#getWithdrawals")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling PaymentsApi#getWithdrawals")
    e.printStackTrace()
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **kotlin.Long**| Epoch timestamp in ms | [optional]
 **to** | **kotlin.Long**| Epoch timestamp in ms | [optional]

### Return type

[**kotlin.Array&lt;WithdrawalInfo&gt;**](WithdrawalInfo.md)

### Authorization


Configure ApiKeyAuth:
    ApiClient.apiKey["X-API-Token"] = ""
    ApiClient.apiKeyPrefix["X-API-Token"] = ""

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

