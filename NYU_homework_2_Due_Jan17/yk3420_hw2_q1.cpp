#include <iostream>
using namespace std;

const double QUARTER = 0.25;
const double DIMES   = 0.1;
const double NICKELS = 0.05;
const double PENNIES = 0.01;

int main(){
    double quarters, dimes, nickels, pennies;
    double totalAmount;
    int dollarAmount, centAmount;

    cout<<"Please enter number of coins:"<<endl;
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickels: ";
    cin>>nickels;
    cout<<"# of pennies: ";
    cin>>pennies;

    totalAmount  = quarters*QUARTER + dimes*DIMES + nickels*NICKELS + pennies*PENNIES;
    dollarAmount = int(totalAmount*100) / 100;
    centAmount   = int(totalAmount*100) % 100;

    cout<<"The total is "<<dollarAmount<<" dollars and "<<centAmount<<" cents."<<endl;

    return 0;
}   