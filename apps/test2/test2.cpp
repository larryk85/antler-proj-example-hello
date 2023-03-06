#include <test2.hpp>
#include <print_nums/print_nums.hpp>
#include <ret42/ret42.h>

[[eosio::action]]
void test2::test( int32_t i, float f ) {
   f += i;
   print_f("Value: %", f);

   print_nums(i);
   print_nums(f);

   print_nums(i + ret42());
}

