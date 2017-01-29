#ifndef RED7_RED7_H
#define RED7_RED7_H

#include <cstdint>

namespace red7 {
    using Card = int;

    /**
     * Retrieve the number of the card.
     * @param card The card to get the number from.
     * @return The number of the given card.
     */
    int getCardNumber(Card card);

    /**
     * Retrieve the colour of the card.
     * @param card The card to get the colour from.
     * @return The colour of the given card in the format 0-6.
     */
    int getCardColour(Card card);

    /**
     * Get the Card instance for a specific card.
     * @param number The number of the card, 1-7
     * @param colour The colour of the card, 0-6
     * @return The Card instance with the given values.
     */
    Card getCard(int number, int colour);
}


#endif //RED7_RED7_H
