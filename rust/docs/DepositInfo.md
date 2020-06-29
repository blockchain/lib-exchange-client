# DepositInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**deposit_id** | **String** | Unique ID for this withdrawal | 
**amount** | **f64** | The amount that is credited in the currency specified | 
**currency** | **String** |  | 
**address** | **String** | Address to deposit to. If a tag or memo must be used, it is separated by a colon. | 
**tx_hash** | Option<**String**> | The transaction hash of the transaction that deposited funds | [optional]
**state** | **String** |  | 
**timestamp** | Option<**i64**> | Time in ms since 01/01/1970 (epoch) | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


