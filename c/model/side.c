#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "side.h"


char* side_side_ToString(blockchain_com_exchange_rest_api_side__e side) {
    char *sideArray[] =  { "NULL", "BUY", "SELL" };
    return sideArray[side];
}

blockchain_com_exchange_rest_api_side__e side_side_FromString(char* side) {
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

cJSON *side_side_convertToJSON(blockchain_com_exchange_rest_api_side__e side) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "side", side_side_ToString(side)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

side_side_e side_side_parseFromJSON(cJSON *sideJSON) {
    side_side_e *side = NULL;
    side_side_e sideVariable;
    cJSON *sideVar = cJSON_GetObjectItemCaseSensitive(sideJSON, "side");
    if(!cJSON_IsString(sideVar) || (sideVar->valuestring == NULL)){
        goto end;
    }
    sideVariable = side_side_FromString(sideVar->valuestring);
    return sideVariable;
end:
    return 0;
}
