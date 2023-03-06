#include <eosio/eosio.hpp>

using namespace eosio;

class [[eosio::contract]] test2: public contract {
   public:
      using contract::contract;

      [[eosio::action]]
      void test( int32_t i, float f );
      using test_action = action_wrapper<"test"_n, &test2::test>;
};

