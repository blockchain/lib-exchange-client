# BlockchainComExchangeRestApi.PaymentsApi

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

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
let createWithdrawalRequest = new BlockchainComExchangeRestApi.CreateWithdrawalRequest(); // CreateWithdrawalRequest | 
apiInstance.createWithdrawal(createWithdrawalRequest, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
let account = primary; // String | Account
let currency = "currency_example"; // String | Currency
apiInstance.getAccountByTypeAndCurrency(account, currency, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **account** | **String**| Account | 
 **currency** | **String**| Currency | 

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

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
apiInstance.getAccounts((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
let currency = "currency_example"; // String | Currency
apiInstance.getDepositAddress(currency, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **String**| Currency | 

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

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
let depositId = "depositId_example"; // String | Deposit ID
apiInstance.getDepositById(depositId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **depositId** | **String**| Deposit ID | 

### Return type

[**DepositInfo**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getDeposits

> [DepositInfo] getDeposits(opts)

Get a list of deposits

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
let opts = {
  'from': 789, // Number | Epoch timestamp in ms
  'to': 789 // Number | Epoch timestamp in ms
};
apiInstance.getDeposits(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **Number**| Epoch timestamp in ms | [optional] 
 **to** | **Number**| Epoch timestamp in ms | [optional] 

### Return type

[**[DepositInfo]**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWhitelist

> [WhitelistEntry] getWhitelist()

Get a list of all whitelisted withdrawal accounts

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
apiInstance.getWhitelist((error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**[WhitelistEntry]**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWhitelistByCurrency

> [WhitelistEntry] getWhitelistByCurrency(currency)

Get a list of all whitelisted withdrawal accounts

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
let currency = "currency_example"; // String | Currency
apiInstance.getWhitelistByCurrency(currency, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **String**| Currency | 

### Return type

[**[WhitelistEntry]**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWithdrawalById

> WithdrawalInfo getWithdrawalById(withdrawalId)

Get status about a withdrawal

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
let withdrawalId = "withdrawalId_example"; // String | Withdrawal ID
apiInstance.getWithdrawalById(withdrawalId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdrawalId** | **String**| Withdrawal ID | 

### Return type

[**WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getWithdrawals

> [WithdrawalInfo] getWithdrawals(opts)

Get a list of withdrawals

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.PaymentsApi();
let opts = {
  'from': 789, // Number | Epoch timestamp in ms
  'to': 789 // Number | Epoch timestamp in ms
};
apiInstance.getWithdrawals(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **Number**| Epoch timestamp in ms | [optional] 
 **to** | **Number**| Epoch timestamp in ms | [optional] 

### Return type

[**[WithdrawalInfo]**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

