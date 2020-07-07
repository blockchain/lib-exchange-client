/*
 * ord_type.h
 *
 * 
 */

#ifndef _ord_type_H_
#define _ord_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ord_type_t ord_type_t;


// Enum  for ord_type

typedef enum { blockchain_com_exchange_rest_api_ord_type__NULL = 0, blockchain_com_exchange_rest_api_ord_type__MARKET, blockchain_com_exchange_rest_api_ord_type__LIMIT, blockchain_com_exchange_rest_api_ord_type__STOP, blockchain_com_exchange_rest_api_ord_type__STOPLIMIT } blockchain_com_exchange_rest_api_ord_type__e;

char* ord_type_ord_type_ToString(blockchain_com_exchange_rest_api_ord_type__e ord_type);

blockchain_com_exchange_rest_api_ord_type__e ord_type_ord_type_FromString(char* ord_type);

//cJSON *ord_type_ord_type_convertToJSON(blockchain_com_exchange_rest_api_ord_type__e ord_type);

//blockchain_com_exchange_rest_api_ord_type__e ord_type_ord_type_parseFromJSON(cJSON *ord_typeJSON);

#endif /* _ord_type_H_ */

