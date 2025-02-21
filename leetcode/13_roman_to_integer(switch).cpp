#include <iostream>
#include <string>
using namespace std;

int main(){

    string romanNumeral;
    int integer;

    cout<<"Enter roman numerals : ";
    cin>>romanNumeral; //
    integer = 0; // 

    
    for (int i=0; i<romanNumeral.length(); i++){

        switch(romanNumeral[i]){
            case 'M':
                integer += 1000;
                break;
            case 'D':
                integer += 500;
                break;
            case 'C':
                switch(romanNumeral[i+1]){
                    case 'M':
                        integer += 900;
                        i++;
                        break;
                    case 'D':
                        integer += 400;
                        i++;
                        break;
                    default:
                        integer += 100;
                        break;
                }
                break;
            case 'L':
                integer += 50;
                break;
            case 'X':
                switch(romanNumeral[i+1]){
                    case 'C':
                        integer += 90;
                        i++;
                        break;
                    case 'L':
                        integer += 40;
                        i++;
                        break;
                    default:
                        integer += 10;
                        break;
                }
                break;
            case 'V':
                integer += 5;
                break;
            case 'I':
                switch(romanNumeral[i+1]){
                    case 'X':
                        integer += 9;
                        i++;
                        break;
                    case 'V':
                        integer += 4;
                        i++;
                        break;
                    default:
                        integer += 1;
                        break;
                }
                break;
        }

    }

    cout<<"Roman numeral "<<romanNumeral<<" is "<<integer<<endl;

    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//     string romanNumeral;
//     int integer;

//     cout<<"Enter roman numerals : ";
//     cin>>romanNumeral; // MCMXCIV
//     integer = 0; // 1000 + 900 + 90 + 4

//     for (int i=0; i<romanNumeral.length(); i++){ // I i=7

//         switch (romanNumeral[i]){
//             case 'M':
//                 integer += 1000;
//                 break;
//             case 'D':
//                 integer += 500;
//                 break;
//             case 'C':
//                 switch (romanNumeral[i+1]){
//                     case 'M':
//                         integer +=900;
//                         i++;
//                         break;
//                     case 'D':
//                         integer +=400;
//                         i++;
//                         break;
//                     default :
//                         integer +=100;
//                         break;
//                     }
//                 break;
//             case 'L':
//                 integer += 50;
//                 break;
//             case 'X':
//                 switch (romanNumeral[i+1]){
//                     case 'C':
//                         integer += 90;
//                         i++;
//                         break;
//                     case 'L':
//                         integer += 40;
//                         i++;
//                         break;
//                     default :
//                         integer +=10;
//                 }
//                 break;
//             case 'V':
//                 integer += 5;
//                 break;
//             case 'I':
//                 switch (romanNumeral[i+1]){
//                     case 'X':
//                         integer += 9;
//                         i++;
//                         break;
//                     case 'V':
//                         integer +=4;
//                         i++;
//                         break;
//                     default :
//                         integer += 1;
//                 }
//                 break;
//             }
//         }

//     cout<<"Roman numeral "<<romanNumeral<<" is "<<integer<<endl;


//     return 0;
// }