#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fees.h"



fees_t *fees_create(
    int tier,
    double maker_rate,
    double taker_rate,
    double volume_in_usd
    ) {
    fees_t *fees_local_var = malloc(sizeof(fees_t));
    if (!fees_local_var) {
        return NULL;
    }
    fees_local_var->tier = tier;
    fees_local_var->maker_rate = maker_rate;
    fees_local_var->taker_rate = taker_rate;
    fees_local_var->volume_in_usd = volume_in_usd;

    return fees_local_var;
}


void fees_free(fees_t *fees) {
    if(NULL == fees){
        return ;
    }
    listEntry_t *listEntry;
    free(fees);
}

cJSON *fees_convertToJSON(fees_t *fees) {
    cJSON *item = cJSON_CreateObject();

    // fees->tier
    if(fees->tier) { 
    if(cJSON_AddNumberToObject(item, "tier", fees->tier) == NULL) {
    goto fail; //Numeric
    }
     } 


    // fees->maker_rate
    if (!fees->maker_rate) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "makerRate", fees->maker_rate) == NULL) {
    goto fail; //Numeric
    }


    // fees->taker_rate
    if (!fees->taker_rate) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "takerRate", fees->taker_rate) == NULL) {
    goto fail; //Numeric
    }


    // fees->volume_in_usd
    if (!fees->volume_in_usd) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "volumeInUSD", fees->volume_in_usd) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

fees_t *fees_parseFromJSON(cJSON *feesJSON){

    fees_t *fees_local_var = NULL;

    // fees->tier
    cJSON *tier = cJSON_GetObjectItemCaseSensitive(feesJSON, "tier");
    if (tier) { 
    if(!cJSON_IsNumber(tier))
    {
    goto end; //Numeric
    }
    }

    // fees->maker_rate
    cJSON *maker_rate = cJSON_GetObjectItemCaseSensitive(feesJSON, "makerRate");
    if (!maker_rate) {
        goto end;
    }

    
    if(!cJSON_IsNumber(maker_rate))
    {
    goto end; //Numeric
    }

    // fees->taker_rate
    cJSON *taker_rate = cJSON_GetObjectItemCaseSensitive(feesJSON, "takerRate");
    if (!taker_rate) {
        goto end;
    }

    
    if(!cJSON_IsNumber(taker_rate))
    {
    goto end; //Numeric
    }

    // fees->volume_in_usd
    cJSON *volume_in_usd = cJSON_GetObjectItemCaseSensitive(feesJSON, "volumeInUSD");
    if (!volume_in_usd) {
        goto end;
    }

    
    if(!cJSON_IsNumber(volume_in_usd))
    {
    goto end; //Numeric
    }


    fees_local_var = fees_create (
        tier ? tier->valuedouble : 0,
        maker_rate->valuedouble,
        taker_rate->valuedouble,
        volume_in_usd->valuedouble
        );

    return fees_local_var;
end:
    return NULL;

}
