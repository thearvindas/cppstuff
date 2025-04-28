/* Write a program that takes an integer input from the user and prints whether the number is even or odd using if else */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num % 2 == 0){
        cout << "Even!";
    }

    else {
        cout << "Odd!";
    }

    return 0;
}