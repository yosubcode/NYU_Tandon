// Write a program that asks the user to enter integers as inputs to be stored in the 
// variables 'a' and 'b' respectively. There are also two integer pointers named ptrA 
// and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.

#include <iostream>
using namespace std;

int main() {
    // Declare regular integer variables
    int a, b;
    
    // Declare integer pointers
    int *ptrA, *ptrB;
    

    // Get input from user
    cout << "Enter first integer (a): ";
    cin >> a;
    
    cout << "Enter second integer (b): ";
    cin >> b;
    

    // Assign addresses of a and b to pointers
    ptrA = &a;
    ptrB = &b;
    
    // Display values using both variables and pointers
    cout << "\nValues using variables:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    

    cout << "\nValues using pointers:" << endl;
    cout << "ptrA points to: " << *ptrA << endl;
    cout << "ptrB points to: " << *ptrB << endl;
    
    // Display memory addresses (optional, for educational purposes)
    cout << "\nMemory addresses:" << endl;
    cout << "Address of a: "    << &a << endl;
    cout << "Address in ptrA: " << ptrA << endl;
    cout << "Address in ptrA: " << &ptrA << endl;

    cout << "Address of b: "    << &b << endl;
    cout << "Address in ptrB: " << ptrB << endl;
    cout << "Address in ptrB: " << &ptrB << endl;
    return 0;
}