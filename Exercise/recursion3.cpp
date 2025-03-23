#include <iostream>
using namespace std;



void recursive(int n);

int main(){

    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;

    recursive(10);
    // cout << num << "! = " << fac << endl;

    return 0;
}

void recursive(int n){
    if (n<=1 && n>0){
        cout << "*";
    }
    else{
        cout << "*";
        recursive(n-1);
    }
}