#include <iostream>
using namespace std;

int main(){


    int item1, item2;
    char clubCard;
    double taxRate, basePrice, priceAfterDiscount, totalPrice;

    cout<<"Enter price of first item: ";
    cin>>item1;
    cout<<"Enter price of second item: ";
    cin>>item2;
    cout<<"Does customer have a club card? (Y/N)";
    cin>>clubCard;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;

    basePrice = item1 + item2; // int
    priceAfterDiscount = 0;

    if (item1 <= item2) {
        priceAfterDiscount = (double)item2 + (double)(item1*0.5); // int - int
        if (clubCard=='Y' || clubCard=='y')
            priceAfterDiscount -= priceAfterDiscount*0.1;
        else
            priceAfterDiscount;
        }
    else {
        priceAfterDiscount = (double)item1 + (double)(item2*0.5); // int - int
        if (clubCard=='Y' || clubCard=='y')
            priceAfterDiscount -= priceAfterDiscount*0.1;
        else
            priceAfterDiscount;
        }

    totalPrice = priceAfterDiscount + (priceAfterDiscount*taxRate*0.01);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout<<"Base price: "<<basePrice<<endl;
    cout<<"Price after discounts: "<<priceAfterDiscount<<endl;

    cout.precision(5);
    cout<<"Total price: "<<totalPrice<<endl;






    return 0;
}