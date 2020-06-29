#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "whitelist_entry.h"



whitelist_entry_t *whitelist_entry_create(
    char *whitelist_id,
    char *name,
    char *currency
    ) {
    whitelist_entry_t *whitelist_entry_local_var = malloc(sizeof(whitelist_entry_t));
    if (!whitelist_entry_local_var) {
        return NULL;
    }
    whitelist_entry_local_var->whitelist_id = whitelist_id;
    whitelist_entry_local_var->name = name;
    whitelist_entry_local_var->currency = currency;

    return whitelist_entry_local_var;
}


void whitelist_entry_free(whitelist_entry_t *whitelist_entry) {
    if(NULL == whitelist_entry){
        return ;
    }
    listEntry_t *listEntry;
    free(whitelist_entry->whitelist_id);
    free(whitelist_entry->name);
    free(whitelist_entry->currency);
    free(whitelist_entry);
}

cJSON *whitelist_entry_convertToJSON(whitelist_entry_t *whitelist_entry) {
    cJSON *item = cJSON_CreateObject();

    // whitelist_entry->whitelist_id
    if(whitelist_entry->whitelist_id) { 
    if(cJSON_AddStringToObject(item, "whitelistId", whitelist_entry->whitelist_id) == NULL) {
    goto fail; //String
    }
     } 


    // whitelist_entry->name
    if(whitelist_entry->name) { 
    if(cJSON_AddStringToObject(item, "name", whitelist_entry->name) == NULL) {
    goto fail; //String
    }
     } 


    // whitelist_entry->currency
    if(whitelist_entry->currency) { 
    if(cJSON_AddStringToObject(item, "currency", whitelist_entry->currency) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

whitelist_entry_t *whitelist_entry_parseFromJSON(cJSON *whitelist_entryJSON){

    whitelist_entry_t *whitelist_entry_local_var = NULL;

    // whitelist_entry->whitelist_id
    cJSON *whitelist_id = cJSON_GetObjectItemCaseSensitive(whitelist_entryJSON, "whitelistId");
    if (whitelist_id) { 
    if(!cJSON_IsString(whitelist_id))
    {
    goto end; //String
    }
    }

    // whitelist_entry->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(whitelist_entryJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // whitelist_entry->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(whitelist_entryJSON, "currency");
    if (currency) { 
    if(!cJSON_IsString(currency))
    {
    goto end; //String
    }
    }


    whitelist_entry_local_var = whitelist_entry_create (
        whitelist_id ? strdup(whitelist_id->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        currency ? strdup(currency->valuestring) : NULL
        );

    return whitelist_entry_local_var;
end:
    return NULL;

}
