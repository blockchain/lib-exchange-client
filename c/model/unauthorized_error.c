#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unauthorized_error.h"



unauthorized_error_t *unauthorized_error_create(
    char *error
    ) {
    unauthorized_error_t *unauthorized_error_local_var = malloc(sizeof(unauthorized_error_t));
    if (!unauthorized_error_local_var) {
        return NULL;
    }
    unauthorized_error_local_var->error = error;

    return unauthorized_error_local_var;
}


void unauthorized_error_free(unauthorized_error_t *unauthorized_error) {
    if(NULL == unauthorized_error){
        return ;
    }
    listEntry_t *listEntry;
    free(unauthorized_error->error);
    free(unauthorized_error);
}

cJSON *unauthorized_error_convertToJSON(unauthorized_error_t *unauthorized_error) {
    cJSON *item = cJSON_CreateObject();

    // unauthorized_error->error
    if(unauthorized_error->error) { 
    if(cJSON_AddStringToObject(item, "error", unauthorized_error->error) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

unauthorized_error_t *unauthorized_error_parseFromJSON(cJSON *unauthorized_errorJSON){

    unauthorized_error_t *unauthorized_error_local_var = NULL;

    // unauthorized_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(unauthorized_errorJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }


    unauthorized_error_local_var = unauthorized_error_create (
        error ? strdup(error->valuestring) : NULL
        );

    return unauthorized_error_local_var;
end:
    return NULL;

}
