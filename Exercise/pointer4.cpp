#include <iostream>
using namespace std;

void modifyValues(int* ptr, int& ref){
    *ptr += 10;
    ref *= 2;
}

int main(){

   int a=5, b=8;
   cout<<"Enter number:";

   cout<< " Before function call;  "<<endl;
   cout<< "a = "<<a<<", b = "<<b<<endl;

   modifyValues(&a, b);
   cout<< " After function call;  "<<endl;
   cout<< "a = "<<a<<", b = "<<b<<endl;

    return 0;
}