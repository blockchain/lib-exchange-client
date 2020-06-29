#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "withdrawal_status.h"


char* withdrawal_status_withdrawal_status_ToString(blockchain_com_exchange_rest_api_withdrawal_status__e withdrawal_status) {
    char *withdrawal_statusArray[] =  { "NULL", "REJECTED", "PENDING", "REFUNDED", "FAILED", "COMPLETED" };
    return withdrawal_statusArray[withdrawal_status];
}

blockchain_com_exchange_rest_api_withdrawal_status__e withdrawal_status_withdrawal_status_FromString(char* withdrawal_status) {
    int stringToReturn = 0;
    char *withdrawal_statusArray[] =  { "NULL", "REJECTED", "PENDING", "REFUNDED", "FAILED", "COMPLETED" };
    size_t sizeofArray = sizeof(withdrawal_statusArray) / sizeof(withdrawal_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(withdrawal_status, withdrawal_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *withdrawal_status_withdrawal_status_convertToJSON(blockchain_com_exchange_rest_api_withdrawal_status__e withdrawal_status) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "withdrawal_status", withdrawal_status_withdrawal_status_ToString(withdrawal_status)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

withdrawal_status_withdrawal_status_e withdrawal_status_withdrawal_status_parseFromJSON(cJSON *withdrawal_statusJSON) {
    withdrawal_status_withdrawal_status_e *withdrawal_status = NULL;
    withdrawal_status_withdrawal_status_e withdrawal_statusVariable;
    cJSON *withdrawal_statusVar = cJSON_GetObjectItemCaseSensitive(withdrawal_statusJSON, "withdrawal_status");
    if(!cJSON_IsString(withdrawal_statusVar) || (withdrawal_statusVar->valuestring == NULL)){
        goto end;
    }
    withdrawal_statusVariable = withdrawal_status_withdrawal_status_FromString(withdrawal_statusVar->valuestring);
    return withdrawal_statusVariable;
end:
    return 0;
}
