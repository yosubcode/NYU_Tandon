#include <iostream>
#include <string>
using namespace std;

int main(){

    int num;
    cout<<"Enter Pocket number: "<<endl;

    cin>>num;
    if (num==0) {
        cout<<"The color is: green"<<endl;}

    else if ((num <=10 && num >= 1) || (num >=19 && num <=28)) {
        if ((num%2)==0)
            cout<<"The color: black"<<endl;
        else 
            cout<<"The color: red"<<endl;}

    else if ((num >=11 && num <=18) || (num >=29 && num <=36)){
        if ((num%2)==0)
            cout<<"The color: red"<<endl;
        else 
            cout<<"The color: black"<<endl;}

    else
        cout<<"Outside the range of 0 to 36"<<endl;

    return 0;
}