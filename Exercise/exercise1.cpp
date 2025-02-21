#include <iostream>
using namespace std;

int main(){

    int quarters, dimes, nickels, pennies;

    cout<<"Please enter number of coins:"<<endl;
    cout<<"# of quarters:";
    cin>>quarters;
    cout<<"# of dimes:";
    cin>>dimes;
    cout<<"# of nickels:";
    cin>>nickels;
    cout<<"# of pennies:";
    cin>>pennies;

    int totalAmountInCents, totalDollars, totalCents;
    totalAmountInCents = quarters*25 + dimes*10 + nickels*5 + pennies*1;
    totalDollars     = totalAmountInCents / 100;
    totalCents       = totalAmountInCents % 100;

    cout<<"The total is "<<totalDollars<<" dollars and "<<totalCents<<" cents";

    return 0;
}