#include <iostream>
using namespace std;



void recursive(int n);

int main(){

    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;

    recursive(1234);
    // cout << num << "! = " << fac << endl;

    return 0;
}

void recursive(int n){
    if (n/10 == 0){
        cout << n%10;
    }
    else{
        recursive(n/10);  // function 순서에 따라 달라짐 
        cout << n%10;
    }
}


// void recursive(int n){
//     if (n/10 == 0){
//         cout << n%10;
//     }
//     else{
//         cout << n%10;     // function 순서에 따라 달라짐
//         recursive(n/10);

//     }
// }