# openapi_client.TradingApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create_order**](TradingApi.md#create_order) | **POST** /orders | Add an order
[**delete_all_orders**](TradingApi.md#delete_all_orders) | **DELETE** /orders | Delete all open orders (of a symbol, if specified)
[**delete_order**](TradingApi.md#delete_order) | **DELETE** /orders/{orderId} | Cancel a trade
[**get_fees**](TradingApi.md#get_fees) | **GET** /fees | Get current fee level
[**get_order_by_id**](TradingApi.md#get_order_by_id) | **GET** /orders/{orderId} | Get a specific order
[**get_orders**](TradingApi.md#get_orders) | **GET** /orders | Get a list orders


# **create_order**
> OrderSummary create_order(base_order)

Add an order

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
    api_instance = openapi_client.TradingApi(api_client)
    base_order = openapi_client.BaseOrder() # BaseOrder | Trade

    try:
        # Add an order
        api_response = api_instance.create_order(base_order)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TradingApi->create_order: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **base_order** | [**BaseOrder**](BaseOrder.md)| Trade | 

### Return type

[**OrderSummary**](OrderSummary.md)

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

# **delete_all_orders**
> delete_all_orders(symbol=symbol)

Delete all open orders (of a symbol, if specified)

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
    api_instance = openapi_client.TradingApi(api_client)
    symbol = 'symbol_example' # str |  (optional)

    try:
        # Delete all open orders (of a symbol, if specified)
        api_instance.delete_all_orders(symbol=symbol)
    except ApiException as e:
        print("Exception when calling TradingApi->delete_all_orders: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **str**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete_order**
> delete_order(order_id)

Cancel a trade

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
    api_instance = openapi_client.TradingApi(api_client)
    order_id = 56 # int | Order ID

    try:
        # Cancel a trade
        api_instance.delete_order(order_id)
    except ApiException as e:
        print("Exception when calling TradingApi->delete_order: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **order_id** | **int**| Order ID | 

### Return type

void (empty response body)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Success |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_fees**
> Fees get_fees()

Get current fee level

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
    api_instance = openapi_client.TradingApi(api_client)
    
    try:
        # Get current fee level
        api_response = api_instance.get_fees()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TradingApi->get_fees: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Fees**](Fees.md)

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

# **get_order_by_id**
> OrderSummary get_order_by_id(order_id)

Get a specific order

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
    api_instance = openapi_client.TradingApi(api_client)
    order_id = 56 # int | Order ID

    try:
        # Get a specific order
        api_response = api_instance.get_order_by_id(order_id)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TradingApi->get_order_by_id: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **order_id** | **int**| Order ID | 

### Return type

[**OrderSummary**](OrderSummary.md)

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

# **get_orders**
> list[OrderSummary] get_orders(symbol=symbol, _from=_from, to=to, status=status, limit=limit)

Get a list orders

Returns live and historic orders, defaulting to live orders. Returns at most 100 results, use timestamp to paginate for further results

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
    api_instance = openapi_client.TradingApi(api_client)
    symbol = 'symbol_example' # str | Only return results for this symbol (optional)
_from = 56 # int | Epoch timestamp in ms (optional)
to = 56 # int | Epoch timestamp in ms (optional)
status = openapi_client.OrderStatus() # OrderStatus | Order Status (optional)
limit = 100 # int | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  (optional)

    try:
        # Get a list orders
        api_response = api_instance.get_orders(symbol=symbol, _from=_from, to=to, status=status, limit=limit)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling TradingApi->get_orders: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **str**| Only return results for this symbol | [optional] 
 **_from** | **int**| Epoch timestamp in ms | [optional] 
 **to** | **int**| Epoch timestamp in ms | [optional] 
 **status** | [**OrderStatus**](.md)| Order Status | [optional] 
 **limit** | **int**| Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  | [optional] 

### Return type

[**list[OrderSummary]**](OrderSummary.md)

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

