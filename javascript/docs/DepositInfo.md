# BlockchainComExchangeRestApi.DepositInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**depositId** | **String** | Unique ID for this withdrawal | 
**amount** | **Number** | The amount that is credited in the currency specified | 
**currency** | **String** |  | 
**address** | **String** | Address to deposit to. If a tag or memo must be used, it is separated by a colon. | 
**txHash** | **String** | The transaction hash of the transaction that deposited funds | [optional] 
**state** | **String** |  | 
**timestamp** | **Number** | Time in ms since 01/01/1970 (epoch) | [optional] 



## Enum: StateEnum


* `REJECTED` (value: `"REJECTED"`)

* `UNCONFIRMED` (value: `"UNCONFIRMED"`)

* `COMPLETED` (value: `"COMPLETED"`)




