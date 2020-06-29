/*
 * unauthorized_error.h
 *
 * API key is missing or invalid
 */

#ifndef _unauthorized_error_H_
#define _unauthorized_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct unauthorized_error_t unauthorized_error_t;




typedef struct unauthorized_error_t {
    char *error; // string

} unauthorized_error_t;

unauthorized_error_t *unauthorized_error_create(
    char *error
);

void unauthorized_error_free(unauthorized_error_t *unauthorized_error);

unauthorized_error_t *unauthorized_error_parseFromJSON(cJSON *unauthorized_errorJSON);

cJSON *unauthorized_error_convertToJSON(unauthorized_error_t *unauthorized_error);

#endif /* _unauthorized_error_H_ */

