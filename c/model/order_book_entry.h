/*
 * order_book_entry.h
 *
 * 
 */

#ifndef _order_book_entry_H_
#define _order_book_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_book_entry_t order_book_entry_t;




typedef struct order_book_entry_t {
    double px; //numeric
    double qty; //numeric
    long num; //numeric

} order_book_entry_t;

order_book_entry_t *order_book_entry_create(
    double px,
    double qty,
    long num
);

void order_book_entry_free(order_book_entry_t *order_book_entry);

order_book_entry_t *order_book_entry_parseFromJSON(cJSON *order_book_entryJSON);

cJSON *order_book_entry_convertToJSON(order_book_entry_t *order_book_entry);

#endif /* _order_book_entry_H_ */

