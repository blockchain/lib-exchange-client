/*
 * create_withdrawal_request.h
 *
 * 
 */

#ifndef _create_withdrawal_request_H_
#define _create_withdrawal_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_withdrawal_request_t create_withdrawal_request_t;




typedef struct create_withdrawal_request_t {
    double amount; //numeric
    char *currency; // string
    char *beneficiary; // string
    int send_max; //boolean

} create_withdrawal_request_t;

create_withdrawal_request_t *create_withdrawal_request_create(
    double amount,
    char *currency,
    char *beneficiary,
    int send_max
);

void create_withdrawal_request_free(create_withdrawal_request_t *create_withdrawal_request);

create_withdrawal_request_t *create_withdrawal_request_parseFromJSON(cJSON *create_withdrawal_requestJSON);

cJSON *create_withdrawal_request_convertToJSON(create_withdrawal_request_t *create_withdrawal_request);

#endif /* _create_withdrawal_request_H_ */

