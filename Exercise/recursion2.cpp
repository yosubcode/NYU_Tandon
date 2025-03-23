#include <iostream>
using namespace std;



void write_vertical(int n);

int main(){

    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;

    write_vertical(175);
    // cout << num << "! = " << fac << endl;

    return 0;
}

void write_vertical(int n){
    if (n<10){
        cout << n << endl;
    }
    else{
        write_vertical(n/10);
        cout << (n % 10) << endl;
    }
}