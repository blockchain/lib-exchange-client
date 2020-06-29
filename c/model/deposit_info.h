/*
 * deposit_info.h
 *
 * 
 */

#ifndef _deposit_info_H_
#define _deposit_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_info_t deposit_info_t;


// Enum STATE for deposit_info

typedef enum  { blockchain_com_exchange_rest_api_deposit_info_STATE_NULL = 0, blockchain_com_exchange_rest_api_deposit_info_STATE_REJECTED, blockchain_com_exchange_rest_api_deposit_info_STATE_UNCONFIRMED, blockchain_com_exchange_rest_api_deposit_info_STATE_COMPLETED } blockchain_com_exchange_rest_api_deposit_info_STATE_e;

char* deposit_info_state_ToString(blockchain_com_exchange_rest_api_deposit_info_STATE_e state);

blockchain_com_exchange_rest_api_deposit_info_STATE_e deposit_info_state_FromString(char* state);



typedef struct deposit_info_t {
    char *deposit_id; // string
    double amount; //numeric
    char *currency; // string
    char *address; // string
    char *tx_hash; // string
    blockchain_com_exchange_rest_api_deposit_info_STATE_e state; //enum
    long timestamp; //numeric

} deposit_info_t;

deposit_info_t *deposit_info_create(
    char *deposit_id,
    double amount,
    char *currency,
    char *address,
    char *tx_hash,
    blockchain_com_exchange_rest_api_deposit_info_STATE_e state,
    long timestamp
);

void deposit_info_free(deposit_info_t *deposit_info);

deposit_info_t *deposit_info_parseFromJSON(cJSON *deposit_infoJSON);

cJSON *deposit_info_convertToJSON(deposit_info_t *deposit_info);

#endif /* _deposit_info_H_ */

