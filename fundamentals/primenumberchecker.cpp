/* Write a program that checks if a number is prime or not. 
Use a for loop to check divisibility from 2 to the square root of the number. 
You can use continue to skip non-relevant checks.*/


#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int flag = 0;

    for (int i = 2; i <= sqrt(num); i++){
        
        // cout << i << ", " << flag << "\n";
    
        if (num % i == 0){
            flag = 1;

            if (flag == 1){
                cout << num << " is NOT a prime number!";
                break;
            }
        
        }
    }

    if (flag == 0){
        cout << num << " is a prime number!";
    }


    return 0;
}