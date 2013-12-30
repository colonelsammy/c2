#include <string>

// START:Soundex
class Soundex
{
public:
// START:encode
   std::string encode(const std::string& word) const {
// START_HIGHLIGHT
      return word + "000";
// END_HIGHLIGHT
   }
// END:encode
};
// END:Soundex


#include "catch.hpp" 

// START:RetainsSoleLetter
TEST_CASE("SoundexEncoding1", "RetainsSoleLetterOfOneLetterWord") {
   Soundex soundex;
   
   auto encoded = soundex.encode("A");

// START_HIGHLIGHT
   REQUIRE(encoded == "A000"); 
// END_HIGHLIGHT
}
// END:RetainsSoleLetter

// START:PadsWithZeros
TEST_CASE("SoundexEncoding2", "PadsWithZerosToEnsureThreeDigits") {
   Soundex soundex;

   auto encoded = soundex.encode("I");

   REQUIRE(encoded == "I000");
}
// END:PadsWithZeros
