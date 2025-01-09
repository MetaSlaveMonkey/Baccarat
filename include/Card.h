#ifndef CARD_H
#define CARD_H

enum class Suit { Hearts, Diamonds, Clubs, Spades };
enum class Rank { Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

struct Card {
    Suit suit;
    Rank rank;

    int value() const {
        switch (rank) {
            case Rank::Ace: return 1;
            case Rank::Two: case Rank::Three: case Rank::Four: case Rank::Five:
            case Rank::Six: case Rank::Seven: case Rank::Eight: case Rank::Nine:
                return static_cast<int>(rank);
            default: return 0; // Ten, Jack, Queen, King are worth 0
        }
    }
};

#endif // CARD_H
