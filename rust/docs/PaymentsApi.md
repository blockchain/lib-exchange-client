# com.blockchain.exchange.rest\PaymentsApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_withdrawal**](PaymentsApi.md#create_withdrawal) | **Post** /withdrawals | Request a withdrawal
[**get_account_by_type_and_currency**](PaymentsApi.md#get_account_by_type_and_currency) | **Get** /accounts/{account}/{currency} | Receive current account balances
[**get_accounts**](PaymentsApi.md#get_accounts) | **Get** /accounts | Receive current account balances
[**get_deposit_address**](PaymentsApi.md#get_deposit_address) | **Post** /deposits/{currency} | Get a deposit address. Currently only crypto currencies are supported
[**get_deposit_by_id**](PaymentsApi.md#get_deposit_by_id) | **Get** /deposits/{depositId} | Get status about a deposit
[**get_deposits**](PaymentsApi.md#get_deposits) | **Get** /deposits | Get a list of deposits
[**get_whitelist**](PaymentsApi.md#get_whitelist) | **Get** /whitelist | Get a list of all whitelisted withdrawal accounts
[**get_whitelist_by_currency**](PaymentsApi.md#get_whitelist_by_currency) | **Get** /whitelist/{currency} | Get a list of all whitelisted withdrawal accounts
[**get_withdrawal_by_id**](PaymentsApi.md#get_withdrawal_by_id) | **Get** /withdrawals/{withdrawalId} | Get status about a withdrawal
[**get_withdrawals**](PaymentsApi.md#get_withdrawals) | **Get** /withdrawals | Get a list of withdrawals



## create_withdrawal

> crate::models::WithdrawalInfo create_withdrawal(create_withdrawal_request)
Request a withdrawal

Call `GET /whitelist` first to retrieve the ID of the beneficiary. To add a beneficiary to the whitelist, please visit the profile page in the Exchange. This call only works if 2FA is enabled on the account.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**create_withdrawal_request** | [**CreateWithdrawalRequest**](CreateWithdrawalRequest.md) |  | [required] |

### Return type

[**crate::models::WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_account_by_type_and_currency

> crate::models::Balance get_account_by_type_and_currency(account, currency)
Receive current account balances

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**account** | **String** | Account | [required] |
**currency** | **String** | Currency | [required] |

### Return type

[**crate::models::Balance**](Balance.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_accounts

> crate::models::BalanceMap get_accounts()
Receive current account balances

### Parameters

This endpoint does not need any parameter.

### Return type

[**crate::models::BalanceMap**](BalanceMap.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_deposit_address

> crate::models::DepositAddressCrypto get_deposit_address(currency)
Get a deposit address. Currently only crypto currencies are supported

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**currency** | **String** | Currency | [required] |

### Return type

[**crate::models::DepositAddressCrypto**](DepositAddressCrypto.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_deposit_by_id

> crate::models::DepositInfo get_deposit_by_id(deposit_id)
Get status about a deposit

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**deposit_id** | **String** | Deposit ID | [required] |

### Return type

[**crate::models::DepositInfo**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_deposits

> Vec<crate::models::DepositInfo> get_deposits(from, to)
Get a list of deposits

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**from** | Option<**i64**> | Epoch timestamp in ms |  |
**to** | Option<**i64**> | Epoch timestamp in ms |  |

### Return type

[**Vec<crate::models::DepositInfo>**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_whitelist

> Vec<crate::models::WhitelistEntry> get_whitelist()
Get a list of all whitelisted withdrawal accounts

### Parameters

This endpoint does not need any parameter.

### Return type

[**Vec<crate::models::WhitelistEntry>**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_whitelist_by_currency

> Vec<crate::models::WhitelistEntry> get_whitelist_by_currency(currency)
Get a list of all whitelisted withdrawal accounts

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**currency** | **String** | Currency | [required] |

### Return type

[**Vec<crate::models::WhitelistEntry>**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_withdrawal_by_id

> crate::models::WithdrawalInfo get_withdrawal_by_id(withdrawal_id)
Get status about a withdrawal

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**withdrawal_id** | **String** | Withdrawal ID | [required] |

### Return type

[**crate::models::WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)


## get_withdrawals

> Vec<crate::models::WithdrawalInfo> get_withdrawals(from, to)
Get a list of withdrawals

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**from** | Option<**i64**> | Epoch timestamp in ms |  |
**to** | Option<**i64**> | Epoch timestamp in ms |  |

### Return type

[**Vec<crate::models::WithdrawalInfo>**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

