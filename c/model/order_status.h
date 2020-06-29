/*
 * order_status.h
 *
 * 
 */

#ifndef _order_status_H_
#define _order_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_status_t order_status_t;


// Enum  for order_status

typedef enum { blockchain_com_exchange_rest_api_order_status__NULL = 0, blockchain_com_exchange_rest_api_order_status__OPEN, blockchain_com_exchange_rest_api_order_status__REJECTED, blockchain_com_exchange_rest_api_order_status__CANCELED, blockchain_com_exchange_rest_api_order_status__FILLED, blockchain_com_exchange_rest_api_order_status__EXPIRED } blockchain_com_exchange_rest_api_order_status__e;

char* order_status_order_status_ToString(blockchain_com_exchange_rest_api_order_status__e order_status);

blockchain_com_exchange_rest_api_order_status__e order_status_order_status_FromString(char* order_status);

//cJSON *order_status_order_status_convertToJSON(blockchain_com_exchange_rest_api_order_status__e order_status);

//blockchain_com_exchange_rest_api_order_status__e order_status_order_status_parseFromJSON(cJSON *order_statusJSON);

#endif /* _order_status_H_ */

