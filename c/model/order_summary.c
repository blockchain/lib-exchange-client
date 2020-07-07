#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_summary.h"


char* ord_typeorder_summary_ToString(blockchain_com_exchange_rest_api_order_summary__e ord_type) {
    char* ord_typeArray[] =  { "NULL", "MARKET", "LIMIT", "STOP", "STOPLIMIT" };
	return ord_typeArray[ord_type];
}

blockchain_com_exchange_rest_api_order_summary__e ord_typeorder_summary_FromString(char* ord_type){
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
char* ord_statusorder_summary_ToString(blockchain_com_exchange_rest_api_order_summary__e ord_status) {
    char* ord_statusArray[] =  { "NULL", "OPEN", "REJECTED", "CANCELED", "FILLED", "EXPIRED" };
	return ord_statusArray[ord_status];
}

blockchain_com_exchange_rest_api_order_summary__e ord_statusorder_summary_FromString(char* ord_status){
    int stringToReturn = 0;
    char *ord_statusArray[] =  { "NULL", "OPEN", "REJECTED", "CANCELED", "FILLED", "EXPIRED" };
    size_t sizeofArray = sizeof(ord_statusArray) / sizeof(ord_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(ord_status, ord_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* sideorder_summary_ToString(blockchain_com_exchange_rest_api_order_summary__e side) {
    char* sideArray[] =  { "NULL", "BUY", "SELL" };
	return sideArray[side];
}

blockchain_com_exchange_rest_api_order_summary__e sideorder_summary_FromString(char* side){
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

order_summary_t *order_summary_create(
    long ex_ord_id,
    char *cl_ord_id,
    double price,
    char *text,
    char *symbol,
    double last_shares,
    double last_px,
    double leaves_qty,
    double cum_qty,
    double avg_px,
    long timestamp
    ) {
    order_summary_t *order_summary_local_var = malloc(sizeof(order_summary_t));
    if (!order_summary_local_var) {
        return NULL;
    }
    order_summary_local_var->ex_ord_id = ex_ord_id;
    order_summary_local_var->cl_ord_id = cl_ord_id;
    order_summary_local_var->ord_type = ord_type;
    order_summary_local_var->ord_status = ord_status;
    order_summary_local_var->side = side;
    order_summary_local_var->price = price;
    order_summary_local_var->text = text;
    order_summary_local_var->symbol = symbol;
    order_summary_local_var->last_shares = last_shares;
    order_summary_local_var->last_px = last_px;
    order_summary_local_var->leaves_qty = leaves_qty;
    order_summary_local_var->cum_qty = cum_qty;
    order_summary_local_var->avg_px = avg_px;
    order_summary_local_var->timestamp = timestamp;

    return order_summary_local_var;
}


void order_summary_free(order_summary_t *order_summary) {
    if(NULL == order_summary){
        return ;
    }
    listEntry_t *listEntry;
    free(order_summary->cl_ord_id);
    free(order_summary->text);
    free(order_summary->symbol);
    free(order_summary);
}

cJSON *order_summary_convertToJSON(order_summary_t *order_summary) {
    cJSON *item = cJSON_CreateObject();

    // order_summary->ex_ord_id
    if(order_summary->ex_ord_id) { 
    if(cJSON_AddNumberToObject(item, "exOrdId", order_summary->ex_ord_id) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_summary->cl_ord_id
    if (!order_summary->cl_ord_id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "clOrdId", order_summary->cl_ord_id) == NULL) {
    goto fail; //String
    }


    // order_summary->ord_type
    


    // order_summary->ord_status
    


    // order_summary->side
    


    // order_summary->price
    if(order_summary->price) { 
    if(cJSON_AddNumberToObject(item, "price", order_summary->price) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_summary->text
    if(order_summary->text) { 
    if(cJSON_AddStringToObject(item, "text", order_summary->text) == NULL) {
    goto fail; //String
    }
     } 


    // order_summary->symbol
    if (!order_summary->symbol) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "symbol", order_summary->symbol) == NULL) {
    goto fail; //String
    }


    // order_summary->last_shares
    if(order_summary->last_shares) { 
    if(cJSON_AddNumberToObject(item, "lastShares", order_summary->last_shares) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_summary->last_px
    if(order_summary->last_px) { 
    if(cJSON_AddNumberToObject(item, "lastPx", order_summary->last_px) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_summary->leaves_qty
    if(order_summary->leaves_qty) { 
    if(cJSON_AddNumberToObject(item, "leavesQty", order_summary->leaves_qty) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_summary->cum_qty
    if(order_summary->cum_qty) { 
    if(cJSON_AddNumberToObject(item, "cumQty", order_summary->cum_qty) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_summary->avg_px
    if(order_summary->avg_px) { 
    if(cJSON_AddNumberToObject(item, "avgPx", order_summary->avg_px) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_summary->timestamp
    if(order_summary->timestamp) { 
    if(cJSON_AddNumberToObject(item, "timestamp", order_summary->timestamp) == NULL) {
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

order_summary_t *order_summary_parseFromJSON(cJSON *order_summaryJSON){

    order_summary_t *order_summary_local_var = NULL;

    // order_summary->ex_ord_id
    cJSON *ex_ord_id = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "exOrdId");
    if (ex_ord_id) { 
    if(!cJSON_IsNumber(ex_ord_id))
    {
    goto end; //Numeric
    }
    }

    // order_summary->cl_ord_id
    cJSON *cl_ord_id = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "clOrdId");
    if (!cl_ord_id) {
        goto end;
    }

    
    if(!cJSON_IsString(cl_ord_id))
    {
    goto end; //String
    }

    // order_summary->ord_type
    cJSON *ord_type = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "ordType");
    if (!ord_type) {
        goto end;
    }


    // order_summary->ord_status
    cJSON *ord_status = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "ordStatus");
    if (!ord_status) {
        goto end;
    }


    // order_summary->side
    cJSON *side = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "side");
    if (!side) {
        goto end;
    }


    // order_summary->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // order_summary->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "text");
    if (text) { 
    if(!cJSON_IsString(text))
    {
    goto end; //String
    }
    }

    // order_summary->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "symbol");
    if (!symbol) {
        goto end;
    }

    
    if(!cJSON_IsString(symbol))
    {
    goto end; //String
    }

    // order_summary->last_shares
    cJSON *last_shares = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "lastShares");
    if (last_shares) { 
    if(!cJSON_IsNumber(last_shares))
    {
    goto end; //Numeric
    }
    }

    // order_summary->last_px
    cJSON *last_px = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "lastPx");
    if (last_px) { 
    if(!cJSON_IsNumber(last_px))
    {
    goto end; //Numeric
    }
    }

    // order_summary->leaves_qty
    cJSON *leaves_qty = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "leavesQty");
    if (leaves_qty) { 
    if(!cJSON_IsNumber(leaves_qty))
    {
    goto end; //Numeric
    }
    }

    // order_summary->cum_qty
    cJSON *cum_qty = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "cumQty");
    if (cum_qty) { 
    if(!cJSON_IsNumber(cum_qty))
    {
    goto end; //Numeric
    }
    }

    // order_summary->avg_px
    cJSON *avg_px = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "avgPx");
    if (avg_px) { 
    if(!cJSON_IsNumber(avg_px))
    {
    goto end; //Numeric
    }
    }

    // order_summary->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(order_summaryJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsNumber(timestamp))
    {
    goto end; //Numeric
    }
    }


    order_summary_local_var = order_summary_create (
        ex_ord_id ? ex_ord_id->valuedouble : 0,
        strdup(cl_ord_id->valuestring),
        price ? price->valuedouble : 0,
        text ? strdup(text->valuestring) : NULL,
        strdup(symbol->valuestring),
        last_shares ? last_shares->valuedouble : 0,
        last_px ? last_px->valuedouble : 0,
        leaves_qty ? leaves_qty->valuedouble : 0,
        cum_qty ? cum_qty->valuedouble : 0,
        avg_px ? avg_px->valuedouble : 0,
        timestamp ? timestamp->valuedouble : 0
        );

    return order_summary_local_var;
end:
    return NULL;

}
