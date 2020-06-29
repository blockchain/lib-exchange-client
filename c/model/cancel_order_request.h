/*
 * cancel_order_request.h
 *
 * 
 */

#ifndef _cancel_order_request_H_
#define _cancel_order_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cancel_order_request_t cancel_order_request_t;


// Enum ACTION for cancel_order_request

typedef enum  { blockchain_com_exchange_rest_api_cancel_order_request_ACTION_NULL = 0, blockchain_com_exchange_rest_api_cancel_order_request_ACTION_CancelOrderRequest } blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e;

char* cancel_order_request_action_ToString(blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e action);

blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e cancel_order_request_action_FromString(char* action);



typedef struct cancel_order_request_t {
    blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e action; //enum
    long order_id; //numeric

} cancel_order_request_t;

cancel_order_request_t *cancel_order_request_create(
    blockchain_com_exchange_rest_api_cancel_order_request_ACTION_e action,
    long order_id
);

void cancel_order_request_free(cancel_order_request_t *cancel_order_request);

cancel_order_request_t *cancel_order_request_parseFromJSON(cJSON *cancel_order_requestJSON);

cJSON *cancel_order_request_convertToJSON(cancel_order_request_t *cancel_order_request);

#endif /* _cancel_order_request_H_ */

