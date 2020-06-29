#ifndef order_book_entry_TEST
#define order_book_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_book_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_book_entry.h"
order_book_entry_t* instantiate_order_book_entry(int include_optional);



order_book_entry_t* instantiate_order_book_entry(int include_optional) {
  order_book_entry_t* order_book_entry = NULL;
  if (include_optional) {
    order_book_entry = order_book_entry_create(
      8723.45,
      1.45,
      1
    );
  } else {
    order_book_entry = order_book_entry_create(
      8723.45,
      1.45,
      1
    );
  }

  return order_book_entry;
}


#ifdef order_book_entry_MAIN

void test_order_book_entry(int include_optional) {
    order_book_entry_t* order_book_entry_1 = instantiate_order_book_entry(include_optional);

	cJSON* jsonorder_book_entry_1 = order_book_entry_convertToJSON(order_book_entry_1);
	printf("order_book_entry :\n%s\n", cJSON_Print(jsonorder_book_entry_1));
	order_book_entry_t* order_book_entry_2 = order_book_entry_parseFromJSON(jsonorder_book_entry_1);
	cJSON* jsonorder_book_entry_2 = order_book_entry_convertToJSON(order_book_entry_2);
	printf("repeating order_book_entry:\n%s\n", cJSON_Print(jsonorder_book_entry_2));
}

int main() {
  test_order_book_entry(1);
  test_order_book_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_book_entry_MAIN
#endif // order_book_entry_TEST
