/*
 * withdrawal_status.h
 *
 * 
 */

#ifndef _withdrawal_status_H_
#define _withdrawal_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct withdrawal_status_t withdrawal_status_t;


// Enum  for withdrawal_status

typedef enum { blockchain_com_exchange_rest_api_withdrawal_status__NULL = 0, blockchain_com_exchange_rest_api_withdrawal_status__REJECTED, blockchain_com_exchange_rest_api_withdrawal_status__PENDING, blockchain_com_exchange_rest_api_withdrawal_status__REFUNDED, blockchain_com_exchange_rest_api_withdrawal_status__FAILED, blockchain_com_exchange_rest_api_withdrawal_status__COMPLETED } blockchain_com_exchange_rest_api_withdrawal_status__e;

char* withdrawal_status_withdrawal_status_ToString(blockchain_com_exchange_rest_api_withdrawal_status__e withdrawal_status);

blockchain_com_exchange_rest_api_withdrawal_status__e withdrawal_status_withdrawal_status_FromString(char* withdrawal_status);

//cJSON *withdrawal_status_withdrawal_status_convertToJSON(blockchain_com_exchange_rest_api_withdrawal_status__e withdrawal_status);

//blockchain_com_exchange_rest_api_withdrawal_status__e withdrawal_status_withdrawal_status_parseFromJSON(cJSON *withdrawal_statusJSON);

#endif /* _withdrawal_status_H_ */

