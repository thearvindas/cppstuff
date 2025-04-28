/*Write a program that takes an integer input and calculates the sum of its digits. 
Use a while loop to repeatedly extract the last digit of the number and add it to a running total. */

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int last = 0;
    int sum = 0;
    while(num != 0){
        last = num % 10;
        sum = sum + last;
        num = num/10;
    } 

    cout << sum;
    return 0;
}