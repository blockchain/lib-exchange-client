#ifndef order_book_TEST
#define order_book_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_book_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_book.h"
order_book_t* instantiate_order_book(int include_optional);



order_book_t* instantiate_order_book(int include_optional) {
  order_book_t* order_book = NULL;
  if (include_optional) {
    order_book = order_book_create(
      "BTC-USD",
      list_create(),
      list_create()
    );
  } else {
    order_book = order_book_create(
      "BTC-USD",
      list_create(),
      list_create()
    );
  }

  return order_book;
}


#ifdef order_book_MAIN

void test_order_book(int include_optional) {
    order_book_t* order_book_1 = instantiate_order_book(include_optional);

	cJSON* jsonorder_book_1 = order_book_convertToJSON(order_book_1);
	printf("order_book :\n%s\n", cJSON_Print(jsonorder_book_1));
	order_book_t* order_book_2 = order_book_parseFromJSON(jsonorder_book_1);
	cJSON* jsonorder_book_2 = order_book_convertToJSON(order_book_2);
	printf("repeating order_book:\n%s\n", cJSON_Print(jsonorder_book_2));
}

int main() {
  test_order_book(1);
  test_order_book(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_book_MAIN
#endif // order_book_TEST
