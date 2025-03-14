#include <iostream>
using namespace std;

void modify(int* ptr, int& ref) {
    *ptr += 5;
    ref += 10;
}

int main() {
    int a = 10;
    int b = 20;
    int* p = &a;
    int& r = b;

    modify(p, r);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "*p: " << *p << endl;
    cout << "r: " << r << endl;

    cout<<endl;
    p = &b;
    *p *= 2;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "*p: " << *p << endl;
    cout << "r: " << r << endl;

    return 0;
}
