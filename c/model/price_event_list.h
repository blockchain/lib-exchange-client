/*
 * price_event_list.h
 *
 * 
 */

#ifndef _price_event_list_H_
#define _price_event_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct price_event_list_t price_event_list_t;

#include "price_event.h"



typedef struct price_event_list_t {
    list_t *orders; //nonprimitive container

} price_event_list_t;

price_event_list_t *price_event_list_create(
    list_t *orders
);

void price_event_list_free(price_event_list_t *price_event_list);

price_event_list_t *price_event_list_parseFromJSON(cJSON *price_event_listJSON);

cJSON *price_event_list_convertToJSON(price_event_list_t *price_event_list);

#endif /* _price_event_list_H_ */

