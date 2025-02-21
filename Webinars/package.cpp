#include <iostream>
using namespace std;

int main(){

    double amount, disAmount;
    int quantity;

    cout<<"Enter the quantity: "<<endl;
    cin>>quantity;
    amount = 99*quantity;

    if (quantity >=10 && quantity <=19){
        disAmount = amount - (amount * 0.1) ; 
        cout<<"Discount: 10%"<<endl;
        cout<<disAmount<<endl;
    }
    else if (quantity >=20 && quantity <=49){
        disAmount = amount - (amount * 0.2) ; 
        cout<<"Discount: 20%"<<endl;
        cout<<disAmount<<endl;
    }
    else if (quantity >=50 && quantity <=99){
        disAmount = amount - (amount * 0.3) ; 
        cout<<"Discount: 30%"<<endl;
        cout<<disAmount<<endl;
    }
    else if (quantity >=100 ){
        disAmount = amount - (amount * 0.4) ; 
        cout<<"Discount: 40%"<<endl;
        cout<<disAmount<<endl;
    }





    return 0;
}