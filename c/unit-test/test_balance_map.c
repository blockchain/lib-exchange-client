#ifndef balance_map_TEST
#define balance_map_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define balance_map_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/balance_map.h"
balance_map_t* instantiate_balance_map(int include_optional);



balance_map_t* instantiate_balance_map(int include_optional) {
  balance_map_t* balance_map = NULL;
  if (include_optional) {
    balance_map = balance_map_create(
      list_create()
    );
  } else {
    balance_map = balance_map_create(
      list_create()
    );
  }

  return balance_map;
}


#ifdef balance_map_MAIN

void test_balance_map(int include_optional) {
    balance_map_t* balance_map_1 = instantiate_balance_map(include_optional);

	cJSON* jsonbalance_map_1 = balance_map_convertToJSON(balance_map_1);
	printf("balance_map :\n%s\n", cJSON_Print(jsonbalance_map_1));
	balance_map_t* balance_map_2 = balance_map_parseFromJSON(jsonbalance_map_1);
	cJSON* jsonbalance_map_2 = balance_map_convertToJSON(balance_map_2);
	printf("repeating balance_map:\n%s\n", cJSON_Print(jsonbalance_map_2));
}

int main() {
  test_balance_map(1);
  test_balance_map(0);

  printf("Hello world \n");
  return 0;
}

#endif // balance_map_MAIN
#endif // balance_map_TEST
