#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "price_event_list.h"



price_event_list_t *price_event_list_create(
    list_t *orders
    ) {
    price_event_list_t *price_event_list_local_var = malloc(sizeof(price_event_list_t));
    if (!price_event_list_local_var) {
        return NULL;
    }
    price_event_list_local_var->orders = orders;

    return price_event_list_local_var;
}


void price_event_list_free(price_event_list_t *price_event_list) {
    if(NULL == price_event_list){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, price_event_list->orders) {
        price_event_free(listEntry->data);
    }
    list_free(price_event_list->orders);
    free(price_event_list);
}

cJSON *price_event_list_convertToJSON(price_event_list_t *price_event_list) {
    cJSON *item = cJSON_CreateObject();

    // price_event_list->orders
    if(price_event_list->orders) { 
    cJSON *orders = cJSON_AddArrayToObject(item, "orders");
    if(orders == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ordersListEntry;
    if (price_event_list->orders) {
    list_ForEach(ordersListEntry, price_event_list->orders) {
    cJSON *itemLocal = price_event_convertToJSON(ordersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(orders, itemLocal);
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

price_event_list_t *price_event_list_parseFromJSON(cJSON *price_event_listJSON){

    price_event_list_t *price_event_list_local_var = NULL;

    // price_event_list->orders
    cJSON *orders = cJSON_GetObjectItemCaseSensitive(price_event_listJSON, "orders");
    list_t *ordersList;
    if (orders) { 
    cJSON *orders_local_nonprimitive;
    if(!cJSON_IsArray(orders)){
        goto end; //nonprimitive container
    }

    ordersList = list_create();

    cJSON_ArrayForEach(orders_local_nonprimitive,orders )
    {
        if(!cJSON_IsObject(orders_local_nonprimitive)){
            goto end;
        }
        price_event_t *ordersItem = price_event_parseFromJSON(orders_local_nonprimitive);

        list_addElement(ordersList, ordersItem);
    }
    }


    price_event_list_local_var = price_event_list_create (
        orders ? ordersList : NULL
        );

    return price_event_list_local_var;
end:
    return NULL;

}
