#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "balance_map.h"



balance_map_t *balance_map_create(
    list_t *primary
    ) {
    balance_map_t *balance_map_local_var = malloc(sizeof(balance_map_t));
    if (!balance_map_local_var) {
        return NULL;
    }
    balance_map_local_var->primary = primary;

    return balance_map_local_var;
}


void balance_map_free(balance_map_t *balance_map) {
    if(NULL == balance_map){
        return ;
    }
    listEntry_t *listEntry;
    list_ForEach(listEntry, balance_map->primary) {
        balance_free(listEntry->data);
    }
    list_free(balance_map->primary);
    free(balance_map);
}

cJSON *balance_map_convertToJSON(balance_map_t *balance_map) {
    cJSON *item = cJSON_CreateObject();

    // balance_map->primary
    if (!balance_map->primary) {
        goto fail;
    }
    
    cJSON *primary = cJSON_AddArrayToObject(item, "primary");
    if(primary == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *primaryListEntry;
    if (balance_map->primary) {
    list_ForEach(primaryListEntry, balance_map->primary) {
    cJSON *itemLocal = balance_convertToJSON(primaryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(primary, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

balance_map_t *balance_map_parseFromJSON(cJSON *balance_mapJSON){

    balance_map_t *balance_map_local_var = NULL;

    // balance_map->primary
    cJSON *primary = cJSON_GetObjectItemCaseSensitive(balance_mapJSON, "primary");
    if (!primary) {
        goto end;
    }

    list_t *primaryList;
    
    cJSON *primary_local_nonprimitive;
    if(!cJSON_IsArray(primary)){
        goto end; //nonprimitive container
    }

    primaryList = list_create();

    cJSON_ArrayForEach(primary_local_nonprimitive,primary )
    {
        if(!cJSON_IsObject(primary_local_nonprimitive)){
            goto end;
        }
        balance_t *primaryItem = balance_parseFromJSON(primary_local_nonprimitive);

        list_addElement(primaryList, primaryItem);
    }


    balance_map_local_var = balance_map_create (
        primaryList
        );

    return balance_map_local_var;
end:
    return NULL;

}
