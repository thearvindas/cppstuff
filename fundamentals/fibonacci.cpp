/* Write a program that prints the Fibonacci sequence up to a certain number n. 
Use a while loop to generate the sequence and print each number.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0){
        cout << "No Fibonacci for you!";
    }

    else if (n == 1){
        cout << "0";
    }

    else{
        int a = 0;
        int b = 1;
        cout << a << "\n" << b << "\n";

            
        int i = 0;
        while (i < (n - 2)){
            int c = a + b;
            cout << c << "\n";
            a = b;
            b = c;
            i++;
        }
    }
    

    return 0;
}