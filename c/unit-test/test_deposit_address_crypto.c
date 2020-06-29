#ifndef deposit_address_crypto_TEST
#define deposit_address_crypto_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deposit_address_crypto_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deposit_address_crypto.h"
deposit_address_crypto_t* instantiate_deposit_address_crypto(int include_optional);



deposit_address_crypto_t* instantiate_deposit_address_crypto(int include_optional) {
  deposit_address_crypto_t* deposit_address_crypto = NULL;
  if (include_optional) {
    deposit_address_crypto = deposit_address_crypto_create(
      "0",
      "0"
    );
  } else {
    deposit_address_crypto = deposit_address_crypto_create(
      "0",
      "0"
    );
  }

  return deposit_address_crypto;
}


#ifdef deposit_address_crypto_MAIN

void test_deposit_address_crypto(int include_optional) {
    deposit_address_crypto_t* deposit_address_crypto_1 = instantiate_deposit_address_crypto(include_optional);

	cJSON* jsondeposit_address_crypto_1 = deposit_address_crypto_convertToJSON(deposit_address_crypto_1);
	printf("deposit_address_crypto :\n%s\n", cJSON_Print(jsondeposit_address_crypto_1));
	deposit_address_crypto_t* deposit_address_crypto_2 = deposit_address_crypto_parseFromJSON(jsondeposit_address_crypto_1);
	cJSON* jsondeposit_address_crypto_2 = deposit_address_crypto_convertToJSON(deposit_address_crypto_2);
	printf("repeating deposit_address_crypto:\n%s\n", cJSON_Print(jsondeposit_address_crypto_2));
}

int main() {
  test_deposit_address_crypto(1);
  test_deposit_address_crypto(0);

  printf("Hello world \n");
  return 0;
}

#endif // deposit_address_crypto_MAIN
#endif // deposit_address_crypto_TEST
