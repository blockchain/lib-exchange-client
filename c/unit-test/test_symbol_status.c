#ifndef symbol_status_TEST
#define symbol_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define symbol_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/symbol_status.h"
symbol_status_t* instantiate_symbol_status(int include_optional);



symbol_status_t* instantiate_symbol_status(int include_optional) {
  symbol_status_t* symbol_status = NULL;
  if (include_optional) {
    symbol_status = symbol_status_create(
      "BTC-USD",
      8,
      "BTC-USD",
      2,
      10,
      0,
      10,
      2,
      0,
      8,
      5,
      2,
      blockchain_com_exchange_rest_api_symbol_status_STATUS_open,
      1,
      0.0,
      0.0,
      1530,
      0.0
    );
  } else {
    symbol_status = symbol_status_create(
      "BTC-USD",
      8,
      "BTC-USD",
      2,
      10,
      0,
      10,
      2,
      0,
      8,
      5,
      2,
      blockchain_com_exchange_rest_api_symbol_status_STATUS_open,
      1,
      0.0,
      0.0,
      1530,
      0.0
    );
  }

  return symbol_status;
}


#ifdef symbol_status_MAIN

void test_symbol_status(int include_optional) {
    symbol_status_t* symbol_status_1 = instantiate_symbol_status(include_optional);

	cJSON* jsonsymbol_status_1 = symbol_status_convertToJSON(symbol_status_1);
	printf("symbol_status :\n%s\n", cJSON_Print(jsonsymbol_status_1));
	symbol_status_t* symbol_status_2 = symbol_status_parseFromJSON(jsonsymbol_status_1);
	cJSON* jsonsymbol_status_2 = symbol_status_convertToJSON(symbol_status_2);
	printf("repeating symbol_status:\n%s\n", cJSON_Print(jsonsymbol_status_2));
}

int main() {
  test_symbol_status(1);
  test_symbol_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // symbol_status_MAIN
#endif // symbol_status_TEST
