#include <iostream>
using namespace std;

int main (){
    int input1, input2;

    cout<<"Please enter two positive integers, separated by a space:"<<endl;
    cin>>input1>>input2;

    cout<<input1<<" + "<<input2<<" = "<<input1+input2<<endl;
    cout<<input1<<" - "<<input2<<" = "<<input1-input2<<endl;
    cout<<input1<<" * "<<input2<<" = "<<input1*input2<<endl;
    cout<<input1<<" / "<<input2<<" = "<<double(input1)/double(input2)<<endl;
    cout<<input1<<" div "<<input2<<" = "<<input1/input2<<endl;
    cout<<input1<<" mod "<<input2<<" = "<<input1%input2<<endl;

    return 0;
}