# UnauthenticatedApi

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

```java
// Import classes:
//import com.blockchain.exchange.rest.api.UnauthenticatedApi;

UnauthenticatedApi apiInstance = new UnauthenticatedApi();
String symbol = null; // String | Symbol
try {
    OrderBook result = apiInstance.getL2OrderBook(symbol);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling UnauthenticatedApi#getL2OrderBook");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| Symbol | [default to null]

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

```java
// Import classes:
//import com.blockchain.exchange.rest.api.UnauthenticatedApi;

UnauthenticatedApi apiInstance = new UnauthenticatedApi();
String symbol = null; // String | Symbol
try {
    OrderBook result = apiInstance.getL3OrderBook(symbol);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling UnauthenticatedApi#getL3OrderBook");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| Symbol | [default to null]

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

```java
// Import classes:
//import com.blockchain.exchange.rest.api.UnauthenticatedApi;

UnauthenticatedApi apiInstance = new UnauthenticatedApi();
String symbol = null; // String | Symbol
try {
    SymbolStatus result = apiInstance.getSymbolByName(symbol);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling UnauthenticatedApi#getSymbolByName");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| Symbol | [default to null]

### Return type

[**SymbolStatus**](SymbolStatus.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getSymbols

> Map&lt;String, SymbolStatus&gt; getSymbols()

Symbols

When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.UnauthenticatedApi;

UnauthenticatedApi apiInstance = new UnauthenticatedApi();
try {
    Map<String, SymbolStatus> result = apiInstance.getSymbols();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling UnauthenticatedApi#getSymbols");
    e.printStackTrace();
}
```

### Parameters

This endpoint does not need any parameter.

### Return type

[**Map&lt;String, SymbolStatus&gt;**](SymbolStatus.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getTickerBySymbol

> PriceEvent getTickerBySymbol(symbol)

Price

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.UnauthenticatedApi;

UnauthenticatedApi apiInstance = new UnauthenticatedApi();
String symbol = null; // String | Symbol
try {
    PriceEvent result = apiInstance.getTickerBySymbol(symbol);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling UnauthenticatedApi#getTickerBySymbol");
    e.printStackTrace();
}
```

### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **symbol** | **String**| Symbol | [default to null]

### Return type

[**PriceEvent**](PriceEvent.md)

### Authorization

[ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## getTickers

> List&lt;PriceEvent&gt; getTickers()

Price

### Example

```java
// Import classes:
//import com.blockchain.exchange.rest.api.UnauthenticatedApi;

UnauthenticatedApi apiInstance = new UnauthenticatedApi();
try {
    List<PriceEvent> result = apiInstance.getTickers();
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling UnauthenticatedApi#getTickers");
    e.printStackTrace();
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

