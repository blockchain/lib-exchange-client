#ifndef side_TEST
#define side_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define side_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/side.h"
side_t* instantiate_side(int include_optional);



side_t* instantiate_side(int include_optional) {
  side_t* side = NULL;
  if (include_optional) {
    side = side_create(
    );
  } else {
    side = side_create(
    );
  }

  return side;
}


#ifdef side_MAIN

void test_side(int include_optional) {
    side_t* side_1 = instantiate_side(include_optional);

	cJSON* jsonside_1 = side_convertToJSON(side_1);
	printf("side :\n%s\n", cJSON_Print(jsonside_1));
	side_t* side_2 = side_parseFromJSON(jsonside_1);
	cJSON* jsonside_2 = side_convertToJSON(side_2);
	printf("repeating side:\n%s\n", cJSON_Print(jsonside_2));
}

int main() {
  test_side(1);
  test_side(0);

  printf("Hello world \n");
  return 0;
}

#endif // side_MAIN
#endif // side_TEST
