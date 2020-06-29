#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "withdrawal_info.h"


char* statewithdrawal_info_ToString(blockchain_com_exchange_rest_api_withdrawal_info__e state) {
    char* stateArray[] =  { "NULL", "REJECTED", "PENDING", "REFUNDED", "FAILED", "COMPLETED" };
	return stateArray[state];
}

blockchain_com_exchange_rest_api_withdrawal_info__e statewithdrawal_info_FromString(char* state){
    int stringToReturn = 0;
    char *stateArray[] =  { "NULL", "REJECTED", "PENDING", "REFUNDED", "FAILED", "COMPLETED" };
    size_t sizeofArray = sizeof(stateArray) / sizeof(stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(state, stateArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

withdrawal_info_t *withdrawal_info_create(
    char *withdrawal_id,
    double amount,
    double fee,
    char *currency,
    char *beneficiary,
    long timestamp
    ) {
    withdrawal_info_t *withdrawal_info_local_var = malloc(sizeof(withdrawal_info_t));
    if (!withdrawal_info_local_var) {
        return NULL;
    }
    withdrawal_info_local_var->withdrawal_id = withdrawal_id;
    withdrawal_info_local_var->amount = amount;
    withdrawal_info_local_var->fee = fee;
    withdrawal_info_local_var->currency = currency;
    withdrawal_info_local_var->beneficiary = beneficiary;
    withdrawal_info_local_var->state = state;
    withdrawal_info_local_var->timestamp = timestamp;

    return withdrawal_info_local_var;
}


void withdrawal_info_free(withdrawal_info_t *withdrawal_info) {
    if(NULL == withdrawal_info){
        return ;
    }
    listEntry_t *listEntry;
    free(withdrawal_info->withdrawal_id);
    free(withdrawal_info->currency);
    free(withdrawal_info->beneficiary);
    free(withdrawal_info);
}

cJSON *withdrawal_info_convertToJSON(withdrawal_info_t *withdrawal_info) {
    cJSON *item = cJSON_CreateObject();

    // withdrawal_info->withdrawal_id
    if(withdrawal_info->withdrawal_id) { 
    if(cJSON_AddStringToObject(item, "withdrawalId", withdrawal_info->withdrawal_id) == NULL) {
    goto fail; //String
    }
     } 


    // withdrawal_info->amount
    if (!withdrawal_info->amount) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "amount", withdrawal_info->amount) == NULL) {
    goto fail; //Numeric
    }


    // withdrawal_info->fee
    if(withdrawal_info->fee) { 
    if(cJSON_AddNumberToObject(item, "fee", withdrawal_info->fee) == NULL) {
    goto fail; //Numeric
    }
     } 


    // withdrawal_info->currency
    if (!withdrawal_info->currency) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "currency", withdrawal_info->currency) == NULL) {
    goto fail; //String
    }


    // withdrawal_info->beneficiary
    if (!withdrawal_info->beneficiary) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "beneficiary", withdrawal_info->beneficiary) == NULL) {
    goto fail; //String
    }


    // withdrawal_info->state
    
    


    // withdrawal_info->timestamp
    if(withdrawal_info->timestamp) { 
    if(cJSON_AddNumberToObject(item, "timestamp", withdrawal_info->timestamp) == NULL) {
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

withdrawal_info_t *withdrawal_info_parseFromJSON(cJSON *withdrawal_infoJSON){

    withdrawal_info_t *withdrawal_info_local_var = NULL;

    // withdrawal_info->withdrawal_id
    cJSON *withdrawal_id = cJSON_GetObjectItemCaseSensitive(withdrawal_infoJSON, "withdrawalId");
    if (withdrawal_id) { 
    if(!cJSON_IsString(withdrawal_id))
    {
    goto end; //String
    }
    }

    // withdrawal_info->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(withdrawal_infoJSON, "amount");
    if (!amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }

    // withdrawal_info->fee
    cJSON *fee = cJSON_GetObjectItemCaseSensitive(withdrawal_infoJSON, "fee");
    if (fee) { 
    if(!cJSON_IsNumber(fee))
    {
    goto end; //Numeric
    }
    }

    // withdrawal_info->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(withdrawal_infoJSON, "currency");
    if (!currency) {
        goto end;
    }

    
    if(!cJSON_IsString(currency))
    {
    goto end; //String
    }

    // withdrawal_info->beneficiary
    cJSON *beneficiary = cJSON_GetObjectItemCaseSensitive(withdrawal_infoJSON, "beneficiary");
    if (!beneficiary) {
        goto end;
    }

    
    if(!cJSON_IsString(beneficiary))
    {
    goto end; //String
    }

    // withdrawal_info->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(withdrawal_infoJSON, "state");
    }

    // withdrawal_info->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(withdrawal_infoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsNumber(timestamp))
    {
    goto end; //Numeric
    }
    }


    withdrawal_info_local_var = withdrawal_info_create (
        withdrawal_id ? strdup(withdrawal_id->valuestring) : NULL,
        amount->valuedouble,
        fee ? fee->valuedouble : 0,
        strdup(currency->valuestring),
        strdup(beneficiary->valuestring),
        timestamp ? timestamp->valuedouble : 0
        );

    return withdrawal_info_local_var;
end:
    return NULL;

}
