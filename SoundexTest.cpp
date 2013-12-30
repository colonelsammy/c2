// START_HIGHLIGHT
class Soundex {
};
// END_HIGHLIGHT

#include "catch.hpp" 

// START:test
TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
   Soundex soundex;
   
// START_HIGHLIGHT
   auto encoded = soundex.encode("A");
// END_HIGHLIGHT
}
// END:test

