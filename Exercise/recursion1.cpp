#include <iostream>
using namespace std;



int factorial(int num);

int main(){

    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;
    int num = 5;
    int fac = factorial(num);
    cout << num << "! = " << fac << endl;

    return 0;
}

int factorial(int num){
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1) ;
}