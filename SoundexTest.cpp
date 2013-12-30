#include <string>

// START:Soundex
class Soundex
{
public:
   std::string encode(const std::string& word) const {
// START_HIGHLIGHT
      return word;
// END_HIGHLIGHT
   }
};
// END:Soundex

// START:test
#include "catch.hpp"    

TEST_CASE("SoundexEncoding", "RetainsSoleLetterOfOneLetterWord") {
   Soundex soundex;
   
   auto encoded = soundex.encode("A");

   REQUIRE(encoded == "A"); 
}
// END:test

