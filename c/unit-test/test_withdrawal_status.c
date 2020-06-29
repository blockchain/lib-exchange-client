#ifndef withdrawal_status_TEST
#define withdrawal_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define withdrawal_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/withdrawal_status.h"
withdrawal_status_t* instantiate_withdrawal_status(int include_optional);



withdrawal_status_t* instantiate_withdrawal_status(int include_optional) {
  withdrawal_status_t* withdrawal_status = NULL;
  if (include_optional) {
    withdrawal_status = withdrawal_status_create(
    );
  } else {
    withdrawal_status = withdrawal_status_create(
    );
  }

  return withdrawal_status;
}


#ifdef withdrawal_status_MAIN

void test_withdrawal_status(int include_optional) {
    withdrawal_status_t* withdrawal_status_1 = instantiate_withdrawal_status(include_optional);

	cJSON* jsonwithdrawal_status_1 = withdrawal_status_convertToJSON(withdrawal_status_1);
	printf("withdrawal_status :\n%s\n", cJSON_Print(jsonwithdrawal_status_1));
	withdrawal_status_t* withdrawal_status_2 = withdrawal_status_parseFromJSON(jsonwithdrawal_status_1);
	cJSON* jsonwithdrawal_status_2 = withdrawal_status_convertToJSON(withdrawal_status_2);
	printf("repeating withdrawal_status:\n%s\n", cJSON_Print(jsonwithdrawal_status_2));
}

int main() {
  test_withdrawal_status(1);
  test_withdrawal_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // withdrawal_status_MAIN
#endif // withdrawal_status_TEST
