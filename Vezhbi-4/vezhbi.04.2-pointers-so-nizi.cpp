#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    
    char pesna[100] = "Bohemian Rhapsody - Queen";
    char *p = &pesna[0];
    
    cout << "Pesna: " << pesna << "\n\n"; 
    cout << "Cela sodrzhina (p): " << p << endl; 
    cout << "Pochetna pozicija na sodrzhinata (*p): " << *p << endl; 
    cout << "Adresa na pochetna sodrzhina: " << (int*)p << endl; 
    cout << "\n";
    
    p += 20; 
    cout << "Ime na izveduvach (p+=20): " << p <<endl;
    cout << "Pochetna pozicija na segashnata sodrzhinata (*p): " << *p << endl; 
    cout << "Adresa na koja pochnuva segashnata sodrzhina: " << (int*)p << endl;
    
    return 0;
}
