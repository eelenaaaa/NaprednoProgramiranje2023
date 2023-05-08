#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void rock(){                        //void fukncija za ispishuvanje na raka za "kamen"
    cout << "    _______\n";
    cout << "---'   ____)\n";
    cout << "      (_____)\n";
    cout << "      (_____)\n";
    cout << "      (____)\n";
    cout << "---.__(___)\n";
}

void paper(){                       //void fukncija za ispishuvanje na raka za "list"
    cout << "     _______\n";
    cout << " ---'    ____)__\n";
    cout << "          ______)\n";
    cout << "          _______)\n";
    cout << "         _______)\n";
    cout << "---.__________)\n";
}

void scissors(){                    //void fukncija za ispishuvanje na raka za "nozhici"
    cout << "    _______\n";
    cout << "---'   ____)____\n";
    cout << "          ______)\n";
    cout << "       __________)\n";
    cout << "      (____)\n";
    cout << "---.__(___)\n";
}

int main() {
    srand(time(nullptr)); 
    
    const char ROCK = 1;
    const char PAPER = 2;
    const char SCISSORS = 3;
    
    while (true) {
        int computer_choice = rand() % 3 + 1;           //postavuvanje na izborot na kompjuterot za sluchaen broj
        int user_choice;                                //izbor na igrachot
        
        cout << "Enter your choice (1 = rock, 2 = paper, 3 = scissors): ";
        cin >> user_choice;
        cout<<"\n";
        
        //uslovi za pechatenje na soodvetnite race so izborite na kompjuterot i igrachot
        if(user_choice == ROCK && computer_choice == ROCK){
            cout << "You chose: \n";
                rock();
            cout << "\nComputer chose: \n";
                rock();
        }
        else if(user_choice == ROCK && computer_choice == SCISSORS){
            cout << "You chose: \n";
            rock();
            cout << "\nComputer chose: \n";
            scissors();
        }
        else if(user_choice == ROCK && computer_choice == PAPER){
            cout << "You chose: \n";
            rock();
            cout << "\nComputer chose: \n";
            paper();
        }
        else if(user_choice == SCISSORS && computer_choice == SCISSORS){
            cout << "You chose: \n";
            scissors();
            cout << "\nComputer chose: \n";
            scissors();
        }
        else if(user_choice == SCISSORS && computer_choice == ROCK){
            cout << "You chose: \n";
            scissors();
            cout << "\nComputer chose: \n";
            rock();
        }
        else if(user_choice == SCISSORS && computer_choice == PAPER){
            cout << "You chose: \n";
            scissors();
            cout << "\nComputer chose: \n";
            paper();
        }
        else if(user_choice == PAPER && computer_choice == PAPER){
            cout << "You chose: \n";
            paper();
            cout << "\nComputer chose: \n";
            paper();
        }
        else if(user_choice == PAPER && computer_choice == ROCK){
            cout << "You chose: \n";
            paper();
            cout << "\nComputer chose: \n";
            rock();
        }
        else if(user_choice == PAPER && computer_choice == SCISSORS){
            cout << "You chose: \n";
            paper();
            cout << "\nComputer chose: \n";
            scissors();
        }
        
        //uslovi za pechatenje na rezultatot od igrata
        if (user_choice == computer_choice) {
            cout << "\n========== It's a tie! ==========" << endl;
        } 
        else if ((user_choice == ROCK && computer_choice == SCISSORS) ||
                 (user_choice == PAPER && computer_choice == ROCK) ||
                 (user_choice == SCISSORS && computer_choice == PAPER)) {
                cout << "\n========== You win! ==========" << endl;
        } 
        else {
            cout << "\n========== Computer wins! ==========" << endl;
        }
        

        cout << "\nPlay again? (y/n): ";        //baranje za povtoruvanje na igrata
        char play_again;
        cin >> play_again;
        cout << "\n\n";
        if (play_again != 'y') {                
            break;
        }
    }
    
    return 0;
}
