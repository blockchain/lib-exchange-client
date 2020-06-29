#ifndef order_status_TEST
#define order_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_status.h"
order_status_t* instantiate_order_status(int include_optional);



order_status_t* instantiate_order_status(int include_optional) {
  order_status_t* order_status = NULL;
  if (include_optional) {
    order_status = order_status_create(
    );
  } else {
    order_status = order_status_create(
    );
  }

  return order_status;
}


#ifdef order_status_MAIN

void test_order_status(int include_optional) {
    order_status_t* order_status_1 = instantiate_order_status(include_optional);

	cJSON* jsonorder_status_1 = order_status_convertToJSON(order_status_1);
	printf("order_status :\n%s\n", cJSON_Print(jsonorder_status_1));
	order_status_t* order_status_2 = order_status_parseFromJSON(jsonorder_status_1);
	cJSON* jsonorder_status_2 = order_status_convertToJSON(order_status_2);
	printf("repeating order_status:\n%s\n", cJSON_Print(jsonorder_status_2));
}

int main() {
  test_order_status(1);
  test_order_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_status_MAIN
#endif // order_status_TEST
