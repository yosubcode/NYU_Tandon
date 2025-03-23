#include <bits/stdc++.h>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int Fibonacci(int n);

int main(){
    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;

    int result = Fibonacci(10);
    cout << result << endl;

    return 0;
}

int Fibonacci(int n){

    if (n==1)
        return 1;
    if (n==0)
        return 0;
    
    return Fibonacci(n-1) + Fibonacci(n-2); 
}







// int nthFibonacci(int n){

//     // Base case: if n is 0 or 1, return n
//     if (n <= 1){
//         return n;
//     }

//     // Recursive case: sum of the two preceding Fibonacci numbers
//     return nthFibonacci(n - 1) + nthFibonacci(n - 2);
// }