#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "symbol_status.h"


char* statussymbol_status_ToString(blockchain_com_exchange_rest_api_symbol_status_STATUS_e status) {
    char* statusArray[] =  { "NULL", "open", "close", "suspend", "halt", "halt_freeze" };
	return statusArray[status];
}

blockchain_com_exchange_rest_api_symbol_status_STATUS_e statussymbol_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "open", "close", "suspend", "halt", "halt_freeze" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

symbol_status_t *symbol_status_create(
    char *base_currency,
    int base_currency_scale,
    char *counter_currency,
    int counter_currency_scale,
    long min_price_increment,
    int min_price_increment_scale,
    long min_order_size,
    int min_order_size_scale,
    long max_order_size,
    int max_order_size_scale,
    long lot_size,
    int lot_size_scale,
    blockchain_com_exchange_rest_api_symbol_status_STATUS_e status,
    long id,
    double auction_price,
    double auction_size,
    int auction_time,
    double imbalance
    ) {
    symbol_status_t *symbol_status_local_var = malloc(sizeof(symbol_status_t));
    if (!symbol_status_local_var) {
        return NULL;
    }
    symbol_status_local_var->base_currency = base_currency;
    symbol_status_local_var->base_currency_scale = base_currency_scale;
    symbol_status_local_var->counter_currency = counter_currency;
    symbol_status_local_var->counter_currency_scale = counter_currency_scale;
    symbol_status_local_var->min_price_increment = min_price_increment;
    symbol_status_local_var->min_price_increment_scale = min_price_increment_scale;
    symbol_status_local_var->min_order_size = min_order_size;
    symbol_status_local_var->min_order_size_scale = min_order_size_scale;
    symbol_status_local_var->max_order_size = max_order_size;
    symbol_status_local_var->max_order_size_scale = max_order_size_scale;
    symbol_status_local_var->lot_size = lot_size;
    symbol_status_local_var->lot_size_scale = lot_size_scale;
    symbol_status_local_var->status = status;
    symbol_status_local_var->id = id;
    symbol_status_local_var->auction_price = auction_price;
    symbol_status_local_var->auction_size = auction_size;
    symbol_status_local_var->auction_time = auction_time;
    symbol_status_local_var->imbalance = imbalance;

    return symbol_status_local_var;
}


void symbol_status_free(symbol_status_t *symbol_status) {
    if(NULL == symbol_status){
        return ;
    }
    listEntry_t *listEntry;
    free(symbol_status->base_currency);
    free(symbol_status->counter_currency);
    free(symbol_status);
}

cJSON *symbol_status_convertToJSON(symbol_status_t *symbol_status) {
    cJSON *item = cJSON_CreateObject();

    // symbol_status->base_currency
    if(symbol_status->base_currency) { 
    if(cJSON_AddStringToObject(item, "base_currency", symbol_status->base_currency) == NULL) {
    goto fail; //String
    }
     } 


    // symbol_status->base_currency_scale
    if(symbol_status->base_currency_scale) { 
    if(cJSON_AddNumberToObject(item, "base_currency_scale", symbol_status->base_currency_scale) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->counter_currency
    if(symbol_status->counter_currency) { 
    if(cJSON_AddStringToObject(item, "counter_currency", symbol_status->counter_currency) == NULL) {
    goto fail; //String
    }
     } 


    // symbol_status->counter_currency_scale
    if(symbol_status->counter_currency_scale) { 
    if(cJSON_AddNumberToObject(item, "counter_currency_scale", symbol_status->counter_currency_scale) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->min_price_increment
    if(symbol_status->min_price_increment) { 
    if(cJSON_AddNumberToObject(item, "min_price_increment", symbol_status->min_price_increment) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->min_price_increment_scale
    if(symbol_status->min_price_increment_scale) { 
    if(cJSON_AddNumberToObject(item, "min_price_increment_scale", symbol_status->min_price_increment_scale) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->min_order_size
    if(symbol_status->min_order_size) { 
    if(cJSON_AddNumberToObject(item, "min_order_size", symbol_status->min_order_size) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->min_order_size_scale
    if(symbol_status->min_order_size_scale) { 
    if(cJSON_AddNumberToObject(item, "min_order_size_scale", symbol_status->min_order_size_scale) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->max_order_size
    if(symbol_status->max_order_size) { 
    if(cJSON_AddNumberToObject(item, "max_order_size", symbol_status->max_order_size) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->max_order_size_scale
    if(symbol_status->max_order_size_scale) { 
    if(cJSON_AddNumberToObject(item, "max_order_size_scale", symbol_status->max_order_size_scale) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->lot_size
    if(symbol_status->lot_size) { 
    if(cJSON_AddNumberToObject(item, "lot_size", symbol_status->lot_size) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->lot_size_scale
    if(symbol_status->lot_size_scale) { 
    if(cJSON_AddNumberToObject(item, "lot_size_scale", symbol_status->lot_size_scale) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->status
    
    if(cJSON_AddStringToObject(item, "status", statussymbol_status_ToString(symbol_status->status)) == NULL)
    {
    goto fail; //Enum
    }
    


    // symbol_status->id
    if(symbol_status->id) { 
    if(cJSON_AddNumberToObject(item, "id", symbol_status->id) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->auction_price
    if(symbol_status->auction_price) { 
    if(cJSON_AddNumberToObject(item, "auction_price", symbol_status->auction_price) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->auction_size
    if(symbol_status->auction_size) { 
    if(cJSON_AddNumberToObject(item, "auction_size", symbol_status->auction_size) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->auction_time
    if(symbol_status->auction_time) { 
    if(cJSON_AddNumberToObject(item, "auction_time", symbol_status->auction_time) == NULL) {
    goto fail; //Numeric
    }
     } 


    // symbol_status->imbalance
    if(symbol_status->imbalance) { 
    if(cJSON_AddNumberToObject(item, "imbalance", symbol_status->imbalance) == NULL) {
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

symbol_status_t *symbol_status_parseFromJSON(cJSON *symbol_statusJSON){

    symbol_status_t *symbol_status_local_var = NULL;

    // symbol_status->base_currency
    cJSON *base_currency = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "base_currency");
    if (base_currency) { 
    if(!cJSON_IsString(base_currency))
    {
    goto end; //String
    }
    }

    // symbol_status->base_currency_scale
    cJSON *base_currency_scale = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "base_currency_scale");
    if (base_currency_scale) { 
    if(!cJSON_IsNumber(base_currency_scale))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->counter_currency
    cJSON *counter_currency = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "counter_currency");
    if (counter_currency) { 
    if(!cJSON_IsString(counter_currency))
    {
    goto end; //String
    }
    }

    // symbol_status->counter_currency_scale
    cJSON *counter_currency_scale = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "counter_currency_scale");
    if (counter_currency_scale) { 
    if(!cJSON_IsNumber(counter_currency_scale))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->min_price_increment
    cJSON *min_price_increment = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "min_price_increment");
    if (min_price_increment) { 
    if(!cJSON_IsNumber(min_price_increment))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->min_price_increment_scale
    cJSON *min_price_increment_scale = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "min_price_increment_scale");
    if (min_price_increment_scale) { 
    if(!cJSON_IsNumber(min_price_increment_scale))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->min_order_size
    cJSON *min_order_size = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "min_order_size");
    if (min_order_size) { 
    if(!cJSON_IsNumber(min_order_size))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->min_order_size_scale
    cJSON *min_order_size_scale = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "min_order_size_scale");
    if (min_order_size_scale) { 
    if(!cJSON_IsNumber(min_order_size_scale))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->max_order_size
    cJSON *max_order_size = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "max_order_size");
    if (max_order_size) { 
    if(!cJSON_IsNumber(max_order_size))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->max_order_size_scale
    cJSON *max_order_size_scale = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "max_order_size_scale");
    if (max_order_size_scale) { 
    if(!cJSON_IsNumber(max_order_size_scale))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->lot_size
    cJSON *lot_size = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "lot_size");
    if (lot_size) { 
    if(!cJSON_IsNumber(lot_size))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->lot_size_scale
    cJSON *lot_size_scale = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "lot_size_scale");
    if (lot_size_scale) { 
    if(!cJSON_IsNumber(lot_size_scale))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "status");
    blockchain_com_exchange_rest_api_symbol_status_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = statussymbol_status_FromString(status->valuestring);
    }

    // symbol_status->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->auction_price
    cJSON *auction_price = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "auction_price");
    if (auction_price) { 
    if(!cJSON_IsNumber(auction_price))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->auction_size
    cJSON *auction_size = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "auction_size");
    if (auction_size) { 
    if(!cJSON_IsNumber(auction_size))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->auction_time
    cJSON *auction_time = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "auction_time");
    if (auction_time) { 
    if(!cJSON_IsNumber(auction_time))
    {
    goto end; //Numeric
    }
    }

    // symbol_status->imbalance
    cJSON *imbalance = cJSON_GetObjectItemCaseSensitive(symbol_statusJSON, "imbalance");
    if (imbalance) { 
    if(!cJSON_IsNumber(imbalance))
    {
    goto end; //Numeric
    }
    }


    symbol_status_local_var = symbol_status_create (
        base_currency ? strdup(base_currency->valuestring) : NULL,
        base_currency_scale ? base_currency_scale->valuedouble : 0,
        counter_currency ? strdup(counter_currency->valuestring) : NULL,
        counter_currency_scale ? counter_currency_scale->valuedouble : 0,
        min_price_increment ? min_price_increment->valuedouble : 0,
        min_price_increment_scale ? min_price_increment_scale->valuedouble : 0,
        min_order_size ? min_order_size->valuedouble : 0,
        min_order_size_scale ? min_order_size_scale->valuedouble : 0,
        max_order_size ? max_order_size->valuedouble : 0,
        max_order_size_scale ? max_order_size_scale->valuedouble : 0,
        lot_size ? lot_size->valuedouble : 0,
        lot_size_scale ? lot_size_scale->valuedouble : 0,
        status ? statusVariable : -1,
        id ? id->valuedouble : 0,
        auction_price ? auction_price->valuedouble : 0,
        auction_size ? auction_size->valuedouble : 0,
        auction_time ? auction_time->valuedouble : 0,
        imbalance ? imbalance->valuedouble : 0
        );

    return symbol_status_local_var;
end:
    return NULL;

}
