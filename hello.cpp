#include <iostream>
#include <string>
using namespace std;

class animal {
public:
    string name;
    int age;
};

class Dog : public animal {
public:
    string color;
    void display() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "color: " << color << endl;
    }
}; // Removed the 'S' here

int main() 
{
    Dog d;
    d.name = "Tommy";
    d.age = 3;
    d.color = "Brown";
    
    // Call the function to see the output
    d.display(); 

    return 0; 
} // Added the closing brace