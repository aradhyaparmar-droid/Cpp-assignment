#include <iostream> 
using namespace std; 
class Base { 
   public: 
    void print() { 
        cout << "Base Function" << endl; 
    } 
}; 
 
class Derived : public Base { 
   public: 
    void print() { 
        cout << "Derived Function" << endl; 
    } 
}; 
 
int main() { 
    Derived derived1; 
    derived1.print(); 
    return 0; 
} 
Program Code: 
Program: Operator Overloading & Function Overriding 
#include <iostream> 
using namespace std; 
 
// ----------------- Base class for Function Overriding ----------------- 
class Shape 
{ 
public: 
    // Virtual function to display shape type 
    virtual void display() 
    { 
        cout << "This is a generic shape." << endl; 
    } 
}; 
 
// Derived class: Rectangle 
class Rectangle : public Shape 
{ 
private: 
    float length, width; 
 
public: 
    Rectangle(float l, float w) 
    { 
        length = l; 
        width = w; 
    } 
 
    // Overriding the display function 
    void display() override 
    { 
        cout << "This is a rectangle with length " << length 
             << " and width " << width << "." << endl; 
    } 
 
    // Function to get area 
    float area() 
    { 
        return length * width; 
    } 
 
    // Operator overloading for + (adding areas of two rectangles) 
    float operator+(Rectangle r) 
    { 
        return this->area() + r.area(); 
    } 
}; 
 
// ----------------- Main function ----------------- 
int main() 
{ 
    // Operator Overloading demonstration 
    Rectangle rect1(5, 10); 
    Rectangle rect2(3, 4); 
 
    float totalArea = rect1 + rect2; // Calls overloaded + operator 
    cout << "--- Operator Overloading ---" << endl; 
    cout << "Area of rect1: " << rect1.area() << endl; 
    cout << "Area of rect2: " << rect2.area() << endl; 
    cout << "Total area (rect1 + rect2) using overloaded +: " << totalArea << endl; 
 
    // Function Overriding demonstration 
    Shape *s; 
    Rectangle rect3(7, 2); 
    s = &rect3; // Base class pointer pointing to derived class object 
cout << "\n--- Function Overriding ---" << endl; 
s->display(); // Calls Rectangle's display() due to runtime polymorphism 
return 0; 
} 
