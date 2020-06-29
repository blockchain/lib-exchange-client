/*
 * symbol_status.h
 *
 * 
 */

#ifndef _symbol_status_H_
#define _symbol_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct symbol_status_t symbol_status_t;


// Enum STATUS for symbol_status

typedef enum  { blockchain_com_exchange_rest_api_symbol_status_STATUS_NULL = 0, blockchain_com_exchange_rest_api_symbol_status_STATUS_open, blockchain_com_exchange_rest_api_symbol_status_STATUS_close, blockchain_com_exchange_rest_api_symbol_status_STATUS_suspend, blockchain_com_exchange_rest_api_symbol_status_STATUS_halt, blockchain_com_exchange_rest_api_symbol_status_STATUS_halt_freeze } blockchain_com_exchange_rest_api_symbol_status_STATUS_e;

char* symbol_status_status_ToString(blockchain_com_exchange_rest_api_symbol_status_STATUS_e status);

blockchain_com_exchange_rest_api_symbol_status_STATUS_e symbol_status_status_FromString(char* status);



typedef struct symbol_status_t {
    char *base_currency; // string
    int base_currency_scale; //numeric
    char *counter_currency; // string
    int counter_currency_scale; //numeric
    long min_price_increment; //numeric
    int min_price_increment_scale; //numeric
    long min_order_size; //numeric
    int min_order_size_scale; //numeric
    long max_order_size; //numeric
    int max_order_size_scale; //numeric
    long lot_size; //numeric
    int lot_size_scale; //numeric
    blockchain_com_exchange_rest_api_symbol_status_STATUS_e status; //enum
    long id; //numeric
    double auction_price; //numeric
    double auction_size; //numeric
    int auction_time; //numeric
    double imbalance; //numeric

} symbol_status_t;

symbol_status_t *symbol_status_create(
    char *base_currency,
    int base_currency_scale,
    char *counter_currency,
    int counter_currency_scale,
    long min_price_increment,
    int min_price_increment_scale,
    long min_order_size,
    int min_order_size_scale,
    long max_order_size,
    int max_order_size_scale,
    long lot_size,
    int lot_size_scale,
    blockchain_com_exchange_rest_api_symbol_status_STATUS_e status,
    long id,
    double auction_price,
    double auction_size,
    int auction_time,
    double imbalance
);

void symbol_status_free(symbol_status_t *symbol_status);

symbol_status_t *symbol_status_parseFromJSON(cJSON *symbol_statusJSON);

cJSON *symbol_status_convertToJSON(symbol_status_t *symbol_status);

#endif /* _symbol_status_H_ */

