#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "balance.h"



balance_t *balance_create(
    char *currency,
    double balance,
    double available,
    double balance_local,
    double available_local,
    double rate
    ) {
    balance_t *balance_local_var = malloc(sizeof(balance_t));
    if (!balance_local_var) {
        return NULL;
    }
    balance_local_var->currency = currency;
    balance_local_var->balance = balance;
    balance_local_var->available = available;
    balance_local_var->balance_local = balance_local;
    balance_local_var->available_local = available_local;
    balance_local_var->rate = rate;

    return balance_local_var;
}


void balance_free(balance_t *balance) {
    if(NULL == balance){
        return ;
    }
    listEntry_t *listEntry;
    free(balance->currency);
    free(balance);
}

cJSON *balance_convertToJSON(balance_t *balance) {
    cJSON *item = cJSON_CreateObject();

    // balance->currency
    if (!balance->currency) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "currency", balance->currency) == NULL) {
    goto fail; //String
    }


    // balance->balance
    if (!balance->balance) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "balance", balance->balance) == NULL) {
    goto fail; //Numeric
    }


    // balance->available
    if (!balance->available) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "available", balance->available) == NULL) {
    goto fail; //Numeric
    }


    // balance->balance_local
    if (!balance->balance_local) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "balance_local", balance->balance_local) == NULL) {
    goto fail; //Numeric
    }


    // balance->available_local
    if (!balance->available_local) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "available_local", balance->available_local) == NULL) {
    goto fail; //Numeric
    }


    // balance->rate
    if (!balance->rate) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "rate", balance->rate) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

balance_t *balance_parseFromJSON(cJSON *balanceJSON){

    balance_t *balance_local_var = NULL;

    // balance->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(balanceJSON, "currency");
    if (!currency) {
        goto end;
    }

    
    if(!cJSON_IsString(currency))
    {
    goto end; //String
    }

    // balance->balance
    cJSON *balance = cJSON_GetObjectItemCaseSensitive(balanceJSON, "balance");
    if (!balance) {
        goto end;
    }

    
    if(!cJSON_IsNumber(balance))
    {
    goto end; //Numeric
    }

    // balance->available
    cJSON *available = cJSON_GetObjectItemCaseSensitive(balanceJSON, "available");
    if (!available) {
        goto end;
    }

    
    if(!cJSON_IsNumber(available))
    {
    goto end; //Numeric
    }

    // balance->balance_local
    cJSON *balance_local = cJSON_GetObjectItemCaseSensitive(balanceJSON, "balance_local");
    if (!balance_local) {
        goto end;
    }

    
    if(!cJSON_IsNumber(balance_local))
    {
    goto end; //Numeric
    }

    // balance->available_local
    cJSON *available_local = cJSON_GetObjectItemCaseSensitive(balanceJSON, "available_local");
    if (!available_local) {
        goto end;
    }

    
    if(!cJSON_IsNumber(available_local))
    {
    goto end; //Numeric
    }

    // balance->rate
    cJSON *rate = cJSON_GetObjectItemCaseSensitive(balanceJSON, "rate");
    if (!rate) {
        goto end;
    }

    
    if(!cJSON_IsNumber(rate))
    {
    goto end; //Numeric
    }


    balance_local_var = balance_create (
        strdup(currency->valuestring),
        balance->valuedouble,
        available->valuedouble,
        balance_local->valuedouble,
        available_local->valuedouble,
        rate->valuedouble
        );

    return balance_local_var;
end:
    return NULL;

}
