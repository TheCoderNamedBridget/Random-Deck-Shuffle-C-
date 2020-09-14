


#ifndef CARD_H
#define CARD_H
#include <iostream>
using namespace std;

class Card
{
    public:
        Card();
        Card( string rank, string suit );
    
        string theRank;
        string theSuit;
};
#endif
