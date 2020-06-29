# com.blockchain.exchange.rest\PaymentsApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateWithdrawal**](PaymentsApi.md#CreateWithdrawal) | **Post** /withdrawals | Request a withdrawal
[**GetAccountByTypeAndCurrency**](PaymentsApi.md#GetAccountByTypeAndCurrency) | **Get** /accounts/{account}/{currency} | Receive current account balances
[**GetAccounts**](PaymentsApi.md#GetAccounts) | **Get** /accounts | Receive current account balances
[**GetDepositAddress**](PaymentsApi.md#GetDepositAddress) | **Post** /deposits/{currency} | Get a deposit address. Currently only crypto currencies are supported
[**GetDepositById**](PaymentsApi.md#GetDepositById) | **Get** /deposits/{depositId} | Get status about a deposit
[**GetDeposits**](PaymentsApi.md#GetDeposits) | **Get** /deposits | Get a list of deposits
[**GetWhitelist**](PaymentsApi.md#GetWhitelist) | **Get** /whitelist | Get a list of all whitelisted withdrawal accounts
[**GetWhitelistByCurrency**](PaymentsApi.md#GetWhitelistByCurrency) | **Get** /whitelist/{currency} | Get a list of all whitelisted withdrawal accounts
[**GetWithdrawalById**](PaymentsApi.md#GetWithdrawalById) | **Get** /withdrawals/{withdrawalId} | Get status about a withdrawal
[**GetWithdrawals**](PaymentsApi.md#GetWithdrawals) | **Get** /withdrawals | Get a list of withdrawals



## CreateWithdrawal

> WithdrawalInfo CreateWithdrawal(ctx, createWithdrawalRequest)

Request a withdrawal

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**createWithdrawalRequest** | [**CreateWithdrawalRequest**](CreateWithdrawalRequest.md)|  | 

### Return type

[**WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAccountByTypeAndCurrency

> Balance GetAccountByTypeAndCurrency(ctx, account, currency)

Receive current account balances

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**account** | **string**| Account | 
**currency** | **string**| Currency | 

### Return type

[**Balance**](Balance.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAccounts

> BalanceMap GetAccounts(ctx, )

Receive current account balances

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**BalanceMap**](BalanceMap.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDepositAddress

> DepositAddressCrypto GetDepositAddress(ctx, currency)

Get a deposit address. Currently only crypto currencies are supported

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**currency** | **string**| Currency | 

### Return type

[**DepositAddressCrypto**](DepositAddressCrypto.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDepositById

> DepositInfo GetDepositById(ctx, depositId)

Get status about a deposit

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**depositId** | **string**| Deposit ID | 

### Return type

[**DepositInfo**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDeposits

> []DepositInfo GetDeposits(ctx, optional)

Get a list of deposits

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetDepositsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetDepositsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **optional.Int64**| Epoch timestamp in ms | 
 **to** | **optional.Int64**| Epoch timestamp in ms | 

### Return type

[**[]DepositInfo**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWhitelist

> []WhitelistEntry GetWhitelist(ctx, )

Get a list of all whitelisted withdrawal accounts

### Required Parameters

This endpoint does not need any parameter.

### Return type

[**[]WhitelistEntry**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWhitelistByCurrency

> []WhitelistEntry GetWhitelistByCurrency(ctx, currency)

Get a list of all whitelisted withdrawal accounts

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**currency** | **string**| Currency | 

### Return type

[**[]WhitelistEntry**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWithdrawalById

> WithdrawalInfo GetWithdrawalById(ctx, withdrawalId)

Get status about a withdrawal

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**withdrawalId** | **string**| Withdrawal ID | 

### Return type

[**WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWithdrawals

> []WithdrawalInfo GetWithdrawals(ctx, optional)

Get a list of withdrawals

### Required Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
 **optional** | ***GetWithdrawalsOpts** | optional parameters | nil if no parameters

### Optional Parameters

Optional parameters are passed through a pointer to a GetWithdrawalsOpts struct


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **optional.Int64**| Epoch timestamp in ms | 
 **to** | **optional.Int64**| Epoch timestamp in ms | 

### Return type

[**[]WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

