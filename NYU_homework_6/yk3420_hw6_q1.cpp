#include <iostream>
using namespace std;

int fib (int n);

int main(){

    int num, fibonacci;

    cout<<"Please enter a positive integer: ";
    cin>>num;

    // Call the fib function
    fibonacci = fib(num);
    cout<<fibonacci;

    return 0;
}

// Fibonacchi function to calculate the n-th Fibonacci number using a for loop
int fib (int n){
    int f1 = 1;
    int f2 = 1;
    int fib = 0;
    
    // If n is 1 or 2, the result is always 1
    if (n==1 || n==2){
        fib = 1;
        return fib;

    }else {    
        // Calculate Fibonacci numbers from the 3rd to the n-th number
        for (int i=3; i<=n; i++){
            fib = f1 + f2;
            f1 = f2;
            f2 = fib;            
        }
        return fib;
    }
}




// The	Fibonacci	numbers sequence, Fn,	is defined	as	follows:
// F1 is 1,	F2 is 1, and	Fn = Fn-1 + Fn-2 for n = 3,	4, 5, ...	
// In	other	words,	each	number	is	the	sum	of	the	previous two numbers. The first 10 numbers	
// in	Fibonacci	sequence are: 1, 1,	2, 3, 5, 8, 13, 21, 34, 55

// Note: Background of Fibonacci sequence: https://en.wikipedia.org/wiki/Fibonacci_number

// 1. Write a function int fib(int n) that returns the n-th element of the Fibonacci sequence.
// 2. Write a program that prompts the user to enter a positive integer num, and then
//    prints the num’s elements in the Fibonacci sequence.

// Your	program	should interact with the user exactly as it shows in the following example:
// Please enter a positive integer: 7
// 13