# org.openapitools.client - Kotlin client library for Blockchain.com Exchange REST API

## Requires

* Kotlin 1.3.41
* Gradle 4.9

## Build

First, create the gradle wrapper script:

```
gradle wrapper
```

Then, run:

```
./gradlew check assemble
```

This runs all tests and packages the library.

## Features/Implementation Notes

* Supports JSON inputs/outputs, File inputs, and Form inputs.
* Supports collection formats for query parameters: csv, tsv, ssv, pipes.
* Some Kotlin and Java types are fully qualified to avoid conflicts with types defined in OpenAPI definitions.
* Implementation of ApiClient is intended to reduce method counts, specifically to benefit Android targets.

<a name="documentation-for-api-endpoints"></a>
## Documentation for API Endpoints

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*PaymentsApi* | [**createWithdrawal**](docs/PaymentsApi.md#createwithdrawal) | **POST** /withdrawals | Request a withdrawal
*PaymentsApi* | [**getAccountByTypeAndCurrency**](docs/PaymentsApi.md#getaccountbytypeandcurrency) | **GET** /accounts/{account}/{currency} | Receive current account balances
*PaymentsApi* | [**getAccounts**](docs/PaymentsApi.md#getaccounts) | **GET** /accounts | Receive current account balances
*PaymentsApi* | [**getDepositAddress**](docs/PaymentsApi.md#getdepositaddress) | **POST** /deposits/{currency} | Get a deposit address. Currently only crypto currencies are supported
*PaymentsApi* | [**getDepositById**](docs/PaymentsApi.md#getdepositbyid) | **GET** /deposits/{depositId} | Get status about a deposit
*PaymentsApi* | [**getDeposits**](docs/PaymentsApi.md#getdeposits) | **GET** /deposits | Get a list of deposits
*PaymentsApi* | [**getWhitelist**](docs/PaymentsApi.md#getwhitelist) | **GET** /whitelist | Get a list of all whitelisted withdrawal accounts
*PaymentsApi* | [**getWhitelistByCurrency**](docs/PaymentsApi.md#getwhitelistbycurrency) | **GET** /whitelist/{currency} | Get a list of all whitelisted withdrawal accounts
*PaymentsApi* | [**getWithdrawalById**](docs/PaymentsApi.md#getwithdrawalbyid) | **GET** /withdrawals/{withdrawalId} | Get status about a withdrawal
*PaymentsApi* | [**getWithdrawals**](docs/PaymentsApi.md#getwithdrawals) | **GET** /withdrawals | Get a list of withdrawals
*TradingApi* | [**createOrder**](docs/TradingApi.md#createorder) | **POST** /orders | Add an order
*TradingApi* | [**deleteAllOrders**](docs/TradingApi.md#deleteallorders) | **DELETE** /orders | Delete all open orders (of a symbol, if specified)
*TradingApi* | [**deleteOrder**](docs/TradingApi.md#deleteorder) | **DELETE** /orders/{orderId} | Cancel a trade
*TradingApi* | [**getFees**](docs/TradingApi.md#getfees) | **GET** /fees | Get current fee level
*TradingApi* | [**getOrderById**](docs/TradingApi.md#getorderbyid) | **GET** /orders/{orderId} | Get a specific order
*TradingApi* | [**getOrders**](docs/TradingApi.md#getorders) | **GET** /orders | Get a list orders
*UnauthenticatedApi* | [**getL2OrderBook**](docs/UnauthenticatedApi.md#getl2orderbook) | **GET** /l2/{symbol} | L2 Order Book
*UnauthenticatedApi* | [**getL3OrderBook**](docs/UnauthenticatedApi.md#getl3orderbook) | **GET** /l3/{symbol} | L3 Order Book
*UnauthenticatedApi* | [**getSymbolByName**](docs/UnauthenticatedApi.md#getsymbolbyname) | **GET** /symbols/{symbol} | Symbols
*UnauthenticatedApi* | [**getSymbols**](docs/UnauthenticatedApi.md#getsymbols) | **GET** /symbols | Symbols
*UnauthenticatedApi* | [**getTickerBySymbol**](docs/UnauthenticatedApi.md#gettickerbysymbol) | **GET** /tickers/{symbol} | Price
*UnauthenticatedApi* | [**getTickers**](docs/UnauthenticatedApi.md#gettickers) | **GET** /tickers | Price


<a name="documentation-for-models"></a>
## Documentation for Models

 - [com.blockchain.exchange.rest.model.Balance](docs/Balance.md)
 - [com.blockchain.exchange.rest.model.BalanceMap](docs/BalanceMap.md)
 - [com.blockchain.exchange.rest.model.BaseOrder](docs/BaseOrder.md)
 - [com.blockchain.exchange.rest.model.CancelOrderRequest](docs/CancelOrderRequest.md)
 - [com.blockchain.exchange.rest.model.CreateWithdrawalRequest](docs/CreateWithdrawalRequest.md)
 - [com.blockchain.exchange.rest.model.DepositAddressCrypto](docs/DepositAddressCrypto.md)
 - [com.blockchain.exchange.rest.model.DepositInfo](docs/DepositInfo.md)
 - [com.blockchain.exchange.rest.model.Fees](docs/Fees.md)
 - [com.blockchain.exchange.rest.model.OrdType](docs/OrdType.md)
 - [com.blockchain.exchange.rest.model.OrderBook](docs/OrderBook.md)
 - [com.blockchain.exchange.rest.model.OrderBookEntry](docs/OrderBookEntry.md)
 - [com.blockchain.exchange.rest.model.OrderStatus](docs/OrderStatus.md)
 - [com.blockchain.exchange.rest.model.OrderSummary](docs/OrderSummary.md)
 - [com.blockchain.exchange.rest.model.PriceEvent](docs/PriceEvent.md)
 - [com.blockchain.exchange.rest.model.PriceEventList](docs/PriceEventList.md)
 - [com.blockchain.exchange.rest.model.Side](docs/Side.md)
 - [com.blockchain.exchange.rest.model.SymbolStatus](docs/SymbolStatus.md)
 - [com.blockchain.exchange.rest.model.TimeInForce](docs/TimeInForce.md)
 - [com.blockchain.exchange.rest.model.TimeInForceStop](docs/TimeInForceStop.md)
 - [com.blockchain.exchange.rest.model.UnauthorizedError](docs/UnauthorizedError.md)
 - [com.blockchain.exchange.rest.model.WhitelistEntry](docs/WhitelistEntry.md)
 - [com.blockchain.exchange.rest.model.WithdrawalInfo](docs/WithdrawalInfo.md)
 - [com.blockchain.exchange.rest.model.WithdrawalStatus](docs/WithdrawalStatus.md)


<a name="documentation-for-authorization"></a>
## Documentation for Authorization

<a name="ApiKeyAuth"></a>
### ApiKeyAuth

- **Type**: API key
- **API key parameter name**: X-API-Token
- **Location**: HTTP header

