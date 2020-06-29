#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "price_event.h"



price_event_t *price_event_create(
    char *symbol,
    double price_24h,
    double volume_24h,
    double last_trade_price
    ) {
    price_event_t *price_event_local_var = malloc(sizeof(price_event_t));
    if (!price_event_local_var) {
        return NULL;
    }
    price_event_local_var->symbol = symbol;
    price_event_local_var->price_24h = price_24h;
    price_event_local_var->volume_24h = volume_24h;
    price_event_local_var->last_trade_price = last_trade_price;

    return price_event_local_var;
}


void price_event_free(price_event_t *price_event) {
    if(NULL == price_event){
        return ;
    }
    listEntry_t *listEntry;
    free(price_event->symbol);
    free(price_event);
}

cJSON *price_event_convertToJSON(price_event_t *price_event) {
    cJSON *item = cJSON_CreateObject();

    // price_event->symbol
    if(price_event->symbol) { 
    if(cJSON_AddStringToObject(item, "symbol", price_event->symbol) == NULL) {
    goto fail; //String
    }
     } 


    // price_event->price_24h
    if(price_event->price_24h) { 
    if(cJSON_AddNumberToObject(item, "price_24h", price_event->price_24h) == NULL) {
    goto fail; //Numeric
    }
     } 


    // price_event->volume_24h
    if(price_event->volume_24h) { 
    if(cJSON_AddNumberToObject(item, "volume_24h", price_event->volume_24h) == NULL) {
    goto fail; //Numeric
    }
     } 


    // price_event->last_trade_price
    if(price_event->last_trade_price) { 
    if(cJSON_AddNumberToObject(item, "last_trade_price", price_event->last_trade_price) == NULL) {
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

price_event_t *price_event_parseFromJSON(cJSON *price_eventJSON){

    price_event_t *price_event_local_var = NULL;

    // price_event->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(price_eventJSON, "symbol");
    if (symbol) { 
    if(!cJSON_IsString(symbol))
    {
    goto end; //String
    }
    }

    // price_event->price_24h
    cJSON *price_24h = cJSON_GetObjectItemCaseSensitive(price_eventJSON, "price_24h");
    if (price_24h) { 
    if(!cJSON_IsNumber(price_24h))
    {
    goto end; //Numeric
    }
    }

    // price_event->volume_24h
    cJSON *volume_24h = cJSON_GetObjectItemCaseSensitive(price_eventJSON, "volume_24h");
    if (volume_24h) { 
    if(!cJSON_IsNumber(volume_24h))
    {
    goto end; //Numeric
    }
    }

    // price_event->last_trade_price
    cJSON *last_trade_price = cJSON_GetObjectItemCaseSensitive(price_eventJSON, "last_trade_price");
    if (last_trade_price) { 
    if(!cJSON_IsNumber(last_trade_price))
    {
    goto end; //Numeric
    }
    }


    price_event_local_var = price_event_create (
        symbol ? strdup(symbol->valuestring) : NULL,
        price_24h ? price_24h->valuedouble : 0,
        volume_24h ? volume_24h->valuedouble : 0,
        last_trade_price ? last_trade_price->valuedouble : 0
        );

    return price_event_local_var;
end:
    return NULL;

}
