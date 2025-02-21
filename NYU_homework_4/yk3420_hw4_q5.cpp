#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, numberOfEmptySpace, numberOfAsterisk;
 
    cout<<"Enter a positive integer: ";
    cin>>n;

    // If the entered number is less than or equal to 0, print a message and exit
    if (n <= 0){
        cout<<"Enter a positive integer!";
        return 0;
    }

    // First loop:
    for (int i=0; i<n; i++){
        numberOfAsterisk   = ((n-i)*2)-1; // Calculate the number of asterisks in the current row
        numberOfEmptySpace = i;           // Calculate the number of empty space in the current row

        // Print empty spaces
        for (int j=0; j < numberOfEmptySpace; j++){
            cout<<" ";
        }
        // Print asterisks
        for (int j=0; j < numberOfAsterisk; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Second loop
    for (int i=n; i!=0; i--){
        numberOfAsterisk   = ((n-i)*2)+1;  // Calculate the number of asterisks in the current row
        numberOfEmptySpace = i-1;          // Calculate the number of empty space in the current row

        // Print empty spaces
        for (int j=0; j < numberOfEmptySpace; j++){
            cout<<" ";
        }
        // Print asterisks
        for (int j=0; j < numberOfAsterisk; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

// Write a program that asks the user to input a positive integer n, and prints a textual image of an
// hourglass made of 2n lines with asterisks.

// For example if n=4, the program should print:
// *******
//  *****
//   ***
//    *
//    *
//   ***
//  *****
// *******