#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIMES   = 10;
const int NICKELS = 5;
const int PENNIES = 1;

int main(){
    int dollars, cents;
    int totalAmountInCents, remainingAmountInCents;
    int totalQuarters, totalDimes, totalNickels, totalPennies;

    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollars>>cents;
    
    // Convert dollars to cents and calculate the total amount in cents
    totalAmountInCents     = (dollars*100) + cents;
    remainingAmountInCents = totalAmountInCents;

    // Calculate the maximum number of quarters and remaining amount
    totalQuarters          = totalAmountInCents / QUARTER; 
    remainingAmountInCents = totalAmountInCents % QUARTER;

    // Calculate the maximum number of dimes and remaining amount
    totalDimes             = remainingAmountInCents / DIMES;
    remainingAmountInCents = remainingAmountInCents % DIMES;

    // Calculate the maximum number of nickels and remaining amount
    totalNickels           = remainingAmountInCents / NICKELS;
    remainingAmountInCents = remainingAmountInCents % NICKELS;

    // Calculate the maximum number of pennis and there will be no remaining amount left.
    totalPennies           = remainingAmountInCents / PENNIES;

    cout<<dollars<<" dollars and "<<cents<<" cents are:\n";
    cout<<totalQuarters<<" quarters, "<<totalDimes<<" dimes, "<<totalNickels<<" nickels and "<<totalPennies<<" pennies "<<endl;

    return 0;
}