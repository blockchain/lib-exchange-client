#ifndef fees_TEST
#define fees_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fees_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fees.h"
fees_t* instantiate_fees(int include_optional);



fees_t* instantiate_fees(int include_optional) {
  fees_t* fees = NULL;
  if (include_optional) {
    fees = fees_create(
      1,
      0.0014,
      0.0024,
      1500.00
    );
  } else {
    fees = fees_create(
      1,
      0.0014,
      0.0024,
      1500.00
    );
  }

  return fees;
}


#ifdef fees_MAIN

void test_fees(int include_optional) {
    fees_t* fees_1 = instantiate_fees(include_optional);

	cJSON* jsonfees_1 = fees_convertToJSON(fees_1);
	printf("fees :\n%s\n", cJSON_Print(jsonfees_1));
	fees_t* fees_2 = fees_parseFromJSON(jsonfees_1);
	cJSON* jsonfees_2 = fees_convertToJSON(fees_2);
	printf("repeating fees:\n%s\n", cJSON_Print(jsonfees_2));
}

int main() {
  test_fees(1);
  test_fees(0);

  printf("Hello world \n");
  return 0;
}

#endif // fees_MAIN
#endif // fees_TEST
