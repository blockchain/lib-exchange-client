/*
 * withdrawal_info.h
 *
 * 
 */

#ifndef _withdrawal_info_H_
#define _withdrawal_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct withdrawal_info_t withdrawal_info_t;

#include "withdrawal_status.h"

// Enum  for withdrawal_info

typedef enum  { blockchain_com_exchange_rest_api_withdrawal_info__NULL = 0, blockchain_com_exchange_rest_api_withdrawal_info__REJECTED, blockchain_com_exchange_rest_api_withdrawal_info__PENDING, blockchain_com_exchange_rest_api_withdrawal_info__REFUNDED, blockchain_com_exchange_rest_api_withdrawal_info__FAILED, blockchain_com_exchange_rest_api_withdrawal_info__COMPLETED } blockchain_com_exchange_rest_api_withdrawal_info__e;

char* withdrawal_info_state_ToString(blockchain_com_exchange_rest_api_withdrawal_info__e state);

blockchain_com_exchange_rest_api_withdrawal_info__e withdrawal_info_state_FromString(char* state);



typedef struct withdrawal_info_t {
    char *withdrawal_id; // string
    double amount; //numeric
    double fee; //numeric
    char *currency; // string
    char *beneficiary; // string
    long timestamp; //numeric

} withdrawal_info_t;

withdrawal_info_t *withdrawal_info_create(
    char *withdrawal_id,
    double amount,
    double fee,
    char *currency,
    char *beneficiary,
    long timestamp
);

void withdrawal_info_free(withdrawal_info_t *withdrawal_info);

withdrawal_info_t *withdrawal_info_parseFromJSON(cJSON *withdrawal_infoJSON);

cJSON *withdrawal_info_convertToJSON(withdrawal_info_t *withdrawal_info);

#endif /* _withdrawal_info_H_ */

