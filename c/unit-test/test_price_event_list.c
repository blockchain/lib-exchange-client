#ifndef price_event_list_TEST
#define price_event_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define price_event_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/price_event_list.h"
price_event_list_t* instantiate_price_event_list(int include_optional);



price_event_list_t* instantiate_price_event_list(int include_optional) {
  price_event_list_t* price_event_list = NULL;
  if (include_optional) {
    price_event_list = price_event_list_create(
      list_create()
    );
  } else {
    price_event_list = price_event_list_create(
      list_create()
    );
  }

  return price_event_list;
}


#ifdef price_event_list_MAIN

void test_price_event_list(int include_optional) {
    price_event_list_t* price_event_list_1 = instantiate_price_event_list(include_optional);

	cJSON* jsonprice_event_list_1 = price_event_list_convertToJSON(price_event_list_1);
	printf("price_event_list :\n%s\n", cJSON_Print(jsonprice_event_list_1));
	price_event_list_t* price_event_list_2 = price_event_list_parseFromJSON(jsonprice_event_list_1);
	cJSON* jsonprice_event_list_2 = price_event_list_convertToJSON(price_event_list_2);
	printf("repeating price_event_list:\n%s\n", cJSON_Print(jsonprice_event_list_2));
}

int main() {
  test_price_event_list(1);
  test_price_event_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // price_event_list_MAIN
#endif // price_event_list_TEST
