#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "base_order.h"


char* ord_typebase_order_ToString(blockchain_com_exchange_rest_api_base_order_ORDTYPE_e ord_type) {
    char* ord_typeArray[] =  { "NULL", "MARKET", "LIMIT", "STOP", "STOPLIMIT" };
	return ord_typeArray[ord_type];
}

blockchain_com_exchange_rest_api_base_order_ORDTYPE_e ord_typebase_order_FromString(char* ord_type){
    int stringToReturn = 0;
    char *ord_typeArray[] =  { "NULL", "MARKET", "LIMIT", "STOP", "STOPLIMIT" };
    size_t sizeofArray = sizeof(ord_typeArray) / sizeof(ord_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ord_type, ord_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* sidebase_order_ToString(blockchain_com_exchange_rest_api_base_order__e side) {
    char* sideArray[] =  { "NULL", "BUY", "SELL" };
	return sideArray[side];
}

blockchain_com_exchange_rest_api_base_order__e sidebase_order_FromString(char* side){
    int stringToReturn = 0;
    char *sideArray[] =  { "NULL", "BUY", "SELL" };
    size_t sizeofArray = sizeof(sideArray) / sizeof(sideArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(side, sideArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* time_in_forcebase_order_ToString(blockchain_com_exchange_rest_api_base_order__e time_in_force) {
    char* time_in_forceArray[] =  { "NULL", "GTC", "IOC", "FOK", "GTD" };
	return time_in_forceArray[time_in_force];
}

blockchain_com_exchange_rest_api_base_order__e time_in_forcebase_order_FromString(char* time_in_force){
    int stringToReturn = 0;
    char *time_in_forceArray[] =  { "NULL", "GTC", "IOC", "FOK", "GTD" };
    size_t sizeofArray = sizeof(time_in_forceArray) / sizeof(time_in_forceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(time_in_force, time_in_forceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

base_order_t *base_order_create(
    blockchain_com_exchange_rest_api_base_order_ORDTYPE_e ord_type,
    char *cl_ord_id,
    char *symbol,
    double order_qty,
    double price,
    int expire_date,
    double min_qty,
    double stop_px
    ) {
    base_order_t *base_order_local_var = malloc(sizeof(base_order_t));
    if (!base_order_local_var) {
        return NULL;
    }
    base_order_local_var->ord_type = ord_type;
    base_order_local_var->cl_ord_id = cl_ord_id;
    base_order_local_var->symbol = symbol;
    base_order_local_var->side = side;
    base_order_local_var->order_qty = order_qty;
    base_order_local_var->time_in_force = time_in_force;
    base_order_local_var->price = price;
    base_order_local_var->expire_date = expire_date;
    base_order_local_var->min_qty = min_qty;
    base_order_local_var->stop_px = stop_px;

    return base_order_local_var;
}


void base_order_free(base_order_t *base_order) {
    if(NULL == base_order){
        return ;
    }
    listEntry_t *listEntry;
    free(base_order->cl_ord_id);
    free(base_order->symbol);
    free(base_order);
}

cJSON *base_order_convertToJSON(base_order_t *base_order) {
    cJSON *item = cJSON_CreateObject();

    // base_order->ord_type
    
    if(cJSON_AddStringToObject(item, "ordType", ord_typebase_order_ToString(base_order->ord_type)) == NULL)
    {
    goto fail; //Enum
    }
    


    // base_order->cl_ord_id
    if (!base_order->cl_ord_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "clOrdId", base_order->cl_ord_id) == NULL) {
    goto fail; //String
    }


    // base_order->symbol
    if (!base_order->symbol) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "symbol", base_order->symbol) == NULL) {
    goto fail; //String
    }


    // base_order->side
    


    // base_order->order_qty
    if (!base_order->order_qty) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "orderQty", base_order->order_qty) == NULL) {
    goto fail; //Numeric
    }


    // base_order->time_in_force
    
    


    // base_order->price
    if(base_order->price) { 
    if(cJSON_AddNumberToObject(item, "price", base_order->price) == NULL) {
    goto fail; //Numeric
    }
     } 


    // base_order->expire_date
    if(base_order->expire_date) { 
    if(cJSON_AddNumberToObject(item, "expireDate", base_order->expire_date) == NULL) {
    goto fail; //Numeric
    }
     } 


    // base_order->min_qty
    if(base_order->min_qty) { 
    if(cJSON_AddNumberToObject(item, "minQty", base_order->min_qty) == NULL) {
    goto fail; //Numeric
    }
     } 


    // base_order->stop_px
    if(base_order->stop_px) { 
    if(cJSON_AddNumberToObject(item, "stopPx", base_order->stop_px) == NULL) {
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

base_order_t *base_order_parseFromJSON(cJSON *base_orderJSON){

    base_order_t *base_order_local_var = NULL;

    // base_order->ord_type
    cJSON *ord_type = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "ordType");
    blockchain_com_exchange_rest_api_base_order_ORDTYPE_e ord_typeVariable;
    if (ord_type) { 
    if(!cJSON_IsString(ord_type))
    {
    goto end; //Enum
    }
    ord_typeVariable = ord_typebase_order_FromString(ord_type->valuestring);
    }

    // base_order->cl_ord_id
    cJSON *cl_ord_id = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "clOrdId");
    if (!cl_ord_id) {
        goto end;
    }

    
    if(!cJSON_IsString(cl_ord_id))
    {
    goto end; //String
    }

    // base_order->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "symbol");
    if (!symbol) {
        goto end;
    }

    
    if(!cJSON_IsString(symbol))
    {
    goto end; //String
    }

    // base_order->side
    cJSON *side = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "side");
    if (!side) {
        goto end;
    }


    // base_order->order_qty
    cJSON *order_qty = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "orderQty");
    if (!order_qty) {
        goto end;
    }

    
    if(!cJSON_IsNumber(order_qty))
    {
    goto end; //Numeric
    }

    // base_order->time_in_force
    cJSON *time_in_force = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "timeInForce");
    }

    // base_order->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // base_order->expire_date
    cJSON *expire_date = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "expireDate");
    if (expire_date) { 
    if(!cJSON_IsNumber(expire_date))
    {
    goto end; //Numeric
    }
    }

    // base_order->min_qty
    cJSON *min_qty = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "minQty");
    if (min_qty) { 
    if(!cJSON_IsNumber(min_qty))
    {
    goto end; //Numeric
    }
    }

    // base_order->stop_px
    cJSON *stop_px = cJSON_GetObjectItemCaseSensitive(base_orderJSON, "stopPx");
    if (stop_px) { 
    if(!cJSON_IsNumber(stop_px))
    {
    goto end; //Numeric
    }
    }


    base_order_local_var = base_order_create (
        ord_type ? ord_typeVariable : -1,
        strdup(cl_ord_id->valuestring),
        strdup(symbol->valuestring),
        order_qty->valuedouble,
        price ? price->valuedouble : 0,
        expire_date ? expire_date->valuedouble : 0,
        min_qty ? min_qty->valuedouble : 0,
        stop_px ? stop_px->valuedouble : 0
        );

    return base_order_local_var;
end:
    return NULL;

}
