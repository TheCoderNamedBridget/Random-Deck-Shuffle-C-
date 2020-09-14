


#include <iostream>
#include "Card.h"
#include "Deck.h"
#include <sstream>

Deck::Deck()
{
    
    for ( int i = 0; i < 52; i++ )
    {
        string theSuit;
        string rank;
        if ( i < 13 && i > -1 )
        {
            theSuit = "S";
        }
        else if ( i < 26 && i > 12 )
        {
            theSuit = "H";
        }
        else if ( i < 39 && i > 25 )
        {
            theSuit = "D";
        }
        else 
        {
            theSuit = "C";
        }
        if ( i % 13 == 0 || i% 13 == 1 || i % 13 > 10 )//royalty ranks
        {
            if ( i % 13 == 1 )
            {
                rank = "A";
            }
            else if ( i % 13 == 11 )
            {
                rank = "J";
            }
            else if ( i % 13 == 12 )
            {
                rank = "Q";
            }
            else 
            {
                rank = "K";
            }
            deck[i] = Card( rank, theSuit );
        }
        else 
        {
            int rankNum = i % 13;
            stringstream ss;
            ss<<rankNum;
            string rankString;
            ss>>rankString;
            
            
            deck[i] = Card( rankString , theSuit );
        }
        //deck[i] = Card();
    }
}

void Deck::Shuffle()
{    
    //select a random card and switch it with another random cards
    int cardPicked;
    srand((unsigned) time(0));
    for (int i = 0; i < 52; i++)
    {
        int firstCardIndex = rand() % 52;
        int secondCardIndex = rand() % 52;
        //cout<<"first index: "<<firstCardIndex<<" second index: "<<secondCardIndex<<endl;
        while ( firstCardIndex == secondCardIndex )
        {
            secondCardIndex = rand() % 52;
        }
        Card first = deck[firstCardIndex];
        //first.showCard();
        Card second = deck[secondCardIndex];
        //second.showCard();
        deck[firstCardIndex] = second;
        deck[secondCardIndex] = first;
    }
    
}

void Deck::firstFour()
{
    cout<<deck[0].theRank<<" "<< deck[0].theSuit<<endl;
    cout<<deck[1].theRank<<" "<< deck[1].theSuit<<endl;
    cout<<deck[2].theRank<<" "<< deck[2].theSuit<<endl;
    cout<<deck[10].theRank<<" "<< deck[10].theSuit<<endl;
    
}
