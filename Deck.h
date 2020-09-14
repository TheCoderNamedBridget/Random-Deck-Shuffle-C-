

#ifndef DECK_H
#define DECK_H
#include <iostream>
using namespace std;

class Deck 
{
    public:
        Card deck[52];
        Deck();//constructor
        void Shuffle();//randomly shuffles
        void firstFour();//randomly draws a card from the deck

};

#endif
