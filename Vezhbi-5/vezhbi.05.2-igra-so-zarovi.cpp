#include <iostream>                 //Elena Gichevska INKI951
#include <time.h>                   //Igra so frlanje na zarovi, pogolemiot broj e pobednik
#include <cstdlib>
//#include <windows.h>
using namespace std;
void one();
void two();
void three();
void four();
void five();
void six();

int main()
{
    short unsigned int score = 0;           //vkupni bodovi na igrachot
    short unsigned int compScore = 0;       //vkupni bodovi na kompjuterot
    short unsigned int num = 0;             //broevi od zarot na igrachot
    short unsigned int num2 = 0;
    short unsigned int compNum = 0;         //broevi od zarot na kompjuterot
    short unsigned int compNum2 = 0;
    short unsigned int sum = 0;             //zbir na broevi od frlenite zarovi na igrachot
    short unsigned int compSum = 0;         //zbir na broevi od frlenite zarovi na kompjuterot
    char letter;

    srand(time(NULL));
    while (letter != 'q')           //se dodeka igrachot ne izbere q (quit) se odviva igrata
    {
        cout << "Your Score: " << score << endl;
        cout << "computer's Score: " << compScore << endl << endl;
        cout << "Press r to roll or q to quit: ";
        cin >> letter;
        num = 1 + rand()%6;
        num2 = 1 + rand() %6;
        compNum = 1 + rand() %6;
        compNum2 = 1 + rand() %6;
//vo redovite od 32 do 36 so funkcijata rand() se generiraat sluchajno vrednosti od 1 do 6 za num promenlivite

        sum = num + num2;
        compSum = compNum + compNum2;



    if (letter == 'q')      //odbiranje na q za kraj na igra
    break;
    if (letter != 'r')      //odbiranje na r za pochetok na igra
    {
system("cls");
continue;
}

    switch (num)        //koristenje na switch case za vizuelen prikaz na zarovite preku funkcii
{
    case 1:
    one();
    break;
    case 2: 
    two();
    break;
    case 3: 
    three();
    break;
    case 4:
    four(); 
    break;
    case 5:
    five();
    break;
    case 6:
    six();
    break;
    default:    //redovite 71 i 72 ne se neophodni, bidejki kodot e vekje prisposoben da gi koristi samo broevite od 1 do 6, no mozhi da bidi korisno za korisnikot na programata
    cout << "Error...";
    break;
} 

    switch (num2)      //koristenje na switch case za vizuelen prikaz na zarovite preku funkcii
{
    case 1:
    one();
    break;
    case 2:
    two();
    break;
    case 3:
    three();
    break;
    case 4:
    four(); 
    break;
    case 5: 
    five();
    break;
    case 6:
    six();
    break;
    default:    //redovite 71 i 72 ne se neophodni, bidejki kodot e vekje prisposoben da gi koristi samo broevite od 1 do 6, no mozhi da bidi korisno za korisnikot na programata
    cout << "Error...";
    break;
} 

    cout << endl << "Yours: " << num << ", " << num2 << endl;               //prikazhuvanje na broevite od frlenite zarovi
    cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";



    if (sum > compSum)
{
        cout << "You won!!" << endl << endl;
        score++;
}
    else
{
        compScore++;
        cout << "you lost..." << endl << endl;
}



    system("pause");    //se koristi za pauziranje na programata se dodeka ne se klikne (vnesi) narednata komanda
    system("cls");      //se koristi za da se "izbrishi" prethodnata sodrzhina na ekranot, potochno da se raschisti konzolata za narednata igra


}
    return 0;
}

void one()          //funkcii za vizuelno ispishuvanje na zarovite
{
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "| O |" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
}
void two()
{
    cout << "-----" << endl;
    cout << "| O |" << endl;    
    cout << "|   |" << endl;
    cout << "| O |" << endl;
    cout << "-----" << endl;
}
void three()
{
    cout << "-----" << endl;
    cout << "| O |" << endl;
    cout << "| O |" << endl;    
    cout << "| O |" << endl;
    cout << "-----" << endl;
}
void four()
{
    cout << "-----" << endl;
    cout << "|O O|" << endl;
    cout << "|   |" << endl;
    cout << "|O O|" << endl;
    cout << "-----" << endl;
}
void five()
{
    cout << "-----" << endl;
    cout << "|O O|" << endl;    
    cout << "| O |" << endl;
    cout << "|O O|" << endl;    
    cout << "-----" << endl;
}
void six()
{
    cout << "-----" << endl;
    cout << "|O O|" << endl;    
    cout << "|O O|" << endl;
    cout << "|O O|" << endl;
    cout << "-----" << endl;
}