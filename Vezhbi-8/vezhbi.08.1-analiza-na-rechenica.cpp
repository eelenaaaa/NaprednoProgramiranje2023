#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string rechenica;
    cout << "Vnesi rechenica: \n";
    getline(cin, rechenica);
    
    int lengthArr = rechenica.length(); 
    int golemi = 0;
    int mali = 0;
    int brojki = 0;
    int specZnak = 0;
    for (int i = 0; i < lengthArr; i++)
    {
        if (isupper(rechenica[i])) golemi++;
        if (islower(rechenica[i])) mali++;
        if (isdigit(rechenica[i])) brojki++;
        if (ispunct(rechenica[i])) specZnak++;
    }
    cout << "Rechenicata " << rechenica << " ima:\n";
    cout << golemi << " golemi bukvi\n";
    cout << mali << " mali bukvi\n";
    cout << brojki << " brojki\n";
    cout << specZnak << " specijalni znaci\n";
    return 0;
}
