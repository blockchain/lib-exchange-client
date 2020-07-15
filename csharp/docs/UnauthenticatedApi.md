# Org.OpenAPITools.com.blockchain.exchange.rest.api.UnauthenticatedApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetL2OrderBook**](UnauthenticatedApi.md#getl2orderbook) | **GET** /l2/{symbol} | L2 Order Book
[**GetL3OrderBook**](UnauthenticatedApi.md#getl3orderbook) | **GET** /l3/{symbol} | L3 Order Book
[**GetSymbolByName**](UnauthenticatedApi.md#getsymbolbyname) | **GET** /symbols/{symbol} | Symbols
[**GetSymbols**](UnauthenticatedApi.md#getsymbols) | **GET** /symbols | Symbols
[**GetTickerBySymbol**](UnauthenticatedApi.md#gettickerbysymbol) | **GET** /tickers/{symbol} | Price
[**GetTickers**](UnauthenticatedApi.md#gettickers) | **GET** /tickers | Price



## GetL2OrderBook

> OrderBook GetL2OrderBook (string symbol)

L2 Order Book

Level 2 Order Book data is available through the l2 channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetL2OrderBookExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new UnauthenticatedApi(Configuration.Default);
            var symbol = symbol_example;  // string | Symbol

            try
            {
                // L2 Order Book
                OrderBook result = apiInstance.GetL2OrderBook(symbol);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UnauthenticatedApi.GetL2OrderBook: " + e.Message );
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
 **symbol** | **string**| Symbol | 

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
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetL3OrderBook

> OrderBook GetL3OrderBook (string symbol)

L3 Order Book

Level 3 Order Book data is available through the l3 channel. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes. In contrast to the L2 order book, the L3 order book contains all individual orders without aggregation.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetL3OrderBookExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new UnauthenticatedApi(Configuration.Default);
            var symbol = symbol_example;  // string | Symbol

            try
            {
                // L3 Order Book
                OrderBook result = apiInstance.GetL3OrderBook(symbol);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UnauthenticatedApi.GetL3OrderBook: " + e.Message );
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
 **symbol** | **string**| Symbol | 

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
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSymbolByName

> SymbolStatus GetSymbolByName (string symbol)

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetSymbolByNameExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new UnauthenticatedApi(Configuration.Default);
            var symbol = symbol_example;  // string | Symbol

            try
            {
                // Symbols
                SymbolStatus result = apiInstance.GetSymbolByName(symbol);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UnauthenticatedApi.GetSymbolByName: " + e.Message );
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
 **symbol** | **string**| Symbol | 

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
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetSymbols

> Dictionary&lt;string, SymbolStatus&gt; GetSymbols ()

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetSymbolsExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new UnauthenticatedApi(Configuration.Default);

            try
            {
                // Symbols
                Dictionary<string, SymbolStatus> result = apiInstance.GetSymbols();
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UnauthenticatedApi.GetSymbols: " + e.Message );
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

[**Dictionary&lt;string, SymbolStatus&gt;**](SymbolStatus.md)

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


## GetTickerBySymbol

> PriceEvent GetTickerBySymbol (string symbol)

Price

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetTickerBySymbolExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new UnauthenticatedApi(Configuration.Default);
            var symbol = symbol_example;  // string | Symbol

            try
            {
                // Price
                PriceEvent result = apiInstance.GetTickerBySymbol(symbol);
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UnauthenticatedApi.GetTickerBySymbol: " + e.Message );
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
 **symbol** | **string**| Symbol | 

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
| **200** | Success |  -  |

[[Back to top]](#)
[[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## GetTickers

> List&lt;PriceEvent&gt; GetTickers ()

Price

### Example

```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.com.blockchain.exchange.rest.api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.com.blockchain.exchange.rest.model;

namespace Example
{
    public class GetTickersExample
    {
        public static void Main()
        {
            Configuration.Default.BasePath = "https://api.blockchain.com/v3/exchange";
            // Configure API key authorization: ApiKeyAuth
            Configuration.Default.AddApiKey("X-API-Token", "YOUR_API_KEY");
            // Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
            // Configuration.Default.AddApiKeyPrefix("X-API-Token", "Bearer");

            var apiInstance = new UnauthenticatedApi(Configuration.Default);

            try
            {
                // Price
                List<PriceEvent> result = apiInstance.GetTickers();
                Debug.WriteLine(result);
            }
            catch (ApiException e)
            {
                Debug.Print("Exception when calling UnauthenticatedApi.GetTickers: " + e.Message );
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

[**List&lt;PriceEvent&gt;**](PriceEvent.md)

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

