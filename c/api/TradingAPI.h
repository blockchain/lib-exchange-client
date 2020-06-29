#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/base_order.h"
#include "../model/fees.h"
#include "../model/order_status.h"
#include "../model/order_summary.h"

// Enum  for TradingAPI_getOrders
typedef enum  { blockchain_com_exchange_rest_api_getOrders__NULL = 0, blockchain_com_exchange_rest_api_getOrders__OPEN, blockchain_com_exchange_rest_api_getOrders__REJECTED, blockchain_com_exchange_rest_api_getOrders__CANCELED, blockchain_com_exchange_rest_api_getOrders__FILLED, blockchain_com_exchange_rest_api_getOrders__EXPIRED } blockchain_com_exchange_rest_api_getOrders_status_e;


// Add an order
//
order_summary_t*
TradingAPI_createOrder(apiClient_t *apiClient, base_order_t * base_order );


// Delete all open orders (of a symbol, if specified)
//
void
TradingAPI_deleteAllOrders(apiClient_t *apiClient, char * symbol );


// Cancel a trade
//
void
TradingAPI_deleteOrder(apiClient_t *apiClient, long orderId );


// Get current fee level
//
fees_t*
TradingAPI_getFees(apiClient_t *apiClient);


// Get a specific order
//
order_summary_t*
TradingAPI_getOrderById(apiClient_t *apiClient, long orderId );


// Get a list orders
//
// Returns live and historic orders, defaulting to live orders. Returns at most 50 results, use pagination to return further results
//
list_t*
TradingAPI_getOrders(apiClient_t *apiClient, char * symbol , long from , long to , order_status_e status , long page );


