#include "catch.hpp"

#include "StringUtil.h"

using namespace stringutil;

TEST_CASE("String head tests") {
   SECTION("AnswersHeadAsItsFirstLetter") {
      REQUIRE(head("xyz") == "x");
   }

   SECTION("AnswersHeadAsEmptyWhenEmpty") {
      REQUIRE(head("") == "");
   }
}

TEST_CASE("String tail tests") {
   SECTION("AnswersTailAsAllLettersAfterHead") {
      REQUIRE(tail("xyz") == "yz");
   }

   SECTION("AnswersTailAsEmptyWhenEmpty") {
      REQUIRE(tail("") == "");
   }
   
   SECTION("AnswersTailAsEmptyWhenContainsOnlyOneCharacter") {
      REQUIRE(tail("X") == "");
   }
}

