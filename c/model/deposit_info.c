#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposit_info.h"


char* statedeposit_info_ToString(blockchain_com_exchange_rest_api_deposit_info_STATE_e state) {
    char* stateArray[] =  { "NULL", "REJECTED", "UNCONFIRMED", "COMPLETED" };
	return stateArray[state];
}

blockchain_com_exchange_rest_api_deposit_info_STATE_e statedeposit_info_FromString(char* state){
    int stringToReturn = 0;
    char *stateArray[] =  { "NULL", "REJECTED", "UNCONFIRMED", "COMPLETED" };
    size_t sizeofArray = sizeof(stateArray) / sizeof(stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(state, stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

deposit_info_t *deposit_info_create(
    char *deposit_id,
    double amount,
    char *currency,
    char *address,
    char *tx_hash,
    blockchain_com_exchange_rest_api_deposit_info_STATE_e state,
    long timestamp
    ) {
    deposit_info_t *deposit_info_local_var = malloc(sizeof(deposit_info_t));
    if (!deposit_info_local_var) {
        return NULL;
    }
    deposit_info_local_var->deposit_id = deposit_id;
    deposit_info_local_var->amount = amount;
    deposit_info_local_var->currency = currency;
    deposit_info_local_var->address = address;
    deposit_info_local_var->tx_hash = tx_hash;
    deposit_info_local_var->state = state;
    deposit_info_local_var->timestamp = timestamp;

    return deposit_info_local_var;
}


void deposit_info_free(deposit_info_t *deposit_info) {
    if(NULL == deposit_info){
        return ;
    }
    listEntry_t *listEntry;
    free(deposit_info->deposit_id);
    free(deposit_info->currency);
    free(deposit_info->address);
    free(deposit_info->tx_hash);
    free(deposit_info);
}

cJSON *deposit_info_convertToJSON(deposit_info_t *deposit_info) {
    cJSON *item = cJSON_CreateObject();

    // deposit_info->deposit_id
    if (!deposit_info->deposit_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "depositId", deposit_info->deposit_id) == NULL) {
    goto fail; //String
    }


    // deposit_info->amount
    if (!deposit_info->amount) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "amount", deposit_info->amount) == NULL) {
    goto fail; //Numeric
    }


    // deposit_info->currency
    if (!deposit_info->currency) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "currency", deposit_info->currency) == NULL) {
    goto fail; //String
    }


    // deposit_info->address
    if (!deposit_info->address) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "address", deposit_info->address) == NULL) {
    goto fail; //String
    }


    // deposit_info->tx_hash
    if(deposit_info->tx_hash) { 
    if(cJSON_AddStringToObject(item, "txHash", deposit_info->tx_hash) == NULL) {
    goto fail; //String
    }
     } 


    // deposit_info->state
    
    if(cJSON_AddStringToObject(item, "state", statedeposit_info_ToString(deposit_info->state)) == NULL)
    {
    goto fail; //Enum
    }


    // deposit_info->timestamp
    if(deposit_info->timestamp) { 
    if(cJSON_AddNumberToObject(item, "timestamp", deposit_info->timestamp) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposit_info_t *deposit_info_parseFromJSON(cJSON *deposit_infoJSON){

    deposit_info_t *deposit_info_local_var = NULL;

    // deposit_info->deposit_id
    cJSON *deposit_id = cJSON_GetObjectItemCaseSensitive(deposit_infoJSON, "depositId");
    if (!deposit_id) {
        goto end;
    }

    
    if(!cJSON_IsString(deposit_id))
    {
    goto end; //String
    }

    // deposit_info->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(deposit_infoJSON, "amount");
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }

    // deposit_info->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(deposit_infoJSON, "currency");
    if (!currency) {
        goto end;
    }

    
    if(!cJSON_IsString(currency))
    {
    goto end; //String
    }

    // deposit_info->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(deposit_infoJSON, "address");
    if (!address) {
        goto end;
    }

    
    if(!cJSON_IsString(address))
    {
    goto end; //String
    }

    // deposit_info->tx_hash
    cJSON *tx_hash = cJSON_GetObjectItemCaseSensitive(deposit_infoJSON, "txHash");
    if (tx_hash) { 
    if(!cJSON_IsString(tx_hash))
    {
    goto end; //String
    }
    }

    // deposit_info->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(deposit_infoJSON, "state");
    if (!state) {
        goto end;
    }

    blockchain_com_exchange_rest_api_deposit_info_STATE_e stateVariable;
    
    if(!cJSON_IsString(state))
    {
    goto end; //Enum
    }
    stateVariable = statedeposit_info_FromString(state->valuestring);

    // deposit_info->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(deposit_infoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsNumber(timestamp))
    {
    goto end; //Numeric
    }
    }


    deposit_info_local_var = deposit_info_create (
        strdup(deposit_id->valuestring),
        amount->valuedouble,
        strdup(currency->valuestring),
        strdup(address->valuestring),
        tx_hash ? strdup(tx_hash->valuestring) : NULL,
        stateVariable,
        timestamp ? timestamp->valuedouble : 0
        );

    return deposit_info_local_var;
end:
    return NULL;

}
