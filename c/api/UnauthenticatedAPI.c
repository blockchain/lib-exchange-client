#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "UnauthenticatedAPI.h"


#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// L2 Order Book
//
// Level 2 Order Book data is available through the l2 channel. This channel returns the volume available at each price. All the price levels are retrieved with this channel. Each entry in bids and asks arrays is a price level, along with its price (px), quantity (qty) and number of orders (num) attributes.
//
order_book_t*
UnauthenticatedAPI_getL2OrderBook(apiClient_t *apiClient, char * symbol )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/l2/{symbol}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/l2/{symbol}");


    // Path Params
    long sizeOfPathParams_symbol = strlen(symbol)+3 + strlen("{ symbol }");
    if(symbol == NULL) {
        goto end;
    }
    char* localVarToReplace_symbol = malloc(sizeOfPathParams_symbol);
    sprintf(localVarToReplace_symbol, "{%s}", "symbol");

    localVarPath = strReplace(localVarPath, localVarToReplace_symbol, symbol);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    //nonprimitive not container
    cJSON *UnauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_book_t *elementToReturn = order_book_parseFromJSON(UnauthenticatedAPIlocalVarJSON);
    cJSON_Delete(UnauthenticatedAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_symbol);
    return elementToReturn;
end:
    return NULL;

}

// L3 Order Book
//
// Level 3 Order Book data is available through the l3 channel. This channel returns all the order updates reaching the exchange; by applying the updates to the snapshot you can recreate the full state of the orderbook. Each entry in bids and asks arrays is an order, along with its id (id), price (px) and quantity (qty) attributes.
//
order_book_t*
UnauthenticatedAPI_getL3OrderBook(apiClient_t *apiClient, char * symbol )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/l3/{symbol}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/l3/{symbol}");


    // Path Params
    long sizeOfPathParams_symbol = strlen(symbol)+3 + strlen("{ symbol }");
    if(symbol == NULL) {
        goto end;
    }
    char* localVarToReplace_symbol = malloc(sizeOfPathParams_symbol);
    sprintf(localVarToReplace_symbol, "{%s}", "symbol");

    localVarPath = strReplace(localVarPath, localVarToReplace_symbol, symbol);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    //nonprimitive not container
    cJSON *UnauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_book_t *elementToReturn = order_book_parseFromJSON(UnauthenticatedAPIlocalVarJSON);
    cJSON_Delete(UnauthenticatedAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_symbol);
    return elementToReturn;
end:
    return NULL;

}

// Symbols
//
// When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.
//
symbol_status_t*
UnauthenticatedAPI_getSymbolByName(apiClient_t *apiClient, char * symbol )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/symbols/{symbol}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/symbols/{symbol}");


    // Path Params
    long sizeOfPathParams_symbol = strlen(symbol)+3 + strlen("{ symbol }");
    if(symbol == NULL) {
        goto end;
    }
    char* localVarToReplace_symbol = malloc(sizeOfPathParams_symbol);
    sprintf(localVarToReplace_symbol, "{%s}", "symbol");

    localVarPath = strReplace(localVarPath, localVarToReplace_symbol, symbol);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    //nonprimitive not container
    cJSON *UnauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    symbol_status_t *elementToReturn = symbol_status_parseFromJSON(UnauthenticatedAPIlocalVarJSON);
    cJSON_Delete(UnauthenticatedAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_symbol);
    return elementToReturn;
end:
    return NULL;

}

// Symbols
//
// When the symbol is not halted the auction data in the message may be blank. When a symbol is in a halt state the auction data will populate as the book builds. When an opening time has been chosen, the auction-time field will show the opening time. Subsequent updates will be sent only if the symbol status changes in any way.
//
list_t*_t*
UnauthenticatedAPI_getSymbols(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/symbols")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/symbols");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    cJSON *UnauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(UnauthenticatedAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, UnauthenticatedAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( UnauthenticatedAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    return NULL;

}

// Price
//
price_event_t*
UnauthenticatedAPI_getTickerBySymbol(apiClient_t *apiClient, char * symbol )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/tickers/{symbol}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/tickers/{symbol}");


    // Path Params
    long sizeOfPathParams_symbol = strlen(symbol)+3 + strlen("{ symbol }");
    if(symbol == NULL) {
        goto end;
    }
    char* localVarToReplace_symbol = malloc(sizeOfPathParams_symbol);
    sprintf(localVarToReplace_symbol, "{%s}", "symbol");

    localVarPath = strReplace(localVarPath, localVarToReplace_symbol, symbol);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    //nonprimitive not container
    cJSON *UnauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    price_event_t *elementToReturn = price_event_parseFromJSON(UnauthenticatedAPIlocalVarJSON);
    cJSON_Delete(UnauthenticatedAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_symbol);
    return elementToReturn;
end:
    return NULL;

}

// Price
//
list_t*
UnauthenticatedAPI_getTickers(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/tickers")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/tickers");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    cJSON *UnauthenticatedAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(UnauthenticatedAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, UnauthenticatedAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( UnauthenticatedAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    return NULL;

}

