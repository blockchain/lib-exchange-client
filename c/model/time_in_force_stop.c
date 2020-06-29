#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "time_in_force_stop.h"


char* time_in_force_stop_time_in_force_stop_ToString(blockchain_com_exchange_rest_api_time_in_force_stop__e time_in_force_stop) {
    char *time_in_force_stopArray[] =  { "NULL", "GTC", "GTD" };
    return time_in_force_stopArray[time_in_force_stop];
}

blockchain_com_exchange_rest_api_time_in_force_stop__e time_in_force_stop_time_in_force_stop_FromString(char* time_in_force_stop) {
    int stringToReturn = 0;
    char *time_in_force_stopArray[] =  { "NULL", "GTC", "GTD" };
    size_t sizeofArray = sizeof(time_in_force_stopArray) / sizeof(time_in_force_stopArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(time_in_force_stop, time_in_force_stopArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *time_in_force_stop_time_in_force_stop_convertToJSON(blockchain_com_exchange_rest_api_time_in_force_stop__e time_in_force_stop) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "time_in_force_stop", time_in_force_stop_time_in_force_stop_ToString(time_in_force_stop)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

time_in_force_stop_time_in_force_stop_e time_in_force_stop_time_in_force_stop_parseFromJSON(cJSON *time_in_force_stopJSON) {
    time_in_force_stop_time_in_force_stop_e *time_in_force_stop = NULL;
    time_in_force_stop_time_in_force_stop_e time_in_force_stopVariable;
    cJSON *time_in_force_stopVar = cJSON_GetObjectItemCaseSensitive(time_in_force_stopJSON, "time_in_force_stop");
    if(!cJSON_IsString(time_in_force_stopVar) || (time_in_force_stopVar->valuestring == NULL)){
        goto end;
    }
    time_in_force_stopVariable = time_in_force_stop_time_in_force_stop_FromString(time_in_force_stopVar->valuestring);
    return time_in_force_stopVariable;
end:
    return 0;
}
