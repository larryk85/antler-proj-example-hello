#include <eosio/print.hpp>

void print_nums(int32_t i) {
   eosio::print_f("%\n", i);
}

void print_nums(float f) {
   eosio::print_f("%\n", f);
}
