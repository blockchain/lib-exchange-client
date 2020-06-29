# BlockchainComExchangeRestApi.UnauthenticatedApi

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

> OrderBook getL2OrderBook(symbol)

L2 Order Book

Level 2 Order Book data is available through the l2 channel. This channel returns the volume available at each price. All the price levels are retrieved with this channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.UnauthenticatedApi();
let symbol = "symbol_example"; // String | Symbol
apiInstance.getL2OrderBook(symbol, (error, data, response) => {
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
 **symbol** | **String**| Symbol | 

### Return type

[**OrderBook**](OrderBook.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getL3OrderBook

> OrderBook getL3OrderBook(symbol)

L3 Order Book

Level 3 Order Book data is available through the l3 channel. This channel returns all the order updates reaching the exchange; by applying the updates to the snapshot you can recreate the full state of the orderbook. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes.

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.UnauthenticatedApi();
let symbol = "symbol_example"; // String | Symbol
apiInstance.getL3OrderBook(symbol, (error, data, response) => {
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
 **symbol** | **String**| Symbol | 

### Return type

[**OrderBook**](OrderBook.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getSymbolByName

> SymbolStatus getSymbolByName(symbol)

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.UnauthenticatedApi();
let symbol = "symbol_example"; // String | Symbol
apiInstance.getSymbolByName(symbol, (error, data, response) => {
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
 **symbol** | **String**| Symbol | 

### Return type

[**SymbolStatus**](SymbolStatus.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getSymbols

> {String: SymbolStatus} getSymbols()

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.UnauthenticatedApi();
apiInstance.getSymbols((error, data, response) => {
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

[**{String: SymbolStatus}**](SymbolStatus.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getTickerBySymbol

> PriceEvent getTickerBySymbol(symbol)

Price

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.UnauthenticatedApi();
let symbol = "symbol_example"; // String | Symbol
apiInstance.getTickerBySymbol(symbol, (error, data, response) => {
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
 **symbol** | **String**| Symbol | 

### Return type

[**PriceEvent**](PriceEvent.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getTickers

> [PriceEvent] getTickers()

Price

### Example

```javascript
import BlockchainComExchangeRestApi from 'blockchain_com_exchange_rest_api';
let defaultClient = BlockchainComExchangeRestApi.ApiClient.instance;
// Configure API key authorization: ApiKeyAuth
let ApiKeyAuth = defaultClient.authentications['ApiKeyAuth'];
ApiKeyAuth.apiKey = 'YOUR API KEY';
// Uncomment the following line to set a prefix for the API key, e.g. "Token" (defaults to null)
//ApiKeyAuth.apiKeyPrefix = 'Token';

let apiInstance = new BlockchainComExchangeRestApi.UnauthenticatedApi();
apiInstance.getTickers((error, data, response) => {
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

[**[PriceEvent]**](PriceEvent.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

