#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_status.h"


char* order_status_order_status_ToString(blockchain_com_exchange_rest_api_order_status__e order_status) {
    char *order_statusArray[] =  { "NULL", "OPEN", "REJECTED", "CANCELED", "FILLED", "EXPIRED" };
    return order_statusArray[order_status];
}

blockchain_com_exchange_rest_api_order_status__e order_status_order_status_FromString(char* order_status) {
    int stringToReturn = 0;
    char *order_statusArray[] =  { "NULL", "OPEN", "REJECTED", "CANCELED", "FILLED", "EXPIRED" };
    size_t sizeofArray = sizeof(order_statusArray) / sizeof(order_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(order_status, order_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *order_status_order_status_convertToJSON(blockchain_com_exchange_rest_api_order_status__e order_status) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "order_status", order_status_order_status_ToString(order_status)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

order_status_order_status_e order_status_order_status_parseFromJSON(cJSON *order_statusJSON) {
    order_status_order_status_e *order_status = NULL;
    order_status_order_status_e order_statusVariable;
    cJSON *order_statusVar = cJSON_GetObjectItemCaseSensitive(order_statusJSON, "order_status");
    if(!cJSON_IsString(order_statusVar) || (order_statusVar->valuestring == NULL)){
        goto end;
    }
    order_statusVariable = order_status_order_status_FromString(order_statusVar->valuestring);
    return order_statusVariable;
end:
    return 0;
}
