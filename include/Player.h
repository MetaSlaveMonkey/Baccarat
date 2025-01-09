#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Card.h"

class Player {
public:
    void addCard(const Card& card);
    int getTotal() const;
    void clearHand();

private:
    std::vector<Card> hand;
    int total = 0;
};

#endif // PLAYER_H
