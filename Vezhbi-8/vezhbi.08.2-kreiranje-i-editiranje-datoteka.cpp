#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename;
    cout << "Vnesi ime: ";
    cin >> filename;
    cin.ignore();

    ifstream inFile(filename);
    if (inFile)
    {
        cout << "Fajlot " << filename << " veke postoi. Izberete opcija:\n";
        cout << "1) Procitaj sodrzhina od fajlot.\n";
        cout << "2) Prodolzhi da vnesuvash sodrzhina vo fajlot.\n";
        int option;
        cin >> option;
        cin.ignore();
        if (option == 1)
        {
            string line;
            while (getline(inFile, line)) 
            {
                cout << line << endl;
            }
            inFile.close();
            return 0;
        }
    }

    ofstream outFile(filename, ios::app);
    if (!outFile)
    {
        cerr << "Fajlot ne mozhi da se otvori. :(" << endl;
        return 1;
    }

    string textToAdd;
    cout << "Vnesi sodrzhina: \n";
    getline(cin, textToAdd);

    outFile << textToAdd << endl;

    outFile.close();

    return 0;
}
