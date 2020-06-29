#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/balance.h"
#include "../model/balance_map.h"
#include "../model/create_withdrawal_request.h"
#include "../model/deposit_address_crypto.h"
#include "../model/deposit_info.h"
#include "../model/whitelist_entry.h"
#include "../model/withdrawal_info.h"


// Request a withdrawal
//
withdrawal_info_t*
PaymentsAPI_createWithdrawal(apiClient_t *apiClient, create_withdrawal_request_t * create_withdrawal_request );


// Receive current account balances
//
balance_t*
PaymentsAPI_getAccountByTypeAndCurrency(apiClient_t *apiClient, char * account , char * currency );


// Receive current account balances
//
balance_map_t*
PaymentsAPI_getAccounts(apiClient_t *apiClient);


// Get a deposit address. Currently only crypto currencies are supported
//
deposit_address_crypto_t*
PaymentsAPI_getDepositAddress(apiClient_t *apiClient, char * currency );


// Get status about a deposit
//
deposit_info_t*
PaymentsAPI_getDepositById(apiClient_t *apiClient, char * depositId );


// Get a list of deposits
//
list_t*
PaymentsAPI_getDeposits(apiClient_t *apiClient, long from , long to );


// Get a list of all whitelisted withdrawal accounts
//
list_t*
PaymentsAPI_getWhitelist(apiClient_t *apiClient);


// Get a list of all whitelisted withdrawal accounts
//
list_t*
PaymentsAPI_getWhitelistByCurrency(apiClient_t *apiClient, char * currency );


// Get status about a withdrawal
//
withdrawal_info_t*
PaymentsAPI_getWithdrawalById(apiClient_t *apiClient, char * withdrawalId );


// Get a list of withdrawals
//
list_t*
PaymentsAPI_getWithdrawals(apiClient_t *apiClient, long from , long to );


