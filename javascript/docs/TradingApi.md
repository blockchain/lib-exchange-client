# BlockchainComExchangeRestApi.TradingApi

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createOrder**](TradingApi.md#createOrder) | **POST** /orders | Add an order
[**deleteAllOrders**](TradingApi.md#deleteAllOrders) | **DELETE** /orders | Delete all open orders (of a symbol, if specified)
[**deleteOrder**](TradingApi.md#deleteOrder) | **DELETE** /orders/{orderId} | Cancel a trade
[**getFees**](TradingApi.md#getFees) | **GET** /fees | Get current fee level
[**getFills**](TradingApi.md#getFills) | **GET** /trades | Get a list of filled orders
[**getOrderById**](TradingApi.md#getOrderById) | **GET** /orders/{orderId} | Get a specific order
[**getOrders**](TradingApi.md#getOrders) | **GET** /orders | Get a list orders



## createOrder

> OrderSummary createOrder(baseOrder)

Add an order

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.TradingApi();
let baseOrder = new BlockchainComExchangeRestApi.BaseOrder(); // BaseOrder | Trade
apiInstance.createOrder(baseOrder, (error, data, response) => {
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
 **baseOrder** | [**BaseOrder**](BaseOrder.md)| Trade | 

### Return type

[**OrderSummary**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## deleteAllOrders

> deleteAllOrders(opts)

Delete all open orders (of a symbol, if specified)

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.TradingApi();
let opts = {
  'symbol': "symbol_example" // String | 
};
apiInstance.deleteAllOrders(opts, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**|  | [optional] 

### Return type

null (empty response body)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## deleteOrder

> deleteOrder(orderId)

Cancel a trade

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.TradingApi();
let orderId = 789; // Number | Order ID
apiInstance.deleteOrder(orderId, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
});
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderId** | **Number**| Order ID | 

### Return type

null (empty response body)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## getFees

> Fees getFees()

Get current fee level

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.TradingApi();
apiInstance.getFees((error, data, response) => {
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

[**Fees**](Fees.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getFills

> [OrderSummary] getFills(opts)

Get a list of filled orders

Returns filled orders, including partial fills. Returns at most 100 results, use timestamp to paginate for further results

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.TradingApi();
let opts = {
  'symbol': "symbol_example", // String | Only return results for this symbol
  'from': 789, // Number | Epoch timestamp in ms
  'to': 789, // Number | Epoch timestamp in ms
  'limit': 100 // Number | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default. 
};
apiInstance.getFills(opts, (error, data, response) => {
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
 **symbol** | **String**| Only return results for this symbol | [optional] 
 **from** | **Number**| Epoch timestamp in ms | [optional] 
 **to** | **Number**| Epoch timestamp in ms | [optional] 
 **limit** | **Number**| Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  | [optional] 

### Return type

[**[OrderSummary]**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getOrderById

> OrderSummary getOrderById(orderId)

Get a specific order

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.TradingApi();
let orderId = 789; // Number | Order ID
apiInstance.getOrderById(orderId, (error, data, response) => {
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
 **orderId** | **Number**| Order ID | 

### Return type

[**OrderSummary**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getOrders

> [OrderSummary] getOrders(opts)

Get a list orders

Returns live and historic orders, defaulting to live orders. Returns at most 100 results, use timestamp to paginate for further results

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.TradingApi();
let opts = {
  'symbol': "symbol_example", // String | Only return results for this symbol
  'from': 789, // Number | Epoch timestamp in ms
  'to': 789, // Number | Epoch timestamp in ms
  'status': new BlockchainComExchangeRestApi.OrderStatus(), // OrderStatus | Order Status
  'limit': 100 // Number | Maximum amount of results to return in a single call. If omitted, 100 results are returned by default. 
};
apiInstance.getOrders(opts, (error, data, response) => {
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
 **symbol** | **String**| Only return results for this symbol | [optional] 
 **from** | **Number**| Epoch timestamp in ms | [optional] 
 **to** | **Number**| Epoch timestamp in ms | [optional] 
 **status** | [**OrderStatus**](.md)| Order Status | [optional] 
 **limit** | **Number**| Maximum amount of results to return in a single call. If omitted, 100 results are returned by default.  | [optional] 

### Return type

[**[OrderSummary]**](OrderSummary.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

