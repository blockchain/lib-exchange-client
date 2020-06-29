# openapi_client.UnauthenticatedApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**get_l2_order_book**](UnauthenticatedApi.md#get_l2_order_book) | **GET** /l2/{symbol} | L2 Order Book
[**get_l3_order_book**](UnauthenticatedApi.md#get_l3_order_book) | **GET** /l3/{symbol} | L3 Order Book
[**get_symbol_by_name**](UnauthenticatedApi.md#get_symbol_by_name) | **GET** /symbols/{symbol} | Symbols
[**get_symbols**](UnauthenticatedApi.md#get_symbols) | **GET** /symbols | Symbols
[**get_ticker_by_symbol**](UnauthenticatedApi.md#get_ticker_by_symbol) | **GET** /tickers/{symbol} | Price
[**get_tickers**](UnauthenticatedApi.md#get_tickers) | **GET** /tickers | Price


# **get_l2_order_book**
> OrderBook get_l2_order_book(symbol)

L2 Order Book

Level 2 Order Book data is available through the l2 channel. This channel returns the volume available at each price. All the price levels are retrieved with this channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.

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
    api_instance = openapi_client.UnauthenticatedApi(api_client)
    symbol = 'symbol_example' # str | Symbol

    try:
        # L2 Order Book
        api_response = api_instance.get_l2_order_book(symbol)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling UnauthenticatedApi->get_l2_order_book: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **str**| Symbol | 

### Return type

[**OrderBook**](OrderBook.md)

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

# **get_l3_order_book**
> OrderBook get_l3_order_book(symbol)

L3 Order Book

Level 3 Order Book data is available through the l3 channel. This channel returns all the order updates reaching the exchange; by applying the updates to the snapshot you can recreate the full state of the orderbook. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes.

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
    api_instance = openapi_client.UnauthenticatedApi(api_client)
    symbol = 'symbol_example' # str | Symbol

    try:
        # L3 Order Book
        api_response = api_instance.get_l3_order_book(symbol)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling UnauthenticatedApi->get_l3_order_book: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **str**| Symbol | 

### Return type

[**OrderBook**](OrderBook.md)

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

# **get_symbol_by_name**
> SymbolStatus get_symbol_by_name(symbol)

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

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
    api_instance = openapi_client.UnauthenticatedApi(api_client)
    symbol = 'symbol_example' # str | Symbol

    try:
        # Symbols
        api_response = api_instance.get_symbol_by_name(symbol)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling UnauthenticatedApi->get_symbol_by_name: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **str**| Symbol | 

### Return type

[**SymbolStatus**](SymbolStatus.md)

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

# **get_symbols**
> dict(str, SymbolStatus) get_symbols()

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

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
    api_instance = openapi_client.UnauthenticatedApi(api_client)
    
    try:
        # Symbols
        api_response = api_instance.get_symbols()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling UnauthenticatedApi->get_symbols: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**dict(str, SymbolStatus)**](SymbolStatus.md)

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

# **get_ticker_by_symbol**
> PriceEvent get_ticker_by_symbol(symbol)

Price

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
    api_instance = openapi_client.UnauthenticatedApi(api_client)
    symbol = 'symbol_example' # str | Symbol

    try:
        # Price
        api_response = api_instance.get_ticker_by_symbol(symbol)
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling UnauthenticatedApi->get_ticker_by_symbol: %s\n" % e)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **str**| Symbol | 

### Return type

[**PriceEvent**](PriceEvent.md)

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

# **get_tickers**
> list[PriceEvent] get_tickers()

Price

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
    api_instance = openapi_client.UnauthenticatedApi(api_client)
    
    try:
        # Price
        api_response = api_instance.get_tickers()
        pprint(api_response)
    except ApiException as e:
        print("Exception when calling UnauthenticatedApi->get_tickers: %s\n" % e)
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**list[PriceEvent]**](PriceEvent.md)

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

