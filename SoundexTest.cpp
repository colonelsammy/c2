#include <string>

class Soundex
{
public:
// START:encode
   std::string encode(const std::string& word) const {
// START_HIGHLIGHT
      return "A";
// END_HIGHLIGHT
   }
// END:encode
};


#include "catch.hpp"

TEST_CASE("SoundexEncoding", "RetainsSoleLetterOfOneLetterWord") {
   Soundex soundex;
   
   auto encoded = soundex.encode("A");

   REQUIRE(encoded == "A"); 
}

