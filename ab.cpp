//  write a program to take input for any student like name branch roll number and 
// marks of 5 subjects . find out the total and percentage of marks with the help
//  of modular programming.

#include<iostream>
using namespace std;
void input( string &name, string &branch, int &roll_number, int marks[]) {
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter branch: ";
    cin >> branch;
    cout << "Enter roll number: ";
    cin >> roll_number;
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
}
int findsum(int marks[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    return sum;
}

void show(string &name, string &branch, int &roll_number, int marks[], int sum, float percent) {
    cout << "Student Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Roll Number: " << roll_number << endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "Total Marks: " << sum << endl;
    cout << "Percentage: " << percent << "%" << endl;
}
int main() {
    string name, branch, section;
    int roll_number, marks[5] , total;
    input(name, branch, roll_number, marks);
    total = findsum(marks);
    show(name, branch, roll_number, marks, total);

}




