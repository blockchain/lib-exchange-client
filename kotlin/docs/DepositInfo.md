
# DepositInfo

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**depositId** | **kotlin.String** | Unique ID for this withdrawal | 
**amount** | **kotlin.Double** | The amount that is credited in the currency specified | 
**currency** | **kotlin.String** |  | 
**address** | **kotlin.String** | Address to deposit to. If a tag or memo must be used, it is separated by a colon. | 
**state** | [**inline**](#StateEnum) |  | 
**txHash** | **kotlin.String** | The transaction hash of the transaction that deposited funds |  [optional]
**timestamp** | **kotlin.Long** | Time in ms since 01/01/1970 (epoch) |  [optional]


<a name="StateEnum"></a>
## Enum: state
Name | Value
---- | -----
state | REJECTED, UNCONFIRMED, COMPLETED



