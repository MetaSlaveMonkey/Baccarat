#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>  // install on CMake file manually if you wanna run this file
#include "Card.h"
#include "Player.h"
#include "BaccaratGame.h"

TEST_CASE("Card value calculation") {
    Card ace{Suit::Hearts, Rank::Ace};
    REQUIRE(ace.value() == 1);

    Card nine{Suit::Clubs, Rank::Nine};
    REQUIRE(nine.value() == 9);

    Card king{Suit::Spades, Rank::King};
    REQUIRE(king.value() == 0);
}

TEST_CASE("Player hand value") {
    Player player;
    player.addCard(Card{Suit::Hearts, Rank::Four});
    player.addCard(Card{Suit::Diamonds, Rank::Three});
    REQUIRE(player.getTotal() == 7);
}

TEST_CASE("Game play") {
    BaccaratGame game;
    REQUIRE_NOTHROW(game.play());
}
