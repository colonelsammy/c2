// START_HIGHLIGHT
#include <string>
// END_HIGHLIGHT

class Soundex
{
// START_HIGHLIGHT
public:
   std::string encode(const std::string& word) const {
      return "";
   }
// END_HIGHLIGHT
};

#include "catch.hpp"

// START:test
TEST_CASE("SoundexEncoding", "RetainsSoleLetterOfOneLetterWord") {
   Soundex soundex;
   
   auto encoded = soundex.encode("A");

// START_HIGHLIGHT
   REQUIRE(encoded == "A"); 
// END_HIGHLIGHT
}
// END:test

