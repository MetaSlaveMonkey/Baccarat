#include "Player.h"

void Player::addCard(const Card& card) {
    hand.push_back(card);
    total = (total + card.value()) % 10;
}

int Player::getTotal() const {
    return total;
}

void Player::clearHand() {
    hand.clear();
    total = 0;
}
