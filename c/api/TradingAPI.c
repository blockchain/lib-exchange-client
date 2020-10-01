#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "TradingAPI.h"


#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for TradingAPI_getOrders

static char* getOrders__ToString(blockchain_com_exchange_rest_api_getOrders_status_e ){
    char *Array[] =  { "NULL", "OPEN", "REJECTED", "CANCELED", "FILLED", "PART_FILLED", "EXPIRED" };
    return Array[];
}

static blockchain_com_exchange_rest_api_getOrders_status_e getOrders__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "OPEN", "REJECTED", "CANCELED", "FILLED", "PART_FILLED", "EXPIRED" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getOrders__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getOrders__convertToJSON(blockchain_com_exchange_rest_api_getOrders_status_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getOrders__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static blockchain_com_exchange_rest_api_getOrders_status_e getOrders__parseFromJSON(cJSON* JSON) {
    blockchain_com_exchange_rest_api_getOrders_status_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Add an order
//
order_summary_t*
TradingAPI_createOrder(apiClient_t *apiClient, base_order_t * base_order )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/orders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/orders");




    // Body Param
    cJSON *localVarSingleItemJSON_base_order;
    if (base_order != NULL)
    {
        //string
        localVarSingleItemJSON_base_order = base_order_convertToJSON(base_order);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_base_order);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    //nonprimitive not container
    cJSON *TradingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_summary_t *elementToReturn = order_summary_parseFromJSON(TradingAPIlocalVarJSON);
    cJSON_Delete(TradingAPIlocalVarJSON);
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
    list_free(localVarContentType);
    free(localVarPath);
    cJSON_Delete(localVarSingleItemJSON_base_order);
    free(localVarBodyParameters);
    return elementToReturn;
end:
    return NULL;

}

// Delete all open orders (of a symbol, if specified)
//
void
TradingAPI_deleteAllOrders(apiClient_t *apiClient, char * symbol )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/orders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/orders");




    // query parameters
    char *keyQuery_symbol = NULL;
    char * valueQuery_symbol = NULL;
    keyValuePair_t *keyPairQuery_symbol = 0;
    if (symbol)
    {
        keyQuery_symbol = strdup("symbol");
        valueQuery_symbol = strdup((symbol));
        keyPairQuery_symbol = keyValuePair_create(keyQuery_symbol, valueQuery_symbol);
        list_addElement(localVarQueryParameters,keyPairQuery_symbol);
    }
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_free(localVarQueryParameters);
    
    
    
    
    free(localVarPath);
    if(keyQuery_symbol){
        free(keyQuery_symbol);
        keyQuery_symbol = NULL;
    }
    if(valueQuery_symbol){
        free(valueQuery_symbol);
        valueQuery_symbol = NULL;
    }
    if(keyPairQuery_symbol){
        keyValuePair_free(keyPairQuery_symbol);
        keyPairQuery_symbol = NULL;
    }
    if(keyQuery_symbol){
        free(keyQuery_symbol);
        keyQuery_symbol = NULL;
    }
    if(keyPairQuery_symbol){
        keyValuePair_free(keyPairQuery_symbol);
        keyPairQuery_symbol = NULL;
    }

}

// Cancel a trade
//
void
TradingAPI_deleteOrder(apiClient_t *apiClient, long orderId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/orders/{orderId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/orders/{orderId}");


    // Path Params
    long sizeOfPathParams_orderId = sizeof(orderId)+3 + strlen("{ orderId }");
    if(orderId == 0){
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    snprintf(localVarToReplace_orderId, sizeOfPathParams_orderId, "{%s}", "orderId");

    char localVarBuff_orderId[256];
    intToStr(localVarBuff_orderId, orderId);

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, localVarBuff_orderId);



    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    if (apiClient->response_code == 200) {
        printf("%s\n","Success");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_orderId);

}

// Get current fee level
//
fees_t*
TradingAPI_getFees(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/fees")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/fees");



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
    cJSON *TradingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    fees_t *elementToReturn = fees_parseFromJSON(TradingAPIlocalVarJSON);
    cJSON_Delete(TradingAPIlocalVarJSON);
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
    return elementToReturn;
end:
    return NULL;

}

// Get a list of filled orders
//
// Returns filled orders, including partial fills. Returns at most 100 results, use timestamp to paginate for further results
//
list_t*
TradingAPI_getFills(apiClient_t *apiClient, char * symbol , long from , long to , int limit )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/trades")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/trades");




    // query parameters
    char *keyQuery_symbol = NULL;
    char * valueQuery_symbol = NULL;
    keyValuePair_t *keyPairQuery_symbol = 0;
    if (symbol)
    {
        keyQuery_symbol = strdup("symbol");
        valueQuery_symbol = strdup((symbol));
        keyPairQuery_symbol = keyValuePair_create(keyQuery_symbol, valueQuery_symbol);
        list_addElement(localVarQueryParameters,keyPairQuery_symbol);
    }

    // query parameters
    char *keyQuery_from = NULL;
    long valueQuery_from ;
    keyValuePair_t *keyPairQuery_from = 0;
    if (from)
    {
        keyQuery_from = strdup("from");
        valueQuery_from = (from);
        keyPairQuery_from = keyValuePair_create(keyQuery_from, &valueQuery_from);
        list_addElement(localVarQueryParameters,keyPairQuery_from);
    }

    // query parameters
    char *keyQuery_to = NULL;
    long valueQuery_to ;
    keyValuePair_t *keyPairQuery_to = 0;
    if (to)
    {
        keyQuery_to = strdup("to");
        valueQuery_to = (to);
        keyPairQuery_to = keyValuePair_create(keyQuery_to, &valueQuery_to);
        list_addElement(localVarQueryParameters,keyPairQuery_to);
    }

    // query parameters
    char *keyQuery_limit = NULL;
    int valueQuery_limit ;
    keyValuePair_t *keyPairQuery_limit = 0;
    if (limit)
    {
        keyQuery_limit = strdup("limit");
        valueQuery_limit = (limit);
        keyPairQuery_limit = keyValuePair_create(keyQuery_limit, &valueQuery_limit);
        list_addElement(localVarQueryParameters,keyPairQuery_limit);
    }
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
    cJSON *TradingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(TradingAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, TradingAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( TradingAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_free(localVarQueryParameters);
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_symbol){
        free(keyQuery_symbol);
        keyQuery_symbol = NULL;
    }
    if(valueQuery_symbol){
        free(valueQuery_symbol);
        valueQuery_symbol = NULL;
    }
    if(keyPairQuery_symbol){
        keyValuePair_free(keyPairQuery_symbol);
        keyPairQuery_symbol = NULL;
    }
    if(keyQuery_from){
        free(keyQuery_from);
        keyQuery_from = NULL;
    }
    if(keyPairQuery_from){
        keyValuePair_free(keyPairQuery_from);
        keyPairQuery_from = NULL;
    }
    if(keyQuery_to){
        free(keyQuery_to);
        keyQuery_to = NULL;
    }
    if(keyPairQuery_to){
        keyValuePair_free(keyPairQuery_to);
        keyPairQuery_to = NULL;
    }
    if(keyQuery_limit){
        free(keyQuery_limit);
        keyQuery_limit = NULL;
    }
    if(keyPairQuery_limit){
        keyValuePair_free(keyPairQuery_limit);
        keyPairQuery_limit = NULL;
    }
    return elementToReturn;
end:
    return NULL;

}

// Get a specific order
//
order_summary_t*
TradingAPI_getOrderById(apiClient_t *apiClient, long orderId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/orders/{orderId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/orders/{orderId}");


    // Path Params
    long sizeOfPathParams_orderId = sizeof(orderId)+3 + strlen("{ orderId }");
    if(orderId == 0){
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    snprintf(localVarToReplace_orderId, sizeOfPathParams_orderId, "{%s}", "orderId");

    char localVarBuff_orderId[256];
    intToStr(localVarBuff_orderId, orderId);

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, localVarBuff_orderId);



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
    if (apiClient->response_code == 404) {
        printf("%s\n","Not found");
    }
    //nonprimitive not container
    cJSON *TradingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_summary_t *elementToReturn = order_summary_parseFromJSON(TradingAPIlocalVarJSON);
    cJSON_Delete(TradingAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
    return elementToReturn;
end:
    return NULL;

}

// Get a list orders
//
// Returns live and historic orders, defaulting to live orders. Returns at most 100 results, use timestamp to paginate for further results
//
list_t*
TradingAPI_getOrders(apiClient_t *apiClient, char * symbol , long from , long to , order_status_e status , int limit )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/orders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/orders");




    // query parameters
    char *keyQuery_symbol = NULL;
    char * valueQuery_symbol = NULL;
    keyValuePair_t *keyPairQuery_symbol = 0;
    if (symbol)
    {
        keyQuery_symbol = strdup("symbol");
        valueQuery_symbol = strdup((symbol));
        keyPairQuery_symbol = keyValuePair_create(keyQuery_symbol, valueQuery_symbol);
        list_addElement(localVarQueryParameters,keyPairQuery_symbol);
    }

    // query parameters
    char *keyQuery_from = NULL;
    long valueQuery_from ;
    keyValuePair_t *keyPairQuery_from = 0;
    if (from)
    {
        keyQuery_from = strdup("from");
        valueQuery_from = (from);
        keyPairQuery_from = keyValuePair_create(keyQuery_from, &valueQuery_from);
        list_addElement(localVarQueryParameters,keyPairQuery_from);
    }

    // query parameters
    char *keyQuery_to = NULL;
    long valueQuery_to ;
    keyValuePair_t *keyPairQuery_to = 0;
    if (to)
    {
        keyQuery_to = strdup("to");
        valueQuery_to = (to);
        keyPairQuery_to = keyValuePair_create(keyQuery_to, &valueQuery_to);
        list_addElement(localVarQueryParameters,keyPairQuery_to);
    }

    // query parameters
    char *keyQuery_status = NULL;
    order_status_e valueQuery_status ;
    keyValuePair_t *keyPairQuery_status = 0;
    if (status)
    {
        keyQuery_status = strdup("status");
        valueQuery_status = (status);
        keyPairQuery_status = keyValuePair_create(keyQuery_status, (void *)strdup(getOrders__ToString(
		&valueQuery_status)));
        list_addElement(localVarQueryParameters,keyPairQuery_status);
    }

    // query parameters
    char *keyQuery_limit = NULL;
    int valueQuery_limit ;
    keyValuePair_t *keyPairQuery_limit = 0;
    if (limit)
    {
        keyQuery_limit = strdup("limit");
        valueQuery_limit = (limit);
        keyPairQuery_limit = keyValuePair_create(keyQuery_limit, &valueQuery_limit);
        list_addElement(localVarQueryParameters,keyPairQuery_limit);
    }
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
    cJSON *TradingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(TradingAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_create();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, TradingAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( TradingAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_free(localVarQueryParameters);
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_symbol){
        free(keyQuery_symbol);
        keyQuery_symbol = NULL;
    }
    if(valueQuery_symbol){
        free(valueQuery_symbol);
        valueQuery_symbol = NULL;
    }
    if(keyPairQuery_symbol){
        keyValuePair_free(keyPairQuery_symbol);
        keyPairQuery_symbol = NULL;
    }
    if(keyQuery_from){
        free(keyQuery_from);
        keyQuery_from = NULL;
    }
    if(keyPairQuery_from){
        keyValuePair_free(keyPairQuery_from);
        keyPairQuery_from = NULL;
    }
    if(keyQuery_to){
        free(keyQuery_to);
        keyQuery_to = NULL;
    }
    if(keyPairQuery_to){
        keyValuePair_free(keyPairQuery_to);
        keyPairQuery_to = NULL;
    }
    if(keyQuery_status){
        free(keyQuery_status);
        keyQuery_status = NULL;
    }
    if(keyPairQuery_status){
        keyValuePair_free(keyPairQuery_status);
        keyPairQuery_status = NULL;
    }
    if(keyQuery_limit){
        free(keyQuery_limit);
        keyQuery_limit = NULL;
    }
    if(keyPairQuery_limit){
        keyValuePair_free(keyPairQuery_limit);
        keyPairQuery_limit = NULL;
    }
    return elementToReturn;
end:
    return NULL;

}

