#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_book.h"



order_book_t *order_book_create(
    char *symbol,
    list_t *bids,
    list_t *asks
    ) {
    order_book_t *order_book_local_var = malloc(sizeof(order_book_t));
    if (!order_book_local_var) {
        return NULL;
    }
    order_book_local_var->symbol = symbol;
    order_book_local_var->bids = bids;
    order_book_local_var->asks = asks;

    return order_book_local_var;
}


void order_book_free(order_book_t *order_book) {
    if(NULL == order_book){
        return ;
    }
    listEntry_t *listEntry;
    free(order_book->symbol);
    list_ForEach(listEntry, order_book->bids) {
        order_book_entry_free(listEntry->data);
    }
    list_free(order_book->bids);
    list_ForEach(listEntry, order_book->asks) {
        order_book_entry_free(listEntry->data);
    }
    list_free(order_book->asks);
    free(order_book);
}

cJSON *order_book_convertToJSON(order_book_t *order_book) {
    cJSON *item = cJSON_CreateObject();

    // order_book->symbol
    if(order_book->symbol) { 
    if(cJSON_AddStringToObject(item, "symbol", order_book->symbol) == NULL) {
    goto fail; //String
    }
     } 


    // order_book->bids
    if(order_book->bids) { 
    cJSON *bids = cJSON_AddArrayToObject(item, "bids");
    if(bids == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *bidsListEntry;
    if (order_book->bids) {
    list_ForEach(bidsListEntry, order_book->bids) {
    cJSON *itemLocal = order_book_entry_convertToJSON(bidsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(bids, itemLocal);
    }
    }
     } 


    // order_book->asks
    if(order_book->asks) { 
    cJSON *asks = cJSON_AddArrayToObject(item, "asks");
    if(asks == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *asksListEntry;
    if (order_book->asks) {
    list_ForEach(asksListEntry, order_book->asks) {
    cJSON *itemLocal = order_book_entry_convertToJSON(asksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(asks, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_book_t *order_book_parseFromJSON(cJSON *order_bookJSON){

    order_book_t *order_book_local_var = NULL;

    // order_book->symbol
    cJSON *symbol = cJSON_GetObjectItemCaseSensitive(order_bookJSON, "symbol");
    if (symbol) { 
    if(!cJSON_IsString(symbol))
    {
    goto end; //String
    }
    }

    // order_book->bids
    cJSON *bids = cJSON_GetObjectItemCaseSensitive(order_bookJSON, "bids");
    list_t *bidsList;
    if (bids) { 
    cJSON *bids_local_nonprimitive;
    if(!cJSON_IsArray(bids)){
        goto end; //nonprimitive container
    }

    bidsList = list_create();

    cJSON_ArrayForEach(bids_local_nonprimitive,bids )
    {
        if(!cJSON_IsObject(bids_local_nonprimitive)){
            goto end;
        }
        order_book_entry_t *bidsItem = order_book_entry_parseFromJSON(bids_local_nonprimitive);

        list_addElement(bidsList, bidsItem);
    }
    }

    // order_book->asks
    cJSON *asks = cJSON_GetObjectItemCaseSensitive(order_bookJSON, "asks");
    list_t *asksList;
    if (asks) { 
    cJSON *asks_local_nonprimitive;
    if(!cJSON_IsArray(asks)){
        goto end; //nonprimitive container
    }

    asksList = list_create();

    cJSON_ArrayForEach(asks_local_nonprimitive,asks )
    {
        if(!cJSON_IsObject(asks_local_nonprimitive)){
            goto end;
        }
        order_book_entry_t *asksItem = order_book_entry_parseFromJSON(asks_local_nonprimitive);

        list_addElement(asksList, asksItem);
    }
    }


    order_book_local_var = order_book_create (
        symbol ? strdup(symbol->valuestring) : NULL,
        bids ? bidsList : NULL,
        asks ? asksList : NULL
        );

    return order_book_local_var;
end:
    return NULL;

}
