#include <iostream>
#include <math.h>
using namespace std;

class operations {

public:
    int num1, num2;         //declaring member variables
public:
    void input() {          //defining member function or methods
        cout << "Enter two numbers to perform operations on: \n";
        cin >> num1 >> num2;
        cout << "\n";
    }
public:
    void addition() {
        cout << "Addition = " << num1 + num2;
        cout << "\n";
    }
    void subtraction() {
        cout << "Subtraction = " << num1 - num2;
        cout << "\n";
    }
    void multiplication() {
        cout << "Multiplication = " << num1 * num2;
        cout << "\n";
    }
    void division() {
        cout << "Division = " << (float) num1 / num2;
        cout << "\n";
    }
    void exponentiation() {
        cout << "Exponentiation = " << pow(num1,num2);
        cout << "\n";
    }
    void num_e() {
        const float e = 2.71828;
        cout << "Exponential function = e^"<< num1 + num2 << " = " << (float)pow(e, (num1 + num2));
        cout << "\n";
    }
};

int main() {
    cout << " ===== Program to perform basic operations using Class, in CPP ===== \n\n";    //Defining the main method to access the members of the class
    operations op;                                                                          //Declaring class object to access class members from outside the class
    
    cout << "\nCalling the input() function from the main() method\n";
    op.input();
    
    cout << "\nCalling the addition() function from the main() method\n";
    op.addition();
    
    cout << "\nCalling the subtraction() function from the main() method\n";
    op.subtraction();
    
    cout << "\nCalling the multiplication() function from the main() method\n";
    op.multiplication();
    
    cout << "\nCalling the division() function from the main() method\n";
    op.division();
    
    cout << "\nCalling the exponentiation() function from the main() method\n";
    op.exponentiation();
    
    cout << "\nCalling the num_e() function from the main() method\n";
    op.num_e();
        cout << "\nExiting the main() method\n\n\n";
    
    return 0;
}