#ifndef withdrawal_info_TEST
#define withdrawal_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define withdrawal_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/withdrawal_info.h"
withdrawal_info_t* instantiate_withdrawal_info(int include_optional);



withdrawal_info_t* instantiate_withdrawal_info(int include_optional) {
  withdrawal_info_t* withdrawal_info = NULL;
  if (include_optional) {
    withdrawal_info = withdrawal_info_create(
      "0",
      12.23,
      0.0005,
      "BTC",
      "0",
      blockchain_com_exchange_rest_api_withdrawal_info__REJECTED,
      1592830770594
    );
  } else {
    withdrawal_info = withdrawal_info_create(
      "0",
      12.23,
      0.0005,
      "BTC",
      "0",
      blockchain_com_exchange_rest_api_withdrawal_info__REJECTED,
      1592830770594
    );
  }

  return withdrawal_info;
}


#ifdef withdrawal_info_MAIN

void test_withdrawal_info(int include_optional) {
    withdrawal_info_t* withdrawal_info_1 = instantiate_withdrawal_info(include_optional);

	cJSON* jsonwithdrawal_info_1 = withdrawal_info_convertToJSON(withdrawal_info_1);
	printf("withdrawal_info :\n%s\n", cJSON_Print(jsonwithdrawal_info_1));
	withdrawal_info_t* withdrawal_info_2 = withdrawal_info_parseFromJSON(jsonwithdrawal_info_1);
	cJSON* jsonwithdrawal_info_2 = withdrawal_info_convertToJSON(withdrawal_info_2);
	printf("repeating withdrawal_info:\n%s\n", cJSON_Print(jsonwithdrawal_info_2));
}

int main() {
  test_withdrawal_info(1);
  test_withdrawal_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // withdrawal_info_MAIN
#endif // withdrawal_info_TEST
