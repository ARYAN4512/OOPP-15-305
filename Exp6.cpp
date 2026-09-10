//Develop a program to demonstrate different types of constructors and destructor behavior in object lifecycle management. 
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default constructor called." << endl;
    }

    MyClass(const MyClass& obj) {
        cout << "Copy constructor called." << endl;
    }

    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};
int main() {
    MyClass obj1;
    MyClass obj2 = obj1; 
    

    return 0; 
}