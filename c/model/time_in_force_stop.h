/*
 * time_in_force_stop.h
 *
 * \&quot;GTC\&quot; for Good Till Cancel, \&quot;GTD\&quot; Good Till Date
 */

#ifndef _time_in_force_stop_H_
#define _time_in_force_stop_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct time_in_force_stop_t time_in_force_stop_t;


// Enum  for time_in_force_stop

typedef enum { blockchain_com_exchange_rest_api_time_in_force_stop__NULL = 0, blockchain_com_exchange_rest_api_time_in_force_stop__GTC, blockchain_com_exchange_rest_api_time_in_force_stop__GTD } blockchain_com_exchange_rest_api_time_in_force_stop__e;

char* time_in_force_stop_time_in_force_stop_ToString(blockchain_com_exchange_rest_api_time_in_force_stop__e time_in_force_stop);

blockchain_com_exchange_rest_api_time_in_force_stop__e time_in_force_stop_time_in_force_stop_FromString(char* time_in_force_stop);

//cJSON *time_in_force_stop_time_in_force_stop_convertToJSON(blockchain_com_exchange_rest_api_time_in_force_stop__e time_in_force_stop);

//blockchain_com_exchange_rest_api_time_in_force_stop__e time_in_force_stop_time_in_force_stop_parseFromJSON(cJSON *time_in_force_stopJSON);

#endif /* _time_in_force_stop_H_ */

