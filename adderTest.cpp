#include "Catch.hpp"
#include "Adder.h"

TEST_CASE( "Adding cases", "[Adder]" ) 
{ 
  Adder adder = Adder();
  
  SECTION("Adding starts at zero") {
    REQUIRE(adder.GetValue() == 0);
  }
 
  SECTION("Can add once") {
    adder.Add(10);
    REQUIRE(adder.GetValue() == 10);
  }

  SECTION("Can add twice") {
    adder.Add(10);
    adder.Add(11);
    REQUIRE(adder.GetValue() == 21);
  }
}