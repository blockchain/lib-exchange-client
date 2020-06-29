/*
 * price_event.h
 *
 * 
 */

#ifndef _price_event_H_
#define _price_event_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct price_event_t price_event_t;




typedef struct price_event_t {
    char *symbol; // string
    double price_24h; //numeric
    double volume_24h; //numeric
    double last_trade_price; //numeric

} price_event_t;

price_event_t *price_event_create(
    char *symbol,
    double price_24h,
    double volume_24h,
    double last_trade_price
);

void price_event_free(price_event_t *price_event);

price_event_t *price_event_parseFromJSON(cJSON *price_eventJSON);

cJSON *price_event_convertToJSON(price_event_t *price_event);

#endif /* _price_event_H_ */

