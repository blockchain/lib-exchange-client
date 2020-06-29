#ifndef deposit_info_TEST
#define deposit_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deposit_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deposit_info.h"
deposit_info_t* instantiate_deposit_info(int include_optional);



deposit_info_t* instantiate_deposit_info(int include_optional) {
  deposit_info_t* deposit_info = NULL;
  if (include_optional) {
    deposit_info = deposit_info_create(
      "0",
      12.23,
      "BTC",
      "0",
      "0",
      blockchain_com_exchange_rest_api_deposit_info_STATE_REJECTED,
      1592830770594
    );
  } else {
    deposit_info = deposit_info_create(
      "0",
      12.23,
      "BTC",
      "0",
      "0",
      blockchain_com_exchange_rest_api_deposit_info_STATE_REJECTED,
      1592830770594
    );
  }

  return deposit_info;
}


#ifdef deposit_info_MAIN

void test_deposit_info(int include_optional) {
    deposit_info_t* deposit_info_1 = instantiate_deposit_info(include_optional);

	cJSON* jsondeposit_info_1 = deposit_info_convertToJSON(deposit_info_1);
	printf("deposit_info :\n%s\n", cJSON_Print(jsondeposit_info_1));
	deposit_info_t* deposit_info_2 = deposit_info_parseFromJSON(jsondeposit_info_1);
	cJSON* jsondeposit_info_2 = deposit_info_convertToJSON(deposit_info_2);
	printf("repeating deposit_info:\n%s\n", cJSON_Print(jsondeposit_info_2));
}

int main() {
  test_deposit_info(1);
  test_deposit_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // deposit_info_MAIN
#endif // deposit_info_TEST
