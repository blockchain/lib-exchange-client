/*
 * deposit_address_crypto.h
 *
 * 
 */

#ifndef _deposit_address_crypto_H_
#define _deposit_address_crypto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_address_crypto_t deposit_address_crypto_t;




typedef struct deposit_address_crypto_t {
    char *type; // string
    char *address; // string

} deposit_address_crypto_t;

deposit_address_crypto_t *deposit_address_crypto_create(
    char *type,
    char *address
);

void deposit_address_crypto_free(deposit_address_crypto_t *deposit_address_crypto);

deposit_address_crypto_t *deposit_address_crypto_parseFromJSON(cJSON *deposit_address_cryptoJSON);

cJSON *deposit_address_crypto_convertToJSON(deposit_address_crypto_t *deposit_address_crypto);

#endif /* _deposit_address_crypto_H_ */

