#include <iostream>
#include "BaccaratGame.h"

BaccaratGame::BaccaratGame() {
    deck.shuffle();
}

void BaccaratGame::play() {
    player.clearHand();
    banker.clearHand();

    for (int i = 0; i < 2; ++i) {
        player.addCard(deck.draw());
        banker.addCard(deck.draw());
    }

    std::cout << "Player Total: " << player.getTotal() << std::endl;
    std::cout << "Banker Total: " << banker.getTotal() << std::endl;

    if (player.getTotal() < 6) {
        player.addCard(deck.draw());
    }

    if (banker.getTotal() < 6) {
        banker.addCard(deck.draw());
    }

    std::cout << "Player Total: " << player.getTotal() << std::endl;
    std::cout << "Banker Total: " << banker.getTotal() << std::endl;

    if (player.getTotal() > banker.getTotal()) {
        std::cout << "Player Wins!" << std::endl;
    } else if (player.getTotal() < banker.getTotal()) {
        std::cout << "Banker Wins!" << std::endl;
    } else {
        std::cout << "It's a Tie!" << std::endl;
    }
}
