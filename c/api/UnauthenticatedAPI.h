#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/order_book.h"
#include "../model/price_event.h"
#include "../model/symbol_status.h"


// L2 Order Book
//
// Level 2 Order Book data is available through the l2 channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.
//
order_book_t*
UnauthenticatedAPI_getL2OrderBook(apiClient_t *apiClient, char * symbol );


// L3 Order Book
//
// Level 3 Order Book data is available through the l3 channel. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes. In contrast to the L2 order book, the L3 order book contains all individual orders without aggregation.
//
order_book_t*
UnauthenticatedAPI_getL3OrderBook(apiClient_t *apiClient, char * symbol );


// Symbols
//
// When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.
//
symbol_status_t*
UnauthenticatedAPI_getSymbolByName(apiClient_t *apiClient, char * symbol );


// Symbols
//
// When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.
//
list_t*_t*
UnauthenticatedAPI_getSymbols(apiClient_t *apiClient);


// Price
//
price_event_t*
UnauthenticatedAPI_getTickerBySymbol(apiClient_t *apiClient, char * symbol );


// Price
//
list_t*
UnauthenticatedAPI_getTickers(apiClient_t *apiClient);


