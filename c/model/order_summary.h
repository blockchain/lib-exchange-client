/*
 * order_summary.h
 *
 * 
 */

#ifndef _order_summary_H_
#define _order_summary_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_summary_t order_summary_t;

#include "order_status.h"
#include "side.h"

// Enum  for order_summary

typedef enum  { blockchain_com_exchange_rest_api_order_summary__NULL = 0, blockchain_com_exchange_rest_api_order_summary__OPEN, blockchain_com_exchange_rest_api_order_summary__REJECTED, blockchain_com_exchange_rest_api_order_summary__CANCELED, blockchain_com_exchange_rest_api_order_summary__FILLED, blockchain_com_exchange_rest_api_order_summary__EXPIRED } blockchain_com_exchange_rest_api_order_summary__e;

char* order_summary_ord_status_ToString(blockchain_com_exchange_rest_api_order_summary__e ord_status);

blockchain_com_exchange_rest_api_order_summary__e order_summary_ord_status_FromString(char* ord_status);

// Enum  for order_summary

typedef enum  { blockchain_com_exchange_rest_api_order_summary__NULL = 0, blockchain_com_exchange_rest_api_order_summary__BUY, blockchain_com_exchange_rest_api_order_summary__SELL } blockchain_com_exchange_rest_api_order_summary__e;

char* order_summary_side_ToString(blockchain_com_exchange_rest_api_order_summary__e side);

blockchain_com_exchange_rest_api_order_summary__e order_summary_side_FromString(char* side);



typedef struct order_summary_t {
    long ex_ord_id; //numeric
    char *cl_ord_id; // string
    char *text; // string
    char *symbol; // string
    double last_shares; //numeric
    double last_px; //numeric
    double leaves_qty; //numeric
    double cum_qty; //numeric
    double avg_px; //numeric
    long timestamp; //numeric

} order_summary_t;

order_summary_t *order_summary_create(
    long ex_ord_id,
    char *cl_ord_id,
    char *text,
    char *symbol,
    double last_shares,
    double last_px,
    double leaves_qty,
    double cum_qty,
    double avg_px,
    long timestamp
);

void order_summary_free(order_summary_t *order_summary);

order_summary_t *order_summary_parseFromJSON(cJSON *order_summaryJSON);

cJSON *order_summary_convertToJSON(order_summary_t *order_summary);

#endif /* _order_summary_H_ */

