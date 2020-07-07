#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ord_type.h"


char* ord_type_ord_type_ToString(blockchain_com_exchange_rest_api_ord_type__e ord_type) {
    char *ord_typeArray[] =  { "NULL", "MARKET", "LIMIT", "STOP", "STOPLIMIT" };
    return ord_typeArray[ord_type];
}

blockchain_com_exchange_rest_api_ord_type__e ord_type_ord_type_FromString(char* ord_type) {
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

cJSON *ord_type_ord_type_convertToJSON(blockchain_com_exchange_rest_api_ord_type__e ord_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "ord_type", ord_type_ord_type_ToString(ord_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ord_type_ord_type_e ord_type_ord_type_parseFromJSON(cJSON *ord_typeJSON) {
    ord_type_ord_type_e *ord_type = NULL;
    ord_type_ord_type_e ord_typeVariable;
    cJSON *ord_typeVar = cJSON_GetObjectItemCaseSensitive(ord_typeJSON, "ord_type");
    if(!cJSON_IsString(ord_typeVar) || (ord_typeVar->valuestring == NULL)){
        goto end;
    }
    ord_typeVariable = ord_type_ord_type_FromString(ord_typeVar->valuestring);
    return ord_typeVariable;
end:
    return 0;
}
