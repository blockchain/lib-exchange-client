# com.blockchain.exchange.rest\UnauthenticatedApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getL2OrderBook**](UnauthenticatedApi.md#getL2OrderBook) | **GET** /l2/{symbol} | L2 Order Book
[**getL3OrderBook**](UnauthenticatedApi.md#getL3OrderBook) | **GET** /l3/{symbol} | L3 Order Book
[**getSymbolByName**](UnauthenticatedApi.md#getSymbolByName) | **GET** /symbols/{symbol} | Symbols
[**getSymbols**](UnauthenticatedApi.md#getSymbols) | **GET** /symbols | Symbols
[**getTickerBySymbol**](UnauthenticatedApi.md#getTickerBySymbol) | **GET** /tickers/{symbol} | Price
[**getTickers**](UnauthenticatedApi.md#getTickers) | **GET** /tickers | Price



## getL2OrderBook

> \com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\OrderBook getL2OrderBook($symbol)

L2 Order Book

Level 2 Order Book data is available through the l2 channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: ApiKeyAuth
$config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKey('X-API-Token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-Token', 'Bearer');


$apiInstance = new com.blockchain.exchange.rest\Api\UnauthenticatedApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$symbol = 'symbol_example'; // string | Symbol

try {
    $result = $apiInstance->getL2OrderBook($symbol);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UnauthenticatedApi->getL2OrderBook: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| Symbol |

### Return type

[**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\OrderBook**](../Model/OrderBook.md)

### Authorization

[ApiKeyAuth](../../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## getL3OrderBook

> \com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\OrderBook getL3OrderBook($symbol)

L3 Order Book

Level 3 Order Book data is available through the l3 channel. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: ApiKeyAuth
$config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKey('X-API-Token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-Token', 'Bearer');


$apiInstance = new com.blockchain.exchange.rest\Api\UnauthenticatedApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$symbol = 'symbol_example'; // string | Symbol

try {
    $result = $apiInstance->getL3OrderBook($symbol);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UnauthenticatedApi->getL3OrderBook: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| Symbol |

### Return type

[**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\OrderBook**](../Model/OrderBook.md)

### Authorization

[ApiKeyAuth](../../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## getSymbolByName

> \com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\SymbolStatus getSymbolByName($symbol)

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: ApiKeyAuth
$config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKey('X-API-Token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-Token', 'Bearer');


$apiInstance = new com.blockchain.exchange.rest\Api\UnauthenticatedApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$symbol = 'symbol_example'; // string | Symbol

try {
    $result = $apiInstance->getSymbolByName($symbol);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UnauthenticatedApi->getSymbolByName: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| Symbol |

### Return type

[**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\SymbolStatus**](../Model/SymbolStatus.md)

### Authorization

[ApiKeyAuth](../../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## getSymbols

> map[string,\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\SymbolStatus] getSymbols()

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: ApiKeyAuth
$config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKey('X-API-Token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-Token', 'Bearer');


$apiInstance = new com.blockchain.exchange.rest\Api\UnauthenticatedApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getSymbols();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UnauthenticatedApi->getSymbols: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**map[string,\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\SymbolStatus]**](../Model/SymbolStatus.md)

### Authorization

[ApiKeyAuth](../../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## getTickerBySymbol

> \com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\PriceEvent getTickerBySymbol($symbol)

Price

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: ApiKeyAuth
$config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKey('X-API-Token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-Token', 'Bearer');


$apiInstance = new com.blockchain.exchange.rest\Api\UnauthenticatedApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$symbol = 'symbol_example'; // string | Symbol

try {
    $result = $apiInstance->getTickerBySymbol($symbol);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UnauthenticatedApi->getTickerBySymbol: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **string**| Symbol |

### Return type

[**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\PriceEvent**](../Model/PriceEvent.md)

### Authorization

[ApiKeyAuth](../../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)


## getTickers

> \com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\PriceEvent[] getTickers()

Price

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure API key authorization: ApiKeyAuth
$config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKey('X-API-Token', 'YOUR_API_KEY');
// Uncomment below to setup prefix (e.g. Bearer) for API key, if needed
// $config = com.blockchain.exchange.rest\Configuration::getDefaultConfiguration()->setApiKeyPrefix('X-API-Token', 'Bearer');


$apiInstance = new com.blockchain.exchange.rest\Api\UnauthenticatedApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);

try {
    $result = $apiInstance->getTickers();
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling UnauthenticatedApi->getTickers: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**\com.blockchain.exchange.rest\com.blockchain.exchange.rest.model\PriceEvent[]**](../Model/PriceEvent.md)

### Authorization

[ApiKeyAuth](../../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../../README.md#documentation-for-models)
[[Back to README]](../../README.md)

