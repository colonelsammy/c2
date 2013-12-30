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

   SECTION("ReplacesMultipleConsonantsWithDigits") {
      REQUIRE(soundex.encode("Acdl") == "A234");
   }

   SECTION("LimitsLengthToFourCharacters") {
      REQUIRE(soundex.encode("Dcdlb").length() == 4u); 
   }

   SECTION("IgnoresVowelLikeLetters") {
      REQUIRE(soundex.encode("BaAeEiIoOuUhHyYcdl") == "B234");
   }

   SECTION("CombinesDuplicateEncodings") {
      REQUIRE(soundex.encodedDigit('b') == soundex.encodedDigit('f'));
      REQUIRE(soundex.encodedDigit('c') == soundex.encodedDigit('g'));
      REQUIRE(soundex.encodedDigit('d') == soundex.encodedDigit('t'));

      REQUIRE(soundex.encode("Abfcgdt") == "A123");
   }

   SECTION("UppercasesFirstLetter") {
      REQUIRE_THAT(soundex.encode("abcd"), StartsWith("A"));
   }

   SECTION("IgnoresCaseWhenEncodingConsonants") {
      REQUIRE(soundex.encode("BCDL") == soundex.encode("Bcdl"));
   }
}
