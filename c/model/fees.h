/*
 * fees.h
 *
 * 
 */

#ifndef _fees_H_
#define _fees_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fees_t fees_t;




typedef struct fees_t {
    int tier; //numeric
    double maker_rate; //numeric
    double taker_rate; //numeric
    double volume_in_usd; //numeric

} fees_t;

fees_t *fees_create(
    int tier,
    double maker_rate,
    double taker_rate,
    double volume_in_usd
);

void fees_free(fees_t *fees);

fees_t *fees_parseFromJSON(cJSON *feesJSON);

cJSON *fees_convertToJSON(fees_t *fees);

#endif /* _fees_H_ */

