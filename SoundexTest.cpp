#include "catch.hpp" 

// START_HIGHLIGHT
#include "Soundex.h"
// END_HIGHLIGHT

TEST_CASE("SoundexEncoding") {
   Soundex soundex;
   SECTION("RetainsSoleLetterOfOneLetterWord") {
      REQUIRE(soundex.encode("A") == "A000"); 
   }

   SECTION("PadsWithZerosToEnsureThreeDigits") {
      REQUIRE(soundex.encode("I") == "I000");
   }
}

