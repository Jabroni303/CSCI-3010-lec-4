#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Numbers are diveded by two until they reach where the number minus two" >= 0){
    CHECK( RemoveTwos(0)==0);
    CHECK( RemoveTwos(2)==1);
    CHECK( RemoveTwos(3)==1);
    CHECK( RemoveTwos(8)==4);
    CHECK( RemoveTwos(9)==4);

}
