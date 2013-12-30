#include "catch.hpp" 

#include "Soundex.h"

TEST_CASE("SoundexEncoding") {
   Soundex soundex;
   
   SECTION("RetainsSoleLetterOfOneLetterWord") {
      REQUIRE(soundex.encode("A") == "A000"); 
   }

   SECTION("PadsWithZerosToEnsureThreeDigits") {
      REQUIRE(soundex.encode("I") == "I000");
   }

   SECTION("ReplacesConsonantsWithAppropriateDigits") {
      REQUIRE(soundex.encode("Ab") == "A100");
   }
}


