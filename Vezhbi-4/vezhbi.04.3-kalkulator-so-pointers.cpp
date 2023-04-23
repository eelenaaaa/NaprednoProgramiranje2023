#include <iostream>
#include <cmath>
using namespace std;

int add(int* x, int* y)
{
    return *x + *y;
}

int subtract(int* x, int* y)
{
    return *x - *y;
}

float divide(int* x, int* y)
{
    return (float)(*x) / (float)(*y);
}

double power(int* x, int* y)
{
    return pow((double)(*x), (double)(*y));
}

void calculation1(void* x, void* y, int (*operation)(int*, int*))
{
    int result = (*operation)((int*)x, (int*)y);
    cout << *(int*)x << " + " << *(int*)y << " = " << result << endl;
}

void calculation2(void* x, void* y, int (*operation)(int*, int*))
{
    int result = (*operation)((int*)x, (int*)y);
    cout << *(int*)x << " - " << *(int*)y << " = " << result << endl;
}

void calculation3(void* x, void* y, float (*operation)(int*, int*))
{
    float result = (*operation)((int*)x, (int*)y);
    cout << *(int*)x << " : " << *(int*)y << " = " << result << endl;
}

void calculation4(void* x, void* y, double (*operation)(int*, int*))
{
    double result = (*operation)((int*)x, (int*)y);
    cout << *(int*)x << " ^ " << *(int*)y << " = " << result << endl;
}



int main()
{
    int x = (int) 'E';
    int y = (int) 'G';
    
    cout << "ASCII kod na karakterite: " << (char)x << " = " << x << "\t" << (char)y << " = " << y << endl;

    int (*operation1)(int*, int*);
    operation1 = &add;
    calculation1(&x, &y, operation1);

    int (*operation2)(int*, int*);
    operation2 = &subtract;
    calculation2(&x, &y, operation2);
    
    float (*operation3)(int*, int*);
    operation3 = &divide;
    calculation3(&x, &y, operation3);
    
    double (*operation4)(int*, int*);
    operation4 = &power;
    calculation4(&x, &y, operation4);
    
    return 0;
}