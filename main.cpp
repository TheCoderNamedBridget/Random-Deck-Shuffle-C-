/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "Card.h"
#include "Deck.h"
#include <iostream>
using namespace std;
int main()
{
    
    Deck deck = Deck();
    
    deck.Shuffle();
    deck.firstFour();
    return 0;
}
