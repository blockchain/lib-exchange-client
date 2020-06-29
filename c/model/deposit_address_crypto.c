#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposit_address_crypto.h"



deposit_address_crypto_t *deposit_address_crypto_create(
    char *type,
    char *address
    ) {
    deposit_address_crypto_t *deposit_address_crypto_local_var = malloc(sizeof(deposit_address_crypto_t));
    if (!deposit_address_crypto_local_var) {
        return NULL;
    }
    deposit_address_crypto_local_var->type = type;
    deposit_address_crypto_local_var->address = address;

    return deposit_address_crypto_local_var;
}


void deposit_address_crypto_free(deposit_address_crypto_t *deposit_address_crypto) {
    if(NULL == deposit_address_crypto){
        return ;
    }
    listEntry_t *listEntry;
    free(deposit_address_crypto->type);
    free(deposit_address_crypto->address);
    free(deposit_address_crypto);
}

cJSON *deposit_address_crypto_convertToJSON(deposit_address_crypto_t *deposit_address_crypto) {
    cJSON *item = cJSON_CreateObject();

    // deposit_address_crypto->type
    if (!deposit_address_crypto->type) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "type", deposit_address_crypto->type) == NULL) {
    goto fail; //String
    }


    // deposit_address_crypto->address
    if (!deposit_address_crypto->address) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "address", deposit_address_crypto->address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposit_address_crypto_t *deposit_address_crypto_parseFromJSON(cJSON *deposit_address_cryptoJSON){

    deposit_address_crypto_t *deposit_address_crypto_local_var = NULL;

    // deposit_address_crypto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(deposit_address_cryptoJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }

    // deposit_address_crypto->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(deposit_address_cryptoJSON, "address");
    if (!address) {
        goto end;
    }

    
    if(!cJSON_IsString(address))
    {
    goto end; //String
    }


    deposit_address_crypto_local_var = deposit_address_crypto_create (
        strdup(type->valuestring),
        strdup(address->valuestring)
        );

    return deposit_address_crypto_local_var;
end:
    return NULL;

}
