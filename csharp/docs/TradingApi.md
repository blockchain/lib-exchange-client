# Org.OpenAPITools.com.blockchain.exchange.rest.api.TradingApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CreateOrder**](TradingApi.md#createorder) | **POST** /orders | Add an order
[**DeleteAllOrders**](TradingApi.md#deleteallorders) | **DELETE** /orders | Delete all open orders (of a symbol, if specified)
[**DeleteOrder**](TradingApi.md#deleteorder) | **DELETE** /orders/{orderId} | Cancel a trade
[**GetFees**](TradingApi.md#getfees) | **GET** /fees | Get current fee level
[**GetOrderById**](TradingApi.md#getorderbyid) | **GET** /orders/{orderId} | Get a specific order
[**GetOrders**](TradingApi.md#getorders) | **GET** /orders | Get a list orders



## CreateOrder

> OrderSummary CreateOrder (BaseOrder baseOrder)

Add an order

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class CreateOrderExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new TradingApi(Configuration.Default);
            var baseOrder = new BaseOrder(); // BaseOrder | Trade

            try
            {
                // Add an order
                OrderSummary result = apiInstance.CreateOrder(baseOrder);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TradingApi.CreateOrder: " + e.Message );
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
 **baseOrder** | [**BaseOrder**](BaseOrder.md)| Trade | 

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
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteAllOrders

> void DeleteAllOrders (string symbol = null)

Delete all open orders (of a symbol, if specified)

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class DeleteAllOrdersExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new TradingApi(Configuration.Default);
            var symbol = symbol_example;  // string |  (optional) 

            try
            {
                // Delete all open orders (of a symbol, if specified)
                apiInstance.DeleteAllOrders(symbol);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TradingApi.DeleteAllOrders: " + e.Message );
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
 **symbol** | **string**|  | [optional] 

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
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## DeleteOrder

> void DeleteOrder (long orderId)

Cancel a trade

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class DeleteOrderExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new TradingApi(Configuration.Default);
            var orderId = 789;  // long | Order ID

            try
            {
                // Cancel a trade
                apiInstance.DeleteOrder(orderId);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TradingApi.DeleteOrder: " + e.Message );
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
 **orderId** | **long**| Order ID | 

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
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetFees

> Fees GetFees ()

Get current fee level

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetFeesExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new TradingApi(Configuration.Default);

            try
            {
                // Get current fee level
                Fees result = apiInstance.GetFees();
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TradingApi.GetFees: " + e.Message );
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

[**Fees**](Fees.md)

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


## GetOrderById

> OrderSummary GetOrderById (long orderId)

Get a specific order

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetOrderByIdExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new TradingApi(Configuration.Default);
            var orderId = 789;  // long | Order ID

            try
            {
                // Get a specific order
                OrderSummary result = apiInstance.GetOrderById(orderId);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TradingApi.GetOrderById: " + e.Message );
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
 **orderId** | **long**| Order ID | 

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
| **200** | Success |  -  |
| **404** | Not found |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetOrders

> List&lt;OrderSummary&gt; GetOrders (string symbol = null, long? from = null, long? to = null, OrderStatus? status = null, int? limit = null)

Get a list orders

Returns live and historic orders, defaulting to live orders. Returns at most 100 results, use timestamp to paginate for further results

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetOrdersExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new TradingApi(Configuration.Default);
            var symbol = symbol_example;  // string | Only return results for this symbol (optional) 
            var from = 789;  // long? | Epoch timestamp in ms (optional) 
            var to = 789;  // long? | Epoch timestamp in ms (optional) 
            var status = ;  // OrderStatus? | Order Status (optional) 
            var limit = 100;  // int? | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  (optional) 

            try
            {
                // Get a list orders
                List<OrderSummary> result = apiInstance.GetOrders(symbol, from, to, status, limit);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling TradingApi.GetOrders: " + e.Message );
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
 **symbol** | **string**| Only return results for this symbol | [optional] 
 **from** | **long?**| Epoch timestamp in ms | [optional] 
 **to** | **long?**| Epoch timestamp in ms | [optional] 
 **status** | **OrderStatus?**| Order Status | [optional] 
 **limit** | **int?**| Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  | [optional] 

### Return type

[**List&lt;OrderSummary&gt;**](OrderSummary.md)

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

