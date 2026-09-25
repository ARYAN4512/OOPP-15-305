#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int roll;
    string branch;

public:
   
    void input(int studentNum) {
        cout << "\nEnter details for Student " << studentNum << ":" << endl;
        cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Branch: ";
        cin >> branch;
    }

   
    void show(int studentNum) const {
        cout << "\nDetails of Student " << studentNum << ":" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    
    Student s1, s2;

    
    s1.input(1);
    s2.input(2);

    cout << "\n--- Displaying Student Details ---" << endl;

    // Display details for both students
    s1.show(1);
    s2.show(2);

    return 0;
}