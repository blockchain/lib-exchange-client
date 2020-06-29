#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cancel_order_request.h"


char* actioncancel_order_request_ToString(blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e action) {
    char* actionArray[] =  { "NULL", "CancelOrderRequest" };
	return actionArray[action];
}

blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e actioncancel_order_request_FromString(char* action){
    int stringToReturn = 0;
    char *actionArray[] =  { "NULL", "CancelOrderRequest" };
    size_t sizeofArray = sizeof(actionArray) / sizeof(actionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(action, actionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cancel_order_request_t *cancel_order_request_create(
    blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e action,
    long order_id
    ) {
    cancel_order_request_t *cancel_order_request_local_var = malloc(sizeof(cancel_order_request_t));
    if (!cancel_order_request_local_var) {
        return NULL;
    }
    cancel_order_request_local_var->action = action;
    cancel_order_request_local_var->order_id = order_id;

    return cancel_order_request_local_var;
}


void cancel_order_request_free(cancel_order_request_t *cancel_order_request) {
    if(NULL == cancel_order_request){
        return ;
    }
    listEntry_t *listEntry;
    free(cancel_order_request);
}

cJSON *cancel_order_request_convertToJSON(cancel_order_request_t *cancel_order_request) {
    cJSON *item = cJSON_CreateObject();

    // cancel_order_request->action
    
    if(cJSON_AddStringToObject(item, "action", actioncancel_order_request_ToString(cancel_order_request->action)) == NULL)
    {
    goto fail; //Enum
    }


    // cancel_order_request->order_id
    if (!cancel_order_request->order_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "orderID", cancel_order_request->order_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cancel_order_request_t *cancel_order_request_parseFromJSON(cJSON *cancel_order_requestJSON){

    cancel_order_request_t *cancel_order_request_local_var = NULL;

    // cancel_order_request->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(cancel_order_requestJSON, "action");
    if (!action) {
        goto end;
    }

    blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e actionVariable;
    
    if(!cJSON_IsString(action))
    {
    goto end; //Enum
    }
    actionVariable = actioncancel_order_request_FromString(action->valuestring);

    // cancel_order_request->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(cancel_order_requestJSON, "orderID");
    if (!order_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(order_id))
    {
    goto end; //Numeric
    }


    cancel_order_request_local_var = cancel_order_request_create (
        actionVariable,
        order_id->valuedouble
        );

    return cancel_order_request_local_var;
end:
    return NULL;

}
