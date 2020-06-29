/*
 * balance.h
 *
 * 
 */

#ifndef _balance_H_
#define _balance_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct balance_t balance_t;




typedef struct balance_t {
    char *currency; // string
    double balance; //numeric
    double available; //numeric
    double balance_local; //numeric
    double available_local; //numeric
    double rate; //numeric

} balance_t;

balance_t *balance_create(
    char *currency,
    double balance,
    double available,
    double balance_local,
    double available_local,
    double rate
);

void balance_free(balance_t *balance);

balance_t *balance_parseFromJSON(cJSON *balanceJSON);

cJSON *balance_convertToJSON(balance_t *balance);

#endif /* _balance_H_ */

