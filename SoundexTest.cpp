#include <string>

// START:Soundex
class Soundex
{
// START:encode
public:
   std::string encode(const std::string& word) const {
// START_HIGHLIGHT
      return zeroPad(word);
// END_HIGHLIGHT
   }

private:
// START_HIGHLIGHT
   std::string zeroPad(const std::string& word) const {
      return word + "000";
   }
// END_HIGHLIGHT
// END:encode
};
// END:Soundex


#include "catch.hpp" 

// START:test

// START_HIGHLIGHT
TEST_CASE("SoundexEncoding", "RetainsSoleLetterOfOneLetterWord") {
// END_HIGHLIGHT
   Soundex soundex;

   SECTION("RetainsSoleLetterOfOneLetterWord") {
      auto encoded = soundex.encode("A");

      REQUIRE(encoded == "A000"); 
   }

   SECTION("PadsWithZerosToEnsureThreeDigits") {
      auto encoded = soundex.encode("I");

      REQUIRE(encoded == "I000");
   }
}
// END:test
