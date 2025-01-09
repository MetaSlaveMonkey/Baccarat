#ifndef BACCARATGAME_H
#define BACCARATGAME_H

#include "Deck.h"
#include "Player.h"

class BaccaratGame {
public:
    BaccaratGame();
    void play();

private:
    Deck deck;
    Player player;
    Player banker;
};

#endif // BACCARATGAME_H
