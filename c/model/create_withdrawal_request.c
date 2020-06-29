#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_withdrawal_request.h"



create_withdrawal_request_t *create_withdrawal_request_create(
    double amount,
    char *currency,
    char *beneficiary,
    int send_max
    ) {
    create_withdrawal_request_t *create_withdrawal_request_local_var = malloc(sizeof(create_withdrawal_request_t));
    if (!create_withdrawal_request_local_var) {
        return NULL;
    }
    create_withdrawal_request_local_var->amount = amount;
    create_withdrawal_request_local_var->currency = currency;
    create_withdrawal_request_local_var->beneficiary = beneficiary;
    create_withdrawal_request_local_var->send_max = send_max;

    return create_withdrawal_request_local_var;
}


void create_withdrawal_request_free(create_withdrawal_request_t *create_withdrawal_request) {
    if(NULL == create_withdrawal_request){
        return ;
    }
    listEntry_t *listEntry;
    free(create_withdrawal_request->currency);
    free(create_withdrawal_request->beneficiary);
    free(create_withdrawal_request);
}

cJSON *create_withdrawal_request_convertToJSON(create_withdrawal_request_t *create_withdrawal_request) {
    cJSON *item = cJSON_CreateObject();

    // create_withdrawal_request->amount
    if(create_withdrawal_request->amount) { 
    if(cJSON_AddNumberToObject(item, "amount", create_withdrawal_request->amount) == NULL) {
    goto fail; //Numeric
    }
     } 


    // create_withdrawal_request->currency
    if (!create_withdrawal_request->currency) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "currency", create_withdrawal_request->currency) == NULL) {
    goto fail; //String
    }


    // create_withdrawal_request->beneficiary
    if (!create_withdrawal_request->beneficiary) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "beneficiary", create_withdrawal_request->beneficiary) == NULL) {
    goto fail; //String
    }


    // create_withdrawal_request->send_max
    if(create_withdrawal_request->send_max) { 
    if(cJSON_AddBoolToObject(item, "sendMax", create_withdrawal_request->send_max) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

create_withdrawal_request_t *create_withdrawal_request_parseFromJSON(cJSON *create_withdrawal_requestJSON){

    create_withdrawal_request_t *create_withdrawal_request_local_var = NULL;

    // create_withdrawal_request->amount
    cJSON *amount = cJSON_GetObjectItemCaseSensitive(create_withdrawal_requestJSON, "amount");
    if (amount) { 
    if(!cJSON_IsNumber(amount))
    {
    goto end; //Numeric
    }
    }

    // create_withdrawal_request->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(create_withdrawal_requestJSON, "currency");
    if (!currency) {
        goto end;
    }

    
    if(!cJSON_IsString(currency))
    {
    goto end; //String
    }

    // create_withdrawal_request->beneficiary
    cJSON *beneficiary = cJSON_GetObjectItemCaseSensitive(create_withdrawal_requestJSON, "beneficiary");
    if (!beneficiary) {
        goto end;
    }

    
    if(!cJSON_IsString(beneficiary))
    {
    goto end; //String
    }

    // create_withdrawal_request->send_max
    cJSON *send_max = cJSON_GetObjectItemCaseSensitive(create_withdrawal_requestJSON, "sendMax");
    if (send_max) { 
    if(!cJSON_IsBool(send_max))
    {
    goto end; //Bool
    }
    }


    create_withdrawal_request_local_var = create_withdrawal_request_create (
        amount ? amount->valuedouble : 0,
        strdup(currency->valuestring),
        strdup(beneficiary->valuestring),
        send_max ? send_max->valueint : 0
        );

    return create_withdrawal_request_local_var;
end:
    return NULL;

}
