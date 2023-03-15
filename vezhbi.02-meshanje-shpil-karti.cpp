#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

    const int DECK_SIZE = 54;           //вкупно број на карти
    const int SUIT_SIZE = 13;           //вкупно број на карти во една форма
    const int JOKER_SIZE = 2;           //број на џокери

    string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string jokers[JOKER_SIZE] = {"Colored Joker", "Black & white Joker"};

    void shuffleDeck(string deck[], int size) {         //воид функција за мешање на шпилот
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
    for (int i = 0; i < 4; i++) {                       //циклус за испишување на шпилот со соединување на стринговите за боја и форма, и број на картите
        for (int j = 0; j < SUIT_SIZE; j++) {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
                }
            }  
            deck[index] = jokers[k];                    //вметнување на џокерите во шпилот
            index++,k++;
            deck[index]=jokers[k];

    cout << "Original Deck:" << endl;           //печатење на подреден шпил
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i] << endl;
    }
    srand(time(NULL));                          //функција за добивање на различно мешање секој пат при користење на овој код 

    cout<< "\nShuffled Deck:"<<endl;            //печатење на измешан шпил
    shuffleDeck(deck, DECK_SIZE);
    for (int i = 0; i < DECK_SIZE; i++) {
    cout << deck[i] << endl;
    }

    return 0;
}


