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

#include <iostream>
using namespace std;

int main(){

    int n, num, base2, remainder, multiplyer ;
    cout<<"Enter decimal number"<<endl;
    cin>>n;

    remainder = 0;
    multiplyer = 1; // 1000
    base2 = 0;
    num = n;

    while (num > 0){  // num = 1
        remainder = num % 2; // 1
        base2 = base2 + (remainder*multiplyer); // 0*1 + 0*10 + 1*100 + 1*1000
        num /= 2;  // 9
        multiplyer *= 10; 
    }

    cout<<"The binary representation of "<<n<<" is "<<base2<<endl;

    return 0;
}




























// #include <iostream>
// using namespace std;

// int main(){

//     int positiveInteger, base2, remainder, division, multiplyer;

//     cout<<"Enter decimal number: "<<endl;
//     cin>>positiveInteger; //76

//     base2 = 0; // 0
//     remainder = 0; // 0
//     multiplyer = 1; // 1
//     division = positiveInteger; // 76 38

//     while (division != 0){
//         remainder = division % 2; // 0 0 1 1 0 0 1
//         base2 = base2 + (remainder*multiplyer) ; // 0 + 0 + 100 + 1000 + 0 + 0 + 1000000 
//         multiplyer *= 10; //10 100 1000 10000 100000 1000000 10000000
//         division /= 2; // 38 19 9 4 2 1 0

//     }    

//     cout<<"The binary representation of "<<positiveInteger<<" is "<<base2<<endl;
//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main(){

//     int positiveInteger, base2, num, multiplier, remainder;

//     cout<<"Enter decimal number:"<<endl;
//     cin>>positiveInteger;

//     if (positiveInteger <= 0){
//         cout<<"Enter a positive number!";
//     }

//     num        = positiveInteger;
//     base2      = 0;
//     multiplier = 1;

//     while (num !=0 ){
//         remainder = num % 2;
//         base2 = base2 + (remainder * multiplier); 
//         multiplier = multiplier * 10;
//         num /= 2;
//     }

//     cout<<"The binary representation of "<<positiveInteger<<" is "<<base2<<endl;
//     return 0;
// }



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