/*
 * Copyright 2013 10gen Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <assert.h>

#include "bson-tests.h"


static void
test_bson_error_basic (void)
{
   bson_error_t error;

   bson_set_error(&error, 123, 456, "%s %u", "localhost", 27017);
   assert(!strcmp(error.message, "localhost 27017"));
   assert_cmpint(error.domain, ==, 123);
   assert_cmpint(error.code, ==, 456);
   bson_error_destroy(&error);
}


int
main (int   argc,
      char *argv[])
{
   run_test("/bson/error/basic", test_bson_error_basic);

   return 0;
}
