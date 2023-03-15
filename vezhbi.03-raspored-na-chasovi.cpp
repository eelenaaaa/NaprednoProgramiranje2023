#include <iostream>
#include <string>
using namespace std;

int main() {
    void raspored(); void Ponedelnik(); void Vtornik(); void Sreda(); void Chetvrtok(); void Petok();
    enum BrDen {ponedelnik, vtornik, sreda, chetvrtok, petok, celosen};         //енумерација на деновите и опција за приказ на целосен распоред
    BrDen brden;
    
    cout<<"Odberi den od nedelata za prikaz na raspored"<<endl;
    cout<<"(ponedelnik, vtornik, sreda, chetvrtok, petok, celosen)"<<endl;
    
    string izbor;
    cin>>izbor;             //внесување на избор на ден за приказ на распоред
    cout<<"\n";
    
    if (izbor == "ponedelnik") {                //поставување на вредноста на brden при изборот направен со внесувањето на денот
        brden = ponedelnik;
    } else if (izbor == "vtornik") {
        brden = vtornik;
    } else if (izbor == "sreda") {
        brden = sreda;
    } else if (izbor == "chetvrtok") {
        brden = chetvrtok;
    } else if (izbor == "petok") {
        brden = petok;
    } else if (izbor == "celosen") {
        brden = celosen;
    } else {
        cout << "Vneseniot podatok ne e validen" << endl;
        return 0;
    }
    switch (brden) {                //доделување на соодветен распоред при добиената вредност од изборот
        case ponedelnik:
            Ponedelnik();
            break;
        case vtornik:
             Vtornik();
            break;
        case sreda:
             Sreda();
            break;
        case chetvrtok:
             Chetvrtok();
            break;
        case petok:
             Petok();
            break;
        case celosen:
             raspored();
            break;
    }
    
    return 0;
}

void Ponedelnik() {                                                         //воид функции за приказ посебно за секој ден
    cout<<"PONEDELNIK\n";
    cout<<"09:00 - 11:30 Ahitektura i organizacija na kompjuteri\n";
    cout<<"11:30 - 14:05 Napredno programiranje\n";
    cout<<"16:00 - 17:00 Veb programiranje (vezhbi online)\n";
}
void Vtornik() {
    cout<<"VTORNIK\n";
    cout<<"11:30 - 14:05 Matematika 2\n";
    cout<<"17:00 - 18:30 Napredno programiranje (vezhbi online)\n";
}
void Sreda() {
    cout<<"SREDA\n";
    cout<<"09:00 - 11:30 Veb programiranje\n";
}
void Chetvrtok() {
    cout<<"CHETVRTOK\n";
    cout<<"11:30 - 13:10 Matematika 2 (vezhbi)\n";
}
void Petok() {
    cout<<"PETOK\n";
    cout<<"09:00 - 11:30 Angliski jazik za specifichni celi\n";
}
void raspored() {               //воид функција за приказ на целосен распоред
    Ponedelnik();
    cout<<endl;
    Vtornik();
    cout<<endl;
    Sreda();
    cout<<endl;
    Chetvrtok();
    cout<<endl;
    Petok();
    cout<<endl;
}