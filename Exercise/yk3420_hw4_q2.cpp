#include <iostream>
#include <string>
using namespace std;

int main(){

    int n, placeValue, decimalNumber, remainder, multiplyer, division ;
    string reversedRomanNumeral = "", romanNumeral = "" ;

    cout<<"Enter decimal number:"<<endl;
    cin>>decimalNumber; // 7 40 100

    remainder = 0;
    multiplyer = 1;
    placeValue = 0;
    n = decimalNumber; // 1

    while (n != 0){
        remainder = n % 10; // 1
        placeValue = remainder * multiplyer ; // 100

        if (placeValue == 1){
            reversedRomanNumeral += "I";
        }
        else if (placeValue == 5){
            reversedRomanNumeral += "V";
        }
        else if (placeValue == 10){
            reversedRomanNumeral += "X";
        }
        else if (placeValue == 50){
            reversedRomanNumeral += "L";
        }
        else if (placeValue == 100){
            reversedRomanNumeral += "C";
        }
        else if (placeValue == 500){
            reversedRomanNumeral += "D";
        }
        else if (placeValue >= 1000){
            for (int i=0; i<placeValue; i=i+1000 )
                reversedRomanNumeral += "M";
        }


        else if ((placeValue > 1) && (placeValue < 5)) {
            int division = 0;
            division = placeValue / 1; // 2
            for (int i=0; i < division; i++)
                reversedRomanNumeral +="I";
        }
        else if ((placeValue > 5) && (placeValue < 10)) {
            int division = 0;
            division = placeValue % 5; // 2
            for (int i=0; i < division; i++)
                reversedRomanNumeral +="I";
            reversedRomanNumeral += "V";
        }
        else if ((placeValue > 10) && (placeValue < 50)) {
            int division = 0;
            division = placeValue / 10; // 2
            for (int i=0; i < division; i++)
                reversedRomanNumeral +="X";
        }
        else if ((placeValue > 50) && (placeValue < 100)) {
            int division = 0;
            division = placeValue % 50; // 2
            for (int i=0; i < division; i=i+10)
                reversedRomanNumeral +="X";
            reversedRomanNumeral += "L";
        }
        else if ((placeValue > 100) && (placeValue < 500)) {
            int division = 0;
            division = placeValue / 100; // 2
            for (int i=0; i < division; i++)
                reversedRomanNumeral +="C";
        }
        else if ((placeValue > 500) && (placeValue < 1000)) {
            int division = 0;
            division = placeValue % 500; // 2
            for (int i=0; i < division; i=i+10)
                reversedRomanNumeral +="C";
            reversedRomanNumeral += "D";
        }

        multiplyer = multiplyer * 10 ; //1000
        n /= 10; // 0
    }

    for (int i=reversedRomanNumeral.length(); i>=0 ;i--){
        romanNumeral += reversedRomanNumeral[i-1];


    }

    // Output the final Roman numeral.
    cout<<romanNumeral<<endl;

    return 0;
}






//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Version 1 /////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int main(){

//     int n, placeValueNumber, remainder, division;
//     string str, reversedRomanNumeral = "", romanNumeral = "";

//     cout<<"Enter decimal number:"<<endl;
//     cin>>n;

//     // Convert the number to a string to determine its size (number of digits)
//     str = to_string(n);

//     // Loop through each digit of the number
//     for (int i=0; i < str.size(); i++){
//         int placeValueNumber = (n % 10) * pow(10, i); // Extract place value of the current digit, (eg. 147 = 100, 40, 7)
//         n = n / 10;

//         // Specific place values to Roman numerals, and append Roman Numeral for each value.
//         if (placeValueNumber == 1){
//             reversedRomanNumeral += "I";
//         }
//         else if (placeValueNumber == 5){
//             reversedRomanNumeral += "V";
//         }
//         else if (placeValueNumber == 10){
//             reversedRomanNumeral += "X";
//         }
//         else if (placeValueNumber == 50) {
//             reversedRomanNumeral += "L";
//         }
//         else if (placeValueNumber == 100){
//             reversedRomanNumeral += "C";
//         }
//         else if (placeValueNumber == 500){
//             reversedRomanNumeral += "D";
//         }
//         else if (placeValueNumber >= 1000){     // There is no lilmit on 1000.
//             division = placeValueNumber / 1000; // Determine how many "M" (1000s) are in the value

//             for (int i=1; i<=division; i++){
//                 reversedRomanNumeral += "M";
//             }
//         }

//         // Determine how many placeValueNumber, and Append roman numeral for each unit.
//         // Values less than 5
//         else if (placeValueNumber < 5){
//             division = placeValueNumber / 1;

//             for (int i=1; i<=division; i++){
//                 reversedRomanNumeral += "I";
//             }
//         }
//         // Values between 5 and 10
//         else if (placeValueNumber < 10 && placeValueNumber > 5){
//             remainder = placeValueNumber % 5;
            
//             for (int i=1; i<=remainder; i++){
//                 reversedRomanNumeral += "I";
//             }   
//             reversedRomanNumeral += "V";
//         }
//         // Values between 10 and 50
//         else if (placeValueNumber < 50 && placeValueNumber > 10){
//             division = placeValueNumber / 10; //4
            
//             for (int i=1; i<=division; i++){
//                 reversedRomanNumeral += "X";
//             }  
//         }
//         // Values between 50 and 100
//         else if (placeValueNumber < 100 && placeValueNumber > 50){
//             remainder = placeValueNumber % 50;

//             for (int i=10; i<=remainder; i=i+10){
//                 reversedRomanNumeral += "X";
//             }
//             reversedRomanNumeral    += "L";
//         }
//         // Values between 100 and 500
//         else if (placeValueNumber < 500 && placeValueNumber > 100){
//             division = placeValueNumber / 100;
            
//             for (int i=1; i<=division; i++){
//                 reversedRomanNumeral += "C";
//             }  
//         }
//         // Values between 500 and 1000
//         else if (placeValueNumber < 1000 && placeValueNumber > 500){
//             remainder = placeValueNumber % 500;
            
//             for (int i=100; i<=remainder; i=i+100){
//                 reversedRomanNumeral += "C";
//             }
//             reversedRomanNumeral += "D";
//         }

//         // cout<<reversedRomanNumeral<<endl;
//     }

//     // Reverse the Roman numeral string since it was built backward
//     for (int i=reversedRomanNumeral.size()-1; i>=0; i--){
//         romanNumeral = romanNumeral + reversedRomanNumeral[i];
//     }

//     // Output the final Roman numeral.
//     cout<<romanNumeral<<endl;

//     return 0;
// }




// In this question we will use a simplified version of the Roman Numerals System to represent
// positive integers.

// The digits in this system are I, V, X, L, C, D and M. Each digit corresponds to a decimal value, as
// showed in the following table:

////////////////////////////////////////////
//   Roman digit : I  V  X  L   C   D   M
// Decimal value : 1  5  10 50 100 500 1000
////////////////////////////////////////////

// A number in the simplified Roman numerals system is a sequence of Roman digits, which follow
// these 2 rules:

// 1. The digits form a monotonically non-increasing sequence. That is the value of each digit is
// less than or equal to the value of the digit that came before it.
// For example, DLXXVI is a monotonically non-increasing sequence of Roman digits, but XIV is
// not.

// 2. There is no limit on the number of times that ‘M’ can appear in the number.
// ‘D’, ‘L’ and ‘V’ can each appear at most one time in the number.
// ‘C’, ‘X’ and ‘I’ can each appear at most four times in the number.
// For example: IIII, XVII and MMMMMMDCCLXXXXVII are legal numbers in our simplified Roman
// numeral system, but IIIII, XIV, VVI and CCXLIII are not.

// Write a program that reads from the user a (decimal) number, and prints it’s representation in
// the simplified Roman numerals system.

// Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
// Enter decimal number:
// 147
// 147 is CXXXXVII