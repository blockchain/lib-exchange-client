#ifndef unauthorized_error_TEST
#define unauthorized_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unauthorized_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unauthorized_error.h"
unauthorized_error_t* instantiate_unauthorized_error(int include_optional);



unauthorized_error_t* instantiate_unauthorized_error(int include_optional) {
  unauthorized_error_t* unauthorized_error = NULL;
  if (include_optional) {
    unauthorized_error = unauthorized_error_create(
      "0"
    );
  } else {
    unauthorized_error = unauthorized_error_create(
      "0"
    );
  }

  return unauthorized_error;
}


#ifdef unauthorized_error_MAIN

void test_unauthorized_error(int include_optional) {
    unauthorized_error_t* unauthorized_error_1 = instantiate_unauthorized_error(include_optional);

	cJSON* jsonunauthorized_error_1 = unauthorized_error_convertToJSON(unauthorized_error_1);
	printf("unauthorized_error :\n%s\n", cJSON_Print(jsonunauthorized_error_1));
	unauthorized_error_t* unauthorized_error_2 = unauthorized_error_parseFromJSON(jsonunauthorized_error_1);
	cJSON* jsonunauthorized_error_2 = unauthorized_error_convertToJSON(unauthorized_error_2);
	printf("repeating unauthorized_error:\n%s\n", cJSON_Print(jsonunauthorized_error_2));
}

int main() {
  test_unauthorized_error(1);
  test_unauthorized_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // unauthorized_error_MAIN
#endif // unauthorized_error_TEST
