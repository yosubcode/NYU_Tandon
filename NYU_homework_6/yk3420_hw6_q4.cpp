#include <iostream>
#include <cmath>
using namespace std;

void printDivisors (int num);

int main(){

    int num;

    cout<<"Please enter a positive integer >= 2: ";
    cin>>num;

    printDivisors(num);
    
    return 0;
}

void printDivisors(int num){
    for (int i=1; i<=sqrt(num); i++)
        if (num%i == 0)
            cout<<i<<" ";
    for (int j=sqrt(num)/2; j>=1; j--)
        if (num%j == 0)
            cout<<num/j<<" ";
}


// a. Implement a function:
// void printDivisors(int num)
// This function is given a positive integer num, and prints all of num’s divisors in an ascending order, separated by a space.

// For Example, if we call printDivisors(100), the expected output is:
// 1 2 4 5 10 20 25 50 100

// Implementation requirement: Pay attention to the running time of your function. An efficient implementation would run in Θ(√num).


// b. Use the function above when implementing a program that reads from the user a positive integer (≥2), and prints all it’s divisors.
// Your program should interact with the user exactly as it shows in the following example:

// Please enter a positive integer >= 2: 100
// 1 2 4 5 10 20 25 50 100