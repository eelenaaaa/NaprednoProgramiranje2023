#include <iostream>
using namespace std;

class Shape {
protected:
    float width, height, hypotenuse;
public:
    void setDimensions(float w, float h) {
        cout << "Setting the Dimensions using the parent Class: Shape\n";
        cout << "The dimensions are: " << w << " and " << h << "\n\n";
        width = w;
        height = h;
    }

    void setDimensions(float w, float h, float hy) {
        cout << "Setting the Dimensions using the parent Class: Shape\n";
        cout << "The dimensions are: " << w << ", " << h << ", and " << hy << "\n\n";
        width = w;
        height = h;
        hypotenuse = hy;
    }
};

class Rectangle : public Shape {
public:
    float area() {
        return (width * height);
    }
    float perimeter() {
        return (2 * width + 2 * height);
    }
};

class Triangle : public Shape {
private:
    float hypotenuse;
public:
    float area() {
        return (width * (height / 2));
    }
    float perimeter() {
        return (width + height + hypotenuse);
    }
};

int main() {
    cout << " ===== Program to demonstrate the concept of Hierarchical Inheritance in CPP ===== \n\n";

    Rectangle rectangle;
    Triangle triangle;

    rectangle.setDimensions(95, 1);
    triangle.setDimensions(9, 5, 1);

    cout << "Area of the Rectangle computed using Rectangle Class is: " << rectangle.area() << "\n";
    cout << "Perimeter of the Rectangle computed using Rectangle Class is: " << rectangle.perimeter() << "\n\n";
    
    cout << "Area of the Triangle computed using Triangle Class is: " << triangle.area()<<"\n";
    cout << "Perimeter of the Triangle computed using Triangle Class is: " << triangle.perimeter() << "\n";

    return 0;
}