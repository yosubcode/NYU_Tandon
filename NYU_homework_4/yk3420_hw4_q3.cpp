#include <iostream>
using namespace std;

int main(){

    int positiveInteger, base2, num, multiplier, remainder;

    cout<<"Enter decimal number:"<<endl;
    cin>>positiveInteger;

    // If the entered number is less than or equal to 0, print a message and exit
    if (positiveInteger <= 0){
        cout<<"Enter a positive integer!";
        return 0;
    }
    // Initialize variables
    num        = positiveInteger;
    base2      = 0;
    multiplier = 1;

    // Convert the number to binary
    while (num !=0 ){
        remainder = num % 2;
        base2 = base2 + (remainder * multiplier); 
        multiplier = multiplier * 10;
        num /= 2;
    }

    // Print the binary representation of the input number
    cout<<"The binary representation of "<<positiveInteger<<" is "<<base2<<endl;
    return 0;
}


// Write a program that reads from the user a positive integer (in a decimal representation), and
// prints its binary (base 2) representation.

// Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:

// Enter decimal number:
// 76
// The binary representation of 76 is 1001100

// Implementation Requirements:
// 1. You are supposed to implement the algorithm that converts to base 2. You should not use
//    any string or special cout functionalities to make the conversion.

// 2. You are not allowed to use arrays.


//////////////////////////////////////////////////////////////////////////////////////
// // This version is by using strings. Save each number in string and reverse it.
//////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//     int positiveInteger, remainder, num;
//     string base2Reversed, base2;

//     cout<<"Enter decimal number:"<<endl;
//     cin>>positiveInteger;

//     base2Reversed = "";
//     num = positiveInteger;

//     while (num != 0){
//         remainder = num % 2;
//         base2Reversed = base2Reversed + to_string(remainder);
//         num /= 2;
//     }

//     base2 = "";
//     for (int i=(base2Reversed.size())-1; i>=0; i--){
//         base2 = base2 + base2Reversed[i];
//         }

//     cout<<"The binary representation of "<<positiveInteger<<" is "<<base2<<endl;
//     return 0;
// }