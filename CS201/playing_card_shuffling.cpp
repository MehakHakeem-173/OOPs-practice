#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void shuffle(int deck[][13]);
void deal(const int deck[][13], const char* face[], const char* suit[]);

int main(){
    //face names of cards
    const char* face[13] = {
        "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };

    //suit names
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades"};

    //initially every position contain zero

    int deck[4][13] = {};

    //send the random number generator

    srand(time(0));

    //shuffle the deck
    shuffle(deck);

    //Display the shuffles deck
    deal(deck, face, suit);

    return 0;
}

//---------------------------------------

void shuffle(int deck[][13]){
    for(int card = 1; card <=52; card++){
        int row, column;

        do{
            row = rand() % 4;
            column = rand() % 13;
        }

        while(deck[row][column] != 0);
        deck[row][column] = card;
    }
}

//--------------------------------
void deal(const int deck[][13], const char* face[], const char* suit[]){
    for(int card = 1; card <= 52; card++)
    {
        for (int row = 0; row < 4; row++)
        {
            for (int column = 0; column < 13; column++)
            {
                if(deck[row][column] == card){
                    cout << card << ", " << face[column]
                    << "of"
                    << suit[row]
                    << endl;
                }
            }
        }
    }
}