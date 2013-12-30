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
      REQUIRE(soundex.encode("Ax") == "A200"); 
   }

   SECTION("IgnoresNonAlphabetics") {
       REQUIRE(soundex.encode("A#") == "A000"); 
   }

   SECTION("LimitsLengthToFourCharacters") {
      REQUIRE(soundex.encode("Dcdlb").length() == 4u); 
   }
}

TEST_CASE("ReplacesMultipleConsonantsWithDigits", "[hide]") {
   Soundex soundex;
   REQUIRE(soundex.encode("Acdl") == "A234");
}

