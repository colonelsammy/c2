#include "catch.hpp"

#include <string>
#include "CharUtil.h"

using namespace charutil;

TEST_CASE("AChar") {
   SECTION("IsAVowelForSixSpecificLetters") {
      REQUIRE(isVowel('A'));
      REQUIRE(isVowel('E'));
      REQUIRE(isVowel('I'));
      REQUIRE(isVowel('O'));
      REQUIRE(isVowel('U'));
      REQUIRE(isVowel('Y'));
   }

   SECTION("IsAVowelForLowercaseLetters") {
      REQUIRE(isVowel('a'));
      REQUIRE(isVowel('e'));
      REQUIRE(isVowel('i'));
      REQUIRE(isVowel('o'));
      REQUIRE(isVowel('u'));
      REQUIRE(isVowel('y'));
   }

   SECTION("IsNotAVowelForAnyOtherCharacter") {
      REQUIRE_FALSE(isVowel('b'));
   }

   SECTION("AnswersAppropriateUpperCaseLetter") {
      REQUIRE(upper('a') == 'A');
   }

   SECTION("HandlesAlreadyUppercasedLetters") {
      REQUIRE(upper('B') == 'B');
   }

   SECTION("IgnoresNonLettersWhenUppercasing") {
      REQUIRE(upper('+') == '+');
   }

   SECTION("AnswersAppropriateLowerCaseLetter") {
      REQUIRE(lower('A') == 'a');
   }

   SECTION("HandlesAlreadyLowercased") {
      REQUIRE(lower('b') == 'b');
   }

   SECTION("IgnoresNonLettersWhenLowercasing") {
      REQUIRE(lower('+') == '+');
   }
}
