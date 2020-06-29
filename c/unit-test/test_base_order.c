#ifndef base_order_TEST
#define base_order_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define base_order_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/base_order.h"
base_order_t* instantiate_base_order(int include_optional);



base_order_t* instantiate_base_order(int include_optional) {
  base_order_t* base_order = NULL;
  if (include_optional) {
    base_order = base_order_create(
      blockchain_com_exchange_rest_api_base_order_ORDTYPE_MARKET,
      "ABC",
      "BTC-USD",
      blockchain_com_exchange_rest_api_base_order__"BUY",
      10.23,
      blockchain_com_exchange_rest_api_base_order__"GTC",
      0.12345,
      20200103,
      10.0,
      0.12345
    );
  } else {
    base_order = base_order_create(
      blockchain_com_exchange_rest_api_base_order_ORDTYPE_MARKET,
      "ABC",
      "BTC-USD",
      blockchain_com_exchange_rest_api_base_order__"BUY",
      10.23,
      blockchain_com_exchange_rest_api_base_order__"GTC",
      0.12345,
      20200103,
      10.0,
      0.12345
    );
  }

  return base_order;
}


#ifdef base_order_MAIN

void test_base_order(int include_optional) {
    base_order_t* base_order_1 = instantiate_base_order(include_optional);

	cJSON* jsonbase_order_1 = base_order_convertToJSON(base_order_1);
	printf("base_order :\n%s\n", cJSON_Print(jsonbase_order_1));
	base_order_t* base_order_2 = base_order_parseFromJSON(jsonbase_order_1);
	cJSON* jsonbase_order_2 = base_order_convertToJSON(base_order_2);
	printf("repeating base_order:\n%s\n", cJSON_Print(jsonbase_order_2));
}

int main() {
  test_base_order(1);
  test_base_order(0);

  printf("Hello world \n");
  return 0;
}

#endif // base_order_MAIN
#endif // base_order_TEST
