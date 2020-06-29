/*
 * time_in_force.h
 *
 * \&quot;GTC\&quot; for Good Till Cancel, \&quot;IOC\&quot; for Immediate or Cancel, \&quot;FOK\&quot; for Fill or Kill, \&quot;GTD\&quot; Good Till Date
 */

#ifndef _time_in_force_H_
#define _time_in_force_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct time_in_force_t time_in_force_t;


// Enum  for time_in_force

typedef enum { blockchain_com_exchange_rest_api_time_in_force__NULL = 0, blockchain_com_exchange_rest_api_time_in_force__GTC, blockchain_com_exchange_rest_api_time_in_force__IOC, blockchain_com_exchange_rest_api_time_in_force__FOK, blockchain_com_exchange_rest_api_time_in_force__GTD } blockchain_com_exchange_rest_api_time_in_force__e;

char* time_in_force_time_in_force_ToString(blockchain_com_exchange_rest_api_time_in_force__e time_in_force);

blockchain_com_exchange_rest_api_time_in_force__e time_in_force_time_in_force_FromString(char* time_in_force);

//cJSON *time_in_force_time_in_force_convertToJSON(blockchain_com_exchange_rest_api_time_in_force__e time_in_force);

//blockchain_com_exchange_rest_api_time_in_force__e time_in_force_time_in_force_parseFromJSON(cJSON *time_in_forceJSON);

#endif /* _time_in_force_H_ */

