#include <iostream>
using namespace std;

int main(){

    int input, evenOrOdd;

    cout<<"Enter an integer to check if it is even or odd: "<<endl;
    cin>>input;

    evenOrOdd = input % 2;
    if (evenOrOdd == 0)
        cout<<"The integer number you entered is EVEN:"<<endl;
    else 
        cout<<"The integer number you entered is ODD:"<<endl;

    return 0 ;
}

