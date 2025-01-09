#include <random>
#include <chrono>
#include <algorithm>
#include "Deck.h"

Deck::Deck() {
    for (int suit = 0; suit < 4; ++suit) {
        for (int rank = 2; rank <= 14; ++rank) {
            cards.push_back(Card{ static_cast<Suit>(suit), static_cast<Rank>(rank) });
        }
    }
    shuffle();
}

void Deck::shuffle() {
    auto seed = static_cast<unsigned int>(std::chrono::system_clock::now().time_since_epoch().count());
    std::default_random_engine rng(seed);
    std::shuffle(cards.begin(), cards.end(), rng);
}

Card Deck::draw() {
    Card card = cards.back();
    cards.pop_back();
    return card;
}
