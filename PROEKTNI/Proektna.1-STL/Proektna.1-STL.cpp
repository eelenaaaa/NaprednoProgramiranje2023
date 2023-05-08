//Algoritam za izvlekuvanje na 5 sluchajni karti od shpil
#include <iostream>
#include <ctime>
#include <string>
#include <algorithm>
#include <vector>

const int DECK_SIZE = 52;           //vkupno karti
const int SUIT_SIZE = 13;           //vkupno broevi

std::string suits[4] = {"Srce", "Detelina", "Baklava", "List"};
std::string ranks[SUIT_SIZE] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Dzandar", "Chupa", "Pop"};

void shuffleDeck(std::vector<std::string>& deck) {          //funkcija za meshanje na kartite
    srand(time(NULL));
    std::random_shuffle(deck.begin(), deck.end());
}

int main() {
    std::vector<std::string> deck(DECK_SIZE);

    int index = 0;
    for (int j = 0; j < SUIT_SIZE; j++) {               //sostavuvanje na broevi so boi i formi
        for (int i = 0; i < 4; i++) {
            deck[index] = suits[i] + ", " + ranks[j] ;
            index++;
        }
    }

    std::vector<std::string> combination(5);            //deklariranje string kombinacija od 5 karti
    shuffleDeck(deck);                                  //vmetnuvanje funkcija za meshanje na shpilot

    int i = 0;
    while (i < 5) {                                     //proveruvanje izmeshanite karti da se od vozmozhni kombinacii i sekogash razlichni
        bool cardExists = false;
        int randomIndex = rand() % DECK_SIZE;
        std::string randomCard = deck[randomIndex];

        for (int j = 0; j < i; j++) {
            if (combination[j] == randomCard) {
                cardExists = true;
                break;
            }
        }

        if (!cardExists) {
            combination[i] = randomCard;
            i++;
        }
    }

    std::cout << "Izvlechenite karti se: " << std::endl;    //pechatenje na izmeshanite pet karti
    for (int i = 0; i < 5; i++) {
        std::cout << combination[i] << std::endl;
    }

    return 0;
}

