/*
 * base_order.h
 *
 * 
 */

#ifndef _base_order_H_
#define _base_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct base_order_t base_order_t;

#include "side.h"
#include "time_in_force.h"

// Enum ORDTYPE for base_order

typedef enum  { blockchain_com_exchange_rest_api_base_order_ORDTYPE_NULL = 0, blockchain_com_exchange_rest_api_base_order_ORDTYPE_MARKET, blockchain_com_exchange_rest_api_base_order_ORDTYPE_LIMIT, blockchain_com_exchange_rest_api_base_order_ORDTYPE_STOP, blockchain_com_exchange_rest_api_base_order_ORDTYPE_STOPLIMIT } blockchain_com_exchange_rest_api_base_order_ORDTYPE_e;

char* base_order_ord_type_ToString(blockchain_com_exchange_rest_api_base_order_ORDTYPE_e ord_type);

blockchain_com_exchange_rest_api_base_order_ORDTYPE_e base_order_ord_type_FromString(char* ord_type);

// Enum  for base_order

typedef enum  { blockchain_com_exchange_rest_api_base_order__NULL = 0, blockchain_com_exchange_rest_api_base_order__BUY, blockchain_com_exchange_rest_api_base_order__SELL } blockchain_com_exchange_rest_api_base_order__e;

char* base_order_side_ToString(blockchain_com_exchange_rest_api_base_order__e side);

blockchain_com_exchange_rest_api_base_order__e base_order_side_FromString(char* side);

// Enum  for base_order

typedef enum  { blockchain_com_exchange_rest_api_base_order__NULL = 0, blockchain_com_exchange_rest_api_base_order__GTC, blockchain_com_exchange_rest_api_base_order__IOC, blockchain_com_exchange_rest_api_base_order__FOK, blockchain_com_exchange_rest_api_base_order__GTD } blockchain_com_exchange_rest_api_base_order__e;

char* base_order_time_in_force_ToString(blockchain_com_exchange_rest_api_base_order__e time_in_force);

blockchain_com_exchange_rest_api_base_order__e base_order_time_in_force_FromString(char* time_in_force);



typedef struct base_order_t {
    blockchain_com_exchange_rest_api_base_order_ORDTYPE_e ord_type; //enum
    char *cl_ord_id; // string
    char *symbol; // string
    double order_qty; //numeric
    double price; //numeric
    int expire_date; //numeric
    double min_qty; //numeric
    double stop_px; //numeric

} base_order_t;

base_order_t *base_order_create(
    blockchain_com_exchange_rest_api_base_order_ORDTYPE_e ord_type,
    char *cl_ord_id,
    char *symbol,
    double order_qty,
    double price,
    int expire_date,
    double min_qty,
    double stop_px
);

void base_order_free(base_order_t *base_order);

base_order_t *base_order_parseFromJSON(cJSON *base_orderJSON);

cJSON *base_order_convertToJSON(base_order_t *base_order);

#endif /* _base_order_H_ */

