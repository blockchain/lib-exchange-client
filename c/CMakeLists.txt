cmake_minimum_required (VERSION 2.6)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_BUILD_TYPE Debug)

find_package(OpenSSL)

if (OPENSSL_FOUND)
	message (STATUS "OPENSSL found")
	set (CMAKE_C_FLAGS "-DOPENSSL")
	include_directories(${OPENSSL_INCLUDE_DIR})
	include_directories(${OPENSSL_INCLUDE_DIRS})
	link_directories(${OPENSSL_LIBRARIES})
	message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else() 
	message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "blockchain_com_exchange_rest_api")

find_package(CURL 7.58.0 REQUIRED)
if(CURL_FOUND)
	include_directories(${CURL_INCLUDE_DIR})
	set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else(CURL_FOUND)
	message(FATAL_ERROR "Could not find the CURL library and development files.")
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/balance.c
    model/balance_map.c
    model/base_order.c
    model/cancel_order_request.c
    model/create_withdrawal_request.c
    model/deposit_address_crypto.c
    model/deposit_info.c
    model/fees.c
    model/order_book.c
    model/order_book_entry.c
    model/order_status.c
    model/order_summary.c
    model/price_event.c
    model/price_event_list.c
    model/side.c
    model/symbol_status.c
    model/time_in_force.c
    model/time_in_force_stop.c
    model/unauthorized_error.c
    model/whitelist_entry.c
    model/withdrawal_info.c
    model/withdrawal_status.c
    api/PaymentsAPI.c
    api/TradingAPI.c
    api/UnauthenticatedAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/balance.h
    model/balance_map.h
    model/base_order.h
    model/cancel_order_request.h
    model/create_withdrawal_request.h
    model/deposit_address_crypto.h
    model/deposit_info.h
    model/fees.h
    model/order_book.h
    model/order_book_entry.h
    model/order_status.h
    model/order_summary.h
    model/price_event.h
    model/price_event_list.h
    model/side.h
    model/symbol_status.h
    model/time_in_force.h
    model/time_in_force_stop.h
    model/unauthorized_error.h
    model/whitelist_entry.h
    model/withdrawal_info.h
    model/withdrawal_status.h
    api/PaymentsAPI.h
    api/TradingAPI.h
    api/UnauthenticatedAPI.h

)

# Add library with project file with projectname as library name
add_library(${pkgName} SHARED ${SRCS} ${HDRS})
# Link dependent libraries
target_link_libraries(${pkgName} ${CURL_LIBRARIES} )
#install library to destination
install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX})

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled libary to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-PaymentsAPI.c
#    unit-tests/manual-TradingAPI.c
#    unit-tests/manual-UnauthenticatedAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable doesnot support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created libary to executable and dependent libary curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
