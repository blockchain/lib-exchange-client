#ifndef create_withdrawal_request_TEST
#define create_withdrawal_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_withdrawal_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_withdrawal_request.h"
create_withdrawal_request_t* instantiate_create_withdrawal_request(int include_optional);



create_withdrawal_request_t* instantiate_create_withdrawal_request(int include_optional) {
  create_withdrawal_request_t* create_withdrawal_request = NULL;
  if (include_optional) {
    create_withdrawal_request = create_withdrawal_request_create(
      12.23,
      "BTC",
      "0",
      1
    );
  } else {
    create_withdrawal_request = create_withdrawal_request_create(
      12.23,
      "BTC",
      "0",
      1
    );
  }

  return create_withdrawal_request;
}


#ifdef create_withdrawal_request_MAIN

void test_create_withdrawal_request(int include_optional) {
    create_withdrawal_request_t* create_withdrawal_request_1 = instantiate_create_withdrawal_request(include_optional);

	cJSON* jsoncreate_withdrawal_request_1 = create_withdrawal_request_convertToJSON(create_withdrawal_request_1);
	printf("create_withdrawal_request :\n%s\n", cJSON_Print(jsoncreate_withdrawal_request_1));
	create_withdrawal_request_t* create_withdrawal_request_2 = create_withdrawal_request_parseFromJSON(jsoncreate_withdrawal_request_1);
	cJSON* jsoncreate_withdrawal_request_2 = create_withdrawal_request_convertToJSON(create_withdrawal_request_2);
	printf("repeating create_withdrawal_request:\n%s\n", cJSON_Print(jsoncreate_withdrawal_request_2));
}

int main() {
  test_create_withdrawal_request(1);
  test_create_withdrawal_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_withdrawal_request_MAIN
#endif // create_withdrawal_request_TEST
