//Write a program using modern C++ features such as auto and range-based for loop to traverse and display elements of a collection. 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector <int> numbers = {1, 2, 3, 4, 5};

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}