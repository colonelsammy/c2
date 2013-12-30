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
      CHECK(soundex.encode("Ab") == "A100");
      CHECK(soundex.encode("Ac") == "A200");
      CHECK(soundex.encode("Ad") == "A300");
   }
}
