#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void dealCards();
    const int DECK_SIZE = 54;           //vkupno broj na karti
    const int SUIT_SIZE = 13;           //vkupno broj na karti vo edna forma
    const int JOKER_SIZE = 2;           //broj na dzokeri
    const int NUM_PLAYERS = 4;          //broj na igrachi

    string suits[4] = {"Hearts", "Clubs","Diamonds", "Spades"};
    string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string jokers[JOKER_SIZE] = {"Colored Joker", "Black & white Joker"};

void shuffleDeck(string deck[], int size) {         //void funkcija za meshanje na shpilot       
    for (int i = 0; i < size; i++) {
            int j = rand() % size;
            string temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
    }
}

int main() {
    string deck[DECK_SIZE];                     
    int index = 0;
    int k=0;
    for (int j = 0; j < SUIT_SIZE; j++) {                       //ciklus za ispishuvanje na shpilot so soedinuvanje na stringovite za boja i forma, i broj na kartite
        for (int i = 0; i < 4; i++) {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
        }
    }  
            deck[index] = jokers[k];                    //vmetnuvanje na dzokerite vo shpilot
            index++,k++;
            deck[index]=jokers[k];

    cout << "Original Deck:" << endl;           //pechatenje na podreden shpil
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i] << endl;
    }
    srand(time(NULL));                          //funkcija za dobivanje razlichno meshanje pri sekoe kompajliranje na kodot

    cout<< "\nShuffled Deck:"<<endl;            //pechatenje na izmeshan shpil
    shuffleDeck(deck, DECK_SIZE);
    for (int i = 0; i < DECK_SIZE; i++) {
    cout << deck[i] << endl;
    }
    cout<<"\n";

    string players[NUM_PLAYERS][DECK_SIZE/NUM_PLAYERS];        //delenje na izmeshanite karti na 4 igrachi
    int playerIndex = 0;
    for (int i = 0; i < DECK_SIZE; i++) {
        players[playerIndex][i/4] = deck[i];
        playerIndex = (playerIndex + 1) % 4;
    }

    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << "Player " << i+1 << ": " << endl;               //pechatenje na igrachite i nivnite karti
        for (int j = 0; j < DECK_SIZE/NUM_PLAYERS; j++) {
            cout << players[i][j] << "\n";
           
        }
        cout << endl;
    }

return 0;
}