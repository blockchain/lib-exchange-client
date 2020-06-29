# openapi-android-client

## Requirements

Building the API client library requires [Maven](https://maven.apache.org/) to be installed.

## Installation

To install the API client library to your local Maven repository, simply execute:

```shell
mvn install
```

To deploy it to a remote Maven repository instead, configure the settings of the repository and execute:

```shell
mvn deploy
```

Refer to the [official documentation](https://maven.apache.org/plugins/maven-deploy-plugin/usage.html) for more information.

### Maven users

Add this dependency to your project's POM:

```xml
<dependency>
    <groupId>com.blockchain.exchange.rest</groupId>
    <artifactId>openapi-android-client</artifactId>
    <version>1.0.0</version>
    <scope>compile</scope>
</dependency>
```

### Gradle users

Add this dependency to your project's build file:

```groovy
compile "com.blockchain.exchange.rest:openapi-android-client:1.0.0"
```

### Others

At first generate the JAR by executing:

    mvn package

Then manually install the following JARs:

- target/openapi-android-client-1.0.0.jar
- target/lib/*.jar

## Getting Started

Please follow the [installation](#installation) instruction and execute the following Java code:

```java

import com.blockchain.exchange.rest.api.PaymentsApi;

public class PaymentsApiExample {

    public static void main(String[] args) {
        PaymentsApi apiInstance = new PaymentsApi();
        CreateWithdrawalRequest createWithdrawalRequest = new CreateWithdrawalRequest(); // CreateWithdrawalRequest | 
        try {
            WithdrawalInfo result = apiInstance.createWithdrawal(createWithdrawalRequest);
            System.out.println(result);
        } catch (ApiException e) {
            System.err.println("Exception when calling PaymentsApi#createWithdrawal");
            e.printStackTrace();
        }
    }
}

```

## Documentation for API Endpoints

All URIs are relative to *https://api.blockchain.com/v3/exchange*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*PaymentsApi* | [**createWithdrawal**](docs/PaymentsApi.md#createWithdrawal) | **POST** /withdrawals | Request a withdrawal
*PaymentsApi* | [**getAccountByTypeAndCurrency**](docs/PaymentsApi.md#getAccountByTypeAndCurrency) | **GET** /accounts/{account}/{currency} | Receive current account balances
*PaymentsApi* | [**getAccounts**](docs/PaymentsApi.md#getAccounts) | **GET** /accounts | Receive current account balances
*PaymentsApi* | [**getDepositAddress**](docs/PaymentsApi.md#getDepositAddress) | **POST** /deposits/{currency} | Get a deposit address. Currently only crypto currencies are supported
*PaymentsApi* | [**getDepositById**](docs/PaymentsApi.md#getDepositById) | **GET** /deposits/{depositId} | Get status about a deposit
*PaymentsApi* | [**getDeposits**](docs/PaymentsApi.md#getDeposits) | **GET** /deposits | Get a list of deposits
*PaymentsApi* | [**getWhitelist**](docs/PaymentsApi.md#getWhitelist) | **GET** /whitelist | Get a list of all whitelisted withdrawal accounts
*PaymentsApi* | [**getWhitelistByCurrency**](docs/PaymentsApi.md#getWhitelistByCurrency) | **GET** /whitelist/{currency} | Get a list of all whitelisted withdrawal accounts
*PaymentsApi* | [**getWithdrawalById**](docs/PaymentsApi.md#getWithdrawalById) | **GET** /withdrawals/{withdrawalId} | Get status about a withdrawal
*PaymentsApi* | [**getWithdrawals**](docs/PaymentsApi.md#getWithdrawals) | **GET** /withdrawals | Get a list of withdrawals
*TradingApi* | [**createOrder**](docs/TradingApi.md#createOrder) | **POST** /orders | Add an order
*TradingApi* | [**deleteAllOrders**](docs/TradingApi.md#deleteAllOrders) | **DELETE** /orders | Delete all open orders (of a symbol, if specified)
*TradingApi* | [**deleteOrder**](docs/TradingApi.md#deleteOrder) | **DELETE** /orders/{orderId} | Cancel a trade
*TradingApi* | [**getFees**](docs/TradingApi.md#getFees) | **GET** /fees | Get current fee level
*TradingApi* | [**getOrderById**](docs/TradingApi.md#getOrderById) | **GET** /orders/{orderId} | Get a specific order
*TradingApi* | [**getOrders**](docs/TradingApi.md#getOrders) | **GET** /orders | Get a list orders
*UnauthenticatedApi* | [**getL2OrderBook**](docs/UnauthenticatedApi.md#getL2OrderBook) | **GET** /l2/{symbol} | L2 Order Book
*UnauthenticatedApi* | [**getL3OrderBook**](docs/UnauthenticatedApi.md#getL3OrderBook) | **GET** /l3/{symbol} | L3 Order Book
*UnauthenticatedApi* | [**getSymbolByName**](docs/UnauthenticatedApi.md#getSymbolByName) | **GET** /symbols/{symbol} | Symbols
*UnauthenticatedApi* | [**getSymbols**](docs/UnauthenticatedApi.md#getSymbols) | **GET** /symbols | Symbols
*UnauthenticatedApi* | [**getTickerBySymbol**](docs/UnauthenticatedApi.md#getTickerBySymbol) | **GET** /tickers/{symbol} | Price
*UnauthenticatedApi* | [**getTickers**](docs/UnauthenticatedApi.md#getTickers) | **GET** /tickers | Price


## Documentation for Models

 - [Balance](docs/Balance.md)
 - [BalanceMap](docs/BalanceMap.md)
 - [BaseOrder](docs/BaseOrder.md)
 - [CancelOrderRequest](docs/CancelOrderRequest.md)
 - [CreateWithdrawalRequest](docs/CreateWithdrawalRequest.md)
 - [DepositAddressCrypto](docs/DepositAddressCrypto.md)
 - [DepositInfo](docs/DepositInfo.md)
 - [Fees](docs/Fees.md)
 - [OrderBook](docs/OrderBook.md)
 - [OrderBookEntry](docs/OrderBookEntry.md)
 - [OrderStatus](docs/OrderStatus.md)
 - [OrderSummary](docs/OrderSummary.md)
 - [PriceEvent](docs/PriceEvent.md)
 - [PriceEventList](docs/PriceEventList.md)
 - [Side](docs/Side.md)
 - [SymbolStatus](docs/SymbolStatus.md)
 - [TimeInForce](docs/TimeInForce.md)
 - [TimeInForceStop](docs/TimeInForceStop.md)
 - [UnauthorizedError](docs/UnauthorizedError.md)
 - [WhitelistEntry](docs/WhitelistEntry.md)
 - [WithdrawalInfo](docs/WithdrawalInfo.md)
 - [WithdrawalStatus](docs/WithdrawalStatus.md)


## Documentation for Authorization

Authentication schemes defined for the API:
### ApiKeyAuth

- **Type**: API key

- **API key parameter name**: X-API-Token
- **Location**: HTTP header


## Recommendation

It's recommended to create an instance of `ApiClient` per thread in a multithreaded environment to avoid any potential issues.

## Author



