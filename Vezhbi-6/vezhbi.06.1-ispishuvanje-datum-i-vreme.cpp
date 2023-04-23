#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class date {
private:
    int day, month, year;
    int hour, minute, second; 

public:
    date() {}
    friend void operator>>(istream &in, date &d); //Overloading >> operator
    friend void operator<<(ostream &out, date &d) //Overloading << operator
// Friend function, vsushnost ne e del od klasata, no se koristi pri rabota so podatocite so privaten pristap, so shto se smeta kako "prijatel" (friend) na istata.
// Operator overloading e definiranje na funkcionalnosta na operatorite (vo ovoj sluchaj >> i <<) za tipovite na podatoci koi ke se koristat (ispishuvanje i vpishuvanje na data i vreme so privaten pristap)
    {
    out << "\n Date: ";
    out << d.day;
    out << "/";
    out << d.month;
    out << "/";
    out << d.year;
    out << "\tTime: ";
    out << d.hour << ":" << d.minute << ":" << d.second;
    }
    ~date() {}
};

void operator>>(istream &in, date &d) {
    cout << "\n Enter Day: ";
    in >> d.day;
    cout << "\n Enter Month: ";
    in >> d.month;
    cout << "\n Enter Year: ";
    in >> d.year;                   //mozhi da se upotrebi i in i cin 
    cout << "\n Enter Hour: "; 
    in >> d.hour;
    cout << "\n Enter Minute: ";  
    in >> d.minute;
    cout << "\n Enter Second: "; 
    in >> d.second;
    cout << "\n ------------------\n";
    switch (d.month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            if (d.day > 31) {
                cout << "\n Invalid Days ";
                exit(0);
            }
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            if (d.day > 30) {
                cout << "\n Invalid Days ";
                exit(0);
            }
            break;
        case 2:     // Function for February Month. Checking whether the year is leap year or not.
            if ((d.year % 100 != 0 && d.year % 4 == 0) || (d.year % 400 == 0)) {
                if (d.day > 29) {
                    cout << "\n Invalid Days ";
                    exit(0);
                }
            } else {
                if (d.day > 28) {
                    cout << "\n Invalid Days ";
                    exit(0);
                }
            }
            break;
    }
}

 

int main() {
    date d;
    cout << "\n Enter Date \n";
    cout << "\n ------------------\n";
    cin >> d;
    cout << d;

    return 0;
}
