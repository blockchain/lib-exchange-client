/*
 * whitelist_entry.h
 *
 * 
 */

#ifndef _whitelist_entry_H_
#define _whitelist_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct whitelist_entry_t whitelist_entry_t;




typedef struct whitelist_entry_t {
    char *whitelist_id; // string
    char *name; // string
    char *currency; // string

} whitelist_entry_t;

whitelist_entry_t *whitelist_entry_create(
    char *whitelist_id,
    char *name,
    char *currency
);

void whitelist_entry_free(whitelist_entry_t *whitelist_entry);

whitelist_entry_t *whitelist_entry_parseFromJSON(cJSON *whitelist_entryJSON);

cJSON *whitelist_entry_convertToJSON(whitelist_entry_t *whitelist_entry);

#endif /* _whitelist_entry_H_ */

