/*
 * balance_map.h
 *
 * 
 */

#ifndef _balance_map_H_
#define _balance_map_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct balance_map_t balance_map_t;

#include "balance.h"



typedef struct balance_map_t {
    list_t *primary; //nonprimitive container

} balance_map_t;

balance_map_t *balance_map_create(
    list_t *primary
);

void balance_map_free(balance_map_t *balance_map);

balance_map_t *balance_map_parseFromJSON(cJSON *balance_mapJSON);

cJSON *balance_map_convertToJSON(balance_map_t *balance_map);

#endif /* _balance_map_H_ */

