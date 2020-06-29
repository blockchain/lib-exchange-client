#ifndef whitelist_entry_TEST
#define whitelist_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define whitelist_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/whitelist_entry.h"
whitelist_entry_t* instantiate_whitelist_entry(int include_optional);



whitelist_entry_t* instantiate_whitelist_entry(int include_optional) {
  whitelist_entry_t* whitelist_entry = NULL;
  if (include_optional) {
    whitelist_entry = whitelist_entry_create(
      "0",
      "0",
      "BTC"
    );
  } else {
    whitelist_entry = whitelist_entry_create(
      "0",
      "0",
      "BTC"
    );
  }

  return whitelist_entry;
}


#ifdef whitelist_entry_MAIN

void test_whitelist_entry(int include_optional) {
    whitelist_entry_t* whitelist_entry_1 = instantiate_whitelist_entry(include_optional);

	cJSON* jsonwhitelist_entry_1 = whitelist_entry_convertToJSON(whitelist_entry_1);
	printf("whitelist_entry :\n%s\n", cJSON_Print(jsonwhitelist_entry_1));
	whitelist_entry_t* whitelist_entry_2 = whitelist_entry_parseFromJSON(jsonwhitelist_entry_1);
	cJSON* jsonwhitelist_entry_2 = whitelist_entry_convertToJSON(whitelist_entry_2);
	printf("repeating whitelist_entry:\n%s\n", cJSON_Print(jsonwhitelist_entry_2));
}

int main() {
  test_whitelist_entry(1);
  test_whitelist_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // whitelist_entry_MAIN
#endif // whitelist_entry_TEST
