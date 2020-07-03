# Org.OpenAPITools.com.blockchain.exchange.rest.api.PaymentsApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateWithdrawal**](PaymentsApi.md#createwithdrawal) | **POST** /withdrawals | Request a withdrawal
[**GetAccountByTypeAndCurrency**](PaymentsApi.md#getaccountbytypeandcurrency) | **GET** /accounts/{account}/{currency} | Receive current account balances
[**GetAccounts**](PaymentsApi.md#getaccounts) | **GET** /accounts | Receive current account balances
[**GetDepositAddress**](PaymentsApi.md#getdepositaddress) | **POST** /deposits/{currency} | Get a deposit address. Currently only crypto currencies are supported
[**GetDepositById**](PaymentsApi.md#getdepositbyid) | **GET** /deposits/{depositId} | Get status about a deposit
[**GetDeposits**](PaymentsApi.md#getdeposits) | **GET** /deposits | Get a list of deposits
[**GetWhitelist**](PaymentsApi.md#getwhitelist) | **GET** /whitelist | Get a list of all whitelisted withdrawal accounts
[**GetWhitelistByCurrency**](PaymentsApi.md#getwhitelistbycurrency) | **GET** /whitelist/{currency} | Get a list of all whitelisted withdrawal accounts
[**GetWithdrawalById**](PaymentsApi.md#getwithdrawalbyid) | **GET** /withdrawals/{withdrawalId} | Get status about a withdrawal
[**GetWithdrawals**](PaymentsApi.md#getwithdrawals) | **GET** /withdrawals | Get a list of withdrawals



## CreateWithdrawal

> WithdrawalInfo CreateWithdrawal (CreateWithdrawalRequest createWithdrawalRequest)

Request a withdrawal

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class CreateWithdrawalExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);
            var createWithdrawalRequest = new CreateWithdrawalRequest(); // CreateWithdrawalRequest | 

            try
            {
                // Request a withdrawal
                WithdrawalInfo result = apiInstance.CreateWithdrawal(createWithdrawalRequest);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.CreateWithdrawal: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAccountByTypeAndCurrency

> Balance GetAccountByTypeAndCurrency (string account, string currency)

Receive current account balances

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetAccountByTypeAndCurrencyExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);
            var account = primary;  // string | Account
            var currency = currency_example;  // string | Currency

            try
            {
                // Receive current account balances
                Balance result = apiInstance.GetAccountByTypeAndCurrency(account, currency);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetAccountByTypeAndCurrency: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **account** | **string**| Account | 
 **currency** | **string**| Currency | 

### Return type

[**Balance**](Balance.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetAccounts

> BalanceMap GetAccounts ()

Receive current account balances

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetAccountsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);

            try
            {
                // Receive current account balances
                BalanceMap result = apiInstance.GetAccounts();
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetAccounts: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDepositAddress

> DepositAddressCrypto GetDepositAddress (string currency)

Get a deposit address. Currently only crypto currencies are supported

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetDepositAddressExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);
            var currency = currency_example;  // string | Currency

            try
            {
                // Get a deposit address. Currently only crypto currencies are supported
                DepositAddressCrypto result = apiInstance.GetDepositAddress(currency);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetDepositAddress: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **string**| Currency | 

### Return type

[**DepositAddressCrypto**](DepositAddressCrypto.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDepositById

> DepositInfo GetDepositById (string depositId)

Get status about a deposit

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetDepositByIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);
            var depositId = depositId_example;  // string | Deposit ID

            try
            {
                // Get status about a deposit
                DepositInfo result = apiInstance.GetDepositById(depositId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetDepositById: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **depositId** | **string**| Deposit ID | 

### Return type

[**DepositInfo**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |
| **404** | Not found |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetDeposits

> List&lt;DepositInfo&gt; GetDeposits (long? from = null, long? to = null)

Get a list of deposits

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetDepositsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);
            var from = 789;  // long? | Epoch timestamp in ms (optional) 
            var to = 789;  // long? | Epoch timestamp in ms (optional) 

            try
            {
                // Get a list of deposits
                List<DepositInfo> result = apiInstance.GetDeposits(from, to);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetDeposits: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **long?**| Epoch timestamp in ms | [optional] 
 **to** | **long?**| Epoch timestamp in ms | [optional] 

### Return type

[**List&lt;DepositInfo&gt;**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWhitelist

> List&lt;WhitelistEntry&gt; GetWhitelist ()

Get a list of all whitelisted withdrawal accounts

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetWhitelistExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);

            try
            {
                // Get a list of all whitelisted withdrawal accounts
                List<WhitelistEntry> result = apiInstance.GetWhitelist();
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetWhitelist: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
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

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWhitelistByCurrency

> List&lt;WhitelistEntry&gt; GetWhitelistByCurrency (string currency)

Get a list of all whitelisted withdrawal accounts

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetWhitelistByCurrencyExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);
            var currency = currency_example;  // string | Currency

            try
            {
                // Get a list of all whitelisted withdrawal accounts
                List<WhitelistEntry> result = apiInstance.GetWhitelistByCurrency(currency);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetWhitelistByCurrency: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **string**| Currency | 

### Return type

[**List&lt;WhitelistEntry&gt;**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWithdrawalById

> WithdrawalInfo GetWithdrawalById (string withdrawalId)

Get status about a withdrawal

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetWithdrawalByIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);
            var withdrawalId = withdrawalId_example;  // string | Withdrawal ID

            try
            {
                // Get status about a withdrawal
                WithdrawalInfo result = apiInstance.GetWithdrawalById(withdrawalId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetWithdrawalById: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdrawalId** | **string**| Withdrawal ID | 

### Return type

[**WithdrawalInfo**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |
| **404** | Not found |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetWithdrawals

> List&lt;WithdrawalInfo&gt; GetWithdrawals (long? from = null, long? to = null)

Get a list of withdrawals

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetWithdrawalsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new PaymentsApi(Configuration.Default);
            var from = 789;  // long? | Epoch timestamp in ms (optional) 
            var to = 789;  // long? | Epoch timestamp in ms (optional) 

            try
            {
                // Get a list of withdrawals
                List<WithdrawalInfo> result = apiInstance.GetWithdrawals(from, to);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling PaymentsApi.GetWithdrawals: " + e.Message );
                Debug.Print("Status Code: "+ e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **from** | **long?**| Epoch timestamp in ms | [optional] 
 **to** | **long?**| Epoch timestamp in ms | [optional] 

### Return type

[**List&lt;WithdrawalInfo&gt;**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

