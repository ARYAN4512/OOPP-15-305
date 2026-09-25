//create input and show function outside class
#include<iostream>
using namespace std;
class Point{
    public:
       int x,y;
       void input();
       void show();
 
};

void Point::input() {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
}

void Point::show() {
    cout << "Point coordinates: (" << x << "," << y << ")" << endl;
}

int main() {
    Point p1, p2;

    cout << "Input for first point:" << endl;
    p1.input();
    cout << "Input for second point:" << endl;
    p2.input();

    cout << "\nDisplaying points:" << endl;
    p1.show();
    p2.show();

    return 0;
}
