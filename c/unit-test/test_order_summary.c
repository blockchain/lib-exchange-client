#ifndef order_summary_TEST
#define order_summary_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_summary_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_summary.h"
order_summary_t* instantiate_order_summary(int include_optional);



order_summary_t* instantiate_order_summary(int include_optional) {
  order_summary_t* order_summary = NULL;
  if (include_optional) {
    order_summary = order_summary_create(
      11111111,
      "ABC",
      blockchain_com_exchange_rest_api_order_summary__MARKET,
      blockchain_com_exchange_rest_api_order_summary__"FILLED",
      blockchain_com_exchange_rest_api_order_summary__"BUY",
      0.12345,
      "0",
      "BTC-USD",
      0.5678,
      3500.12,
      10.0,
      0.123345,
      345.33,
      1592830770594
    );
  } else {
    order_summary = order_summary_create(
      11111111,
      "ABC",
      blockchain_com_exchange_rest_api_order_summary__MARKET,
      blockchain_com_exchange_rest_api_order_summary__"FILLED",
      blockchain_com_exchange_rest_api_order_summary__"BUY",
      0.12345,
      "0",
      "BTC-USD",
      0.5678,
      3500.12,
      10.0,
      0.123345,
      345.33,
      1592830770594
    );
  }

  return order_summary;
}


#ifdef order_summary_MAIN

void test_order_summary(int include_optional) {
    order_summary_t* order_summary_1 = instantiate_order_summary(include_optional);

	cJSON* jsonorder_summary_1 = order_summary_convertToJSON(order_summary_1);
	printf("order_summary :\n%s\n", cJSON_Print(jsonorder_summary_1));
	order_summary_t* order_summary_2 = order_summary_parseFromJSON(jsonorder_summary_1);
	cJSON* jsonorder_summary_2 = order_summary_convertToJSON(order_summary_2);
	printf("repeating order_summary:\n%s\n", cJSON_Print(jsonorder_summary_2));
}

int main() {
  test_order_summary(1);
  test_order_summary(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_summary_MAIN
#endif // order_summary_TEST
