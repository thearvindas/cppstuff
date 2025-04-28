/* Write a program that asks the user for a number and prints its multiplication table from 1 to 10. Use a for loop to print the table. */

#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < 11; i++){
        cout << num * i << "\n";
    }

    return 0;
}

