// Swapping by reference function and swapping by address function
#include<iostream>
using namespace std;
void swap(int &a, int &b) { 
    
    int temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    cout << "Before swapping by reference: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping by reference: x = " << x << ", y = " << y << endl;

    int m = 30, n = 40;
    cout << "Before swapping by address: m = " << m << ", n = " << n << endl;
    swap(&m, &n);
    cout << "After swapping by address: m = " << m << ", n = " << n << endl;

    return 0;
}