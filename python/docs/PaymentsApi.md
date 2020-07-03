# openapi_client.PaymentsApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_withdrawal**](PaymentsApi.md#create_withdrawal) | **POST** /withdrawals | Request a withdrawal
[**get_account_by_type_and_currency**](PaymentsApi.md#get_account_by_type_and_currency) | **GET** /accounts/{account}/{currency} | Receive current account balances
[**get_accounts**](PaymentsApi.md#get_accounts) | **GET** /accounts | Receive current account balances
[**get_deposit_address**](PaymentsApi.md#get_deposit_address) | **POST** /deposits/{currency} | Get a deposit address. Currently only crypto currencies are supported
[**get_deposit_by_id**](PaymentsApi.md#get_deposit_by_id) | **GET** /deposits/{depositId} | Get status about a deposit
[**get_deposits**](PaymentsApi.md#get_deposits) | **GET** /deposits | Get a list of deposits
[**get_whitelist**](PaymentsApi.md#get_whitelist) | **GET** /whitelist | Get a list of all whitelisted withdrawal accounts
[**get_whitelist_by_currency**](PaymentsApi.md#get_whitelist_by_currency) | **GET** /whitelist/{currency} | Get a list of all whitelisted withdrawal accounts
[**get_withdrawal_by_id**](PaymentsApi.md#get_withdrawal_by_id) | **GET** /withdrawals/{withdrawalId} | Get status about a withdrawal
[**get_withdrawals**](PaymentsApi.md#get_withdrawals) | **GET** /withdrawals | Get a list of withdrawals


# **create_withdrawal**
> WithdrawalInfo create_withdrawal(create_withdrawal_request)

Request a withdrawal

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    create_withdrawal_request = openapi_client.CreateWithdrawalRequest() # CreateWithdrawalRequest | 

    try:
        # Request a withdrawal
        api_response = api_instance.create_withdrawal(create_withdrawal_request)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->create_withdrawal: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **create_withdrawal_request** | [**CreateWithdrawalRequest**](CreateWithdrawalRequest.md)|  | 

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
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_account_by_type_and_currency**
> Balance get_account_by_type_and_currency(account, currency)

Receive current account balances

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    account = 'primary' # str | Account
currency = 'currency_example' # str | Currency

    try:
        # Receive current account balances
        api_response = api_instance.get_account_by_type_and_currency(account, currency)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_account_by_type_and_currency: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **account** | **str**| Account | 
 **currency** | **str**| Currency | 

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
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_accounts**
> BalanceMap get_accounts()

Receive current account balances

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    
    try:
        # Receive current account balances
        api_response = api_instance.get_accounts()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_accounts: %s\n" % e)
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
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_deposit_address**
> DepositAddressCrypto get_deposit_address(currency)

Get a deposit address. Currently only crypto currencies are supported

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    currency = 'currency_example' # str | Currency

    try:
        # Get a deposit address. Currently only crypto currencies are supported
        api_response = api_instance.get_deposit_address(currency)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_deposit_address: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **str**| Currency | 

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
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_deposit_by_id**
> DepositInfo get_deposit_by_id(deposit_id)

Get status about a deposit

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    deposit_id = 'deposit_id_example' # str | Deposit ID

    try:
        # Get status about a deposit
        api_response = api_instance.get_deposit_by_id(deposit_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_deposit_by_id: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **deposit_id** | **str**| Deposit ID | 

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
**200** | Success |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_deposits**
> list[DepositInfo] get_deposits(_from=_from, to=to)

Get a list of deposits

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    _from = 56 # int | Epoch timestamp in ms (optional)
to = 56 # int | Epoch timestamp in ms (optional)

    try:
        # Get a list of deposits
        api_response = api_instance.get_deposits(_from=_from, to=to)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_deposits: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_from** | **int**| Epoch timestamp in ms | [optional] 
 **to** | **int**| Epoch timestamp in ms | [optional] 

### Return type

[**list[DepositInfo]**](DepositInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_whitelist**
> list[WhitelistEntry] get_whitelist()

Get a list of all whitelisted withdrawal accounts

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    
    try:
        # Get a list of all whitelisted withdrawal accounts
        api_response = api_instance.get_whitelist()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_whitelist: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[WhitelistEntry]**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_whitelist_by_currency**
> list[WhitelistEntry] get_whitelist_by_currency(currency)

Get a list of all whitelisted withdrawal accounts

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    currency = 'currency_example' # str | Currency

    try:
        # Get a list of all whitelisted withdrawal accounts
        api_response = api_instance.get_whitelist_by_currency(currency)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_whitelist_by_currency: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **currency** | **str**| Currency | 

### Return type

[**list[WhitelistEntry]**](WhitelistEntry.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_withdrawal_by_id**
> WithdrawalInfo get_withdrawal_by_id(withdrawal_id)

Get status about a withdrawal

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    withdrawal_id = 'withdrawal_id_example' # str | Withdrawal ID

    try:
        # Get status about a withdrawal
        api_response = api_instance.get_withdrawal_by_id(withdrawal_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_withdrawal_by_id: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdrawal_id** | **str**| Withdrawal ID | 

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
**200** | Success |  -  |
**404** | Not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_withdrawals**
> list[WithdrawalInfo] get_withdrawals(_from=_from, to=to)

Get a list of withdrawals

### Example

* Api Key Authentication (ApiKeyAuth):
```python
from __future__ import print_function
import time
import openapi_client
from openapi_client.rest import ApiException
from pprint import pprint
# Defining the host is optional and defaults to https://api.blockchain.com/v3/exchange
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure API key authorization: ApiKeyAuth
configuration = openapi_client.Configuration(
    host = "https://api.blockchain.com/v3/exchange",
    api_key = {
        'X-API-Token': 'YOUR_API_KEY'
    }
)
# Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
# configuration.api_key_prefix['X-API-Token'] = 'Bearer'

# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.PaymentsApi(api_client)
    _from = 56 # int | Epoch timestamp in ms (optional)
to = 56 # int | Epoch timestamp in ms (optional)

    try:
        # Get a list of withdrawals
        api_response = api_instance.get_withdrawals(_from=_from, to=to)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling PaymentsApi->get_withdrawals: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_from** | **int**| Epoch timestamp in ms | [optional] 
 **to** | **int**| Epoch timestamp in ms | [optional] 

### Return type

[**list[WithdrawalInfo]**](WithdrawalInfo.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

