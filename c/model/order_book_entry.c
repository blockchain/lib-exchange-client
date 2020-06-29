#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_book_entry.h"



order_book_entry_t *order_book_entry_create(
    double px,
    double qty,
    int num
    ) {
    order_book_entry_t *order_book_entry_local_var = malloc(sizeof(order_book_entry_t));
    if (!order_book_entry_local_var) {
        return NULL;
    }
    order_book_entry_local_var->px = px;
    order_book_entry_local_var->qty = qty;
    order_book_entry_local_var->num = num;

    return order_book_entry_local_var;
}


void order_book_entry_free(order_book_entry_t *order_book_entry) {
    if(NULL == order_book_entry){
        return ;
    }
    listEntry_t *listEntry;
    free(order_book_entry);
}

cJSON *order_book_entry_convertToJSON(order_book_entry_t *order_book_entry) {
    cJSON *item = cJSON_CreateObject();

    // order_book_entry->px
    if(order_book_entry->px) { 
    if(cJSON_AddNumberToObject(item, "px", order_book_entry->px) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_book_entry->qty
    if(order_book_entry->qty) { 
    if(cJSON_AddNumberToObject(item, "qty", order_book_entry->qty) == NULL) {
    goto fail; //Numeric
    }
     } 


    // order_book_entry->num
    if(order_book_entry->num) { 
    if(cJSON_AddNumberToObject(item, "num", order_book_entry->num) == NULL) {
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

order_book_entry_t *order_book_entry_parseFromJSON(cJSON *order_book_entryJSON){

    order_book_entry_t *order_book_entry_local_var = NULL;

    // order_book_entry->px
    cJSON *px = cJSON_GetObjectItemCaseSensitive(order_book_entryJSON, "px");
    if (px) { 
    if(!cJSON_IsNumber(px))
    {
    goto end; //Numeric
    }
    }

    // order_book_entry->qty
    cJSON *qty = cJSON_GetObjectItemCaseSensitive(order_book_entryJSON, "qty");
    if (qty) { 
    if(!cJSON_IsNumber(qty))
    {
    goto end; //Numeric
    }
    }

    // order_book_entry->num
    cJSON *num = cJSON_GetObjectItemCaseSensitive(order_book_entryJSON, "num");
    if (num) { 
    if(!cJSON_IsNumber(num))
    {
    goto end; //Numeric
    }
    }


    order_book_entry_local_var = order_book_entry_create (
        px ? px->valuedouble : 0,
        qty ? qty->valuedouble : 0,
        num ? num->valuedouble : 0
        );

    return order_book_entry_local_var;
end:
    return NULL;

}
