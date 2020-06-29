#ifndef price_event_TEST
#define price_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define price_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/price_event.h"
price_event_t* instantiate_price_event(int include_optional);



price_event_t* instantiate_price_event(int include_optional) {
  price_event_t* price_event = NULL;
  if (include_optional) {
    price_event = price_event_create(
      "BTC-USD",
      4998.0,
      0.3015,
      5000.0
    );
  } else {
    price_event = price_event_create(
      "BTC-USD",
      4998.0,
      0.3015,
      5000.0
    );
  }

  return price_event;
}


#ifdef price_event_MAIN

void test_price_event(int include_optional) {
    price_event_t* price_event_1 = instantiate_price_event(include_optional);

	cJSON* jsonprice_event_1 = price_event_convertToJSON(price_event_1);
	printf("price_event :\n%s\n", cJSON_Print(jsonprice_event_1));
	price_event_t* price_event_2 = price_event_parseFromJSON(jsonprice_event_1);
	cJSON* jsonprice_event_2 = price_event_convertToJSON(price_event_2);
	printf("repeating price_event:\n%s\n", cJSON_Print(jsonprice_event_2));
}

int main() {
  test_price_event(1);
  test_price_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // price_event_MAIN
#endif // price_event_TEST
