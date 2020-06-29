#ifndef time_in_force_stop_TEST
#define time_in_force_stop_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define time_in_force_stop_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/time_in_force_stop.h"
time_in_force_stop_t* instantiate_time_in_force_stop(int include_optional);



time_in_force_stop_t* instantiate_time_in_force_stop(int include_optional) {
  time_in_force_stop_t* time_in_force_stop = NULL;
  if (include_optional) {
    time_in_force_stop = time_in_force_stop_create(
    );
  } else {
    time_in_force_stop = time_in_force_stop_create(
    );
  }

  return time_in_force_stop;
}


#ifdef time_in_force_stop_MAIN

void test_time_in_force_stop(int include_optional) {
    time_in_force_stop_t* time_in_force_stop_1 = instantiate_time_in_force_stop(include_optional);

	cJSON* jsontime_in_force_stop_1 = time_in_force_stop_convertToJSON(time_in_force_stop_1);
	printf("time_in_force_stop :\n%s\n", cJSON_Print(jsontime_in_force_stop_1));
	time_in_force_stop_t* time_in_force_stop_2 = time_in_force_stop_parseFromJSON(jsontime_in_force_stop_1);
	cJSON* jsontime_in_force_stop_2 = time_in_force_stop_convertToJSON(time_in_force_stop_2);
	printf("repeating time_in_force_stop:\n%s\n", cJSON_Print(jsontime_in_force_stop_2));
}

int main() {
  test_time_in_force_stop(1);
  test_time_in_force_stop(0);

  printf("Hello world \n");
  return 0;
}

#endif // time_in_force_stop_MAIN
#endif // time_in_force_stop_TEST
