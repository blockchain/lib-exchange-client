#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "time_in_force.h"


char* time_in_force_time_in_force_ToString(blockchain_com_exchange_rest_api_time_in_force__e time_in_force) {
    char *time_in_forceArray[] =  { "NULL", "GTC", "IOC", "FOK", "GTD" };
    return time_in_forceArray[time_in_force];
}

blockchain_com_exchange_rest_api_time_in_force__e time_in_force_time_in_force_FromString(char* time_in_force) {
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

cJSON *time_in_force_time_in_force_convertToJSON(blockchain_com_exchange_rest_api_time_in_force__e time_in_force) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "time_in_force", time_in_force_time_in_force_ToString(time_in_force)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

time_in_force_time_in_force_e time_in_force_time_in_force_parseFromJSON(cJSON *time_in_forceJSON) {
    time_in_force_time_in_force_e *time_in_force = NULL;
    time_in_force_time_in_force_e time_in_forceVariable;
    cJSON *time_in_forceVar = cJSON_GetObjectItemCaseSensitive(time_in_forceJSON, "time_in_force");
    if(!cJSON_IsString(time_in_forceVar) || (time_in_forceVar->valuestring == NULL)){
        goto end;
    }
    time_in_forceVariable = time_in_force_time_in_force_FromString(time_in_forceVar->valuestring);
    return time_in_forceVariable;
end:
    return 0;
}
