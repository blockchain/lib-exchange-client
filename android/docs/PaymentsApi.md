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



## createWithdrawal

> WithdrawalInfo createWithdrawal(createWithdrawalRequest)

Request a withdrawal

This call only works if 2FA is enabled on the account.

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
CreateWithdrawalRequest createWithdrawalRequest = new CreateWithdrawalRequest(); // CreateWithdrawalRequest | 
try {
    WithdrawalInfo result = apiInstance.createWithdrawal(createWithdrawalRequest);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#createWithdrawal");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **createWithdrawalRequest** | [**CreateWithdrawalRequest**](CreateWithdrawalRequest.md)|  |

### Return type

[**WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## getAccountByTypeAndCurrency

> Balance getAccountByTypeAndCurrency(account, currency)

Receive current account balances

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
String account = primary; // String | Account
String currency = null; // String | Currency
try {
    Balance result = apiInstance.getAccountByTypeAndCurrency(account, currency);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getAccountByTypeAndCurrency");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **account** | **String**| Account | [default to null]
 **currency** | **String**| Currency | [default to null]

### Return type

[**Balance**](Balance.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getAccounts

> BalanceMap getAccounts()

Receive current account balances

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
try {
    BalanceMap result = apiInstance.getAccounts();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getAccounts");
    e.printStackTrace();
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**BalanceMap**](BalanceMap.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getDepositAddress

> DepositAddressCrypto getDepositAddress(currency)

Get a deposit address. Currently only crypto currencies are supported

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
String currency = null; // String | Currency
try {
    DepositAddressCrypto result = apiInstance.getDepositAddress(currency);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getDepositAddress");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **String**| Currency | [default to null]

### Return type

[**DepositAddressCrypto**](DepositAddressCrypto.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getDepositById

> DepositInfo getDepositById(depositId)

Get status about a deposit

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
String depositId = null; // String | Deposit ID
try {
    DepositInfo result = apiInstance.getDepositById(depositId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getDepositById");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **depositId** | **String**| Deposit ID | [default to null]

### Return type

[**DepositInfo**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getDeposits

> List&lt;DepositInfo&gt; getDeposits(from, to)

Get a list of deposits

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
Long from = null; // Long | Epoch timestamp in ms
Long to = null; // Long | Epoch timestamp in ms
try {
    List<DepositInfo> result = apiInstance.getDeposits(from, to);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getDeposits");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **Long**| Epoch timestamp in ms | [optional] [default to null]
 **to** | **Long**| Epoch timestamp in ms | [optional] [default to null]

### Return type

[**List&lt;DepositInfo&gt;**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWhitelist

> List&lt;WhitelistEntry&gt; getWhitelist()

Get a list of all whitelisted withdrawal accounts

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
try {
    List<WhitelistEntry> result = apiInstance.getWhitelist();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getWhitelist");
    e.printStackTrace();
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**List&lt;WhitelistEntry&gt;**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWhitelistByCurrency

> List&lt;WhitelistEntry&gt; getWhitelistByCurrency(currency)

Get a list of all whitelisted withdrawal accounts

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
String currency = null; // String | Currency
try {
    List<WhitelistEntry> result = apiInstance.getWhitelistByCurrency(currency);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getWhitelistByCurrency");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **String**| Currency | [default to null]

### Return type

[**List&lt;WhitelistEntry&gt;**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWithdrawalById

> WithdrawalInfo getWithdrawalById(withdrawalId)

Get status about a withdrawal

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
String withdrawalId = null; // String | Withdrawal ID
try {
    WithdrawalInfo result = apiInstance.getWithdrawalById(withdrawalId);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getWithdrawalById");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdrawalId** | **String**| Withdrawal ID | [default to null]

### Return type

[**WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWithdrawals

> List&lt;WithdrawalInfo&gt; getWithdrawals(from, to)

Get a list of withdrawals

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.PaymentsApi;

PaymentsApi apiInstance = new PaymentsApi();
Long from = null; // Long | Epoch timestamp in ms
Long to = null; // Long | Epoch timestamp in ms
try {
    List<WithdrawalInfo> result = apiInstance.getWithdrawals(from, to);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling PaymentsApi#getWithdrawals");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **Long**| Epoch timestamp in ms | [optional] [default to null]
 **to** | **Long**| Epoch timestamp in ms | [optional] [default to null]

### Return type

[**List&lt;WithdrawalInfo&gt;**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

