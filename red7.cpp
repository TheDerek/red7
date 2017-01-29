#include "red7.h"

namespace red7 {

    Card getCard(int number, int colour)
    {
        return (number << 3) + colour;
    }

    int getCardNumber(Card card)
    {
        return (card >> 3);
    }

    int getCardColour(Card card)
    {
        return card & 7;
    }
}
