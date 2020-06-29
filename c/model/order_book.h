/*
 * order_book.h
 *
 * 
 */

#ifndef _order_book_H_
#define _order_book_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_book_t order_book_t;

#include "order_book_entry.h"



typedef struct order_book_t {
    char *symbol; // string
    list_t *bids; //nonprimitive container
    list_t *asks; //nonprimitive container

} order_book_t;

order_book_t *order_book_create(
    char *symbol,
    list_t *bids,
    list_t *asks
);

void order_book_free(order_book_t *order_book);

order_book_t *order_book_parseFromJSON(cJSON *order_bookJSON);

cJSON *order_book_convertToJSON(order_book_t *order_book);

#endif /* _order_book_H_ */

