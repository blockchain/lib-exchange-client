/*
 * side.h
 *
 * \&quot;buy\&quot; for Buy, \&quot;sell\&quot; for Sell
 */

#ifndef _side_H_
#define _side_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct side_t side_t;


// Enum  for side

typedef enum { blockchain_com_exchange_rest_api_side__NULL = 0, blockchain_com_exchange_rest_api_side__BUY, blockchain_com_exchange_rest_api_side__SELL } blockchain_com_exchange_rest_api_side__e;

char* side_side_ToString(blockchain_com_exchange_rest_api_side__e side);

blockchain_com_exchange_rest_api_side__e side_side_FromString(char* side);

//cJSON *side_side_convertToJSON(blockchain_com_exchange_rest_api_side__e side);

//blockchain_com_exchange_rest_api_side__e side_side_parseFromJSON(cJSON *sideJSON);

#endif /* _side_H_ */

