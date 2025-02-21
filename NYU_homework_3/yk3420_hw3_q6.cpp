#include <iostream>
#include <string>
using namespace std;

const double RATE_WEEKDAYS_8AM_TO_6PM     = 0.4;  // cents per minute on Weekdays, call between 8:00 am and 6:00 pm
const double RATE_WEEKDAYS_NOT_8AM_TO_6PM = 0.25; // cents per minute on Weekdays, call before 8:00 am or after 6:00 pm
const double RATE_WEEKENDS_ANYTIME        = 0.15; // cents per minute on Saturday or Sunday at anytime

int main(){
    string day;
    double costCall;
    int timeStartedHour, timeStartedMinute, callLength;

    cout<<"Enter the day of the call (Mo, Tu, We, Th, Fr, Sa, Su): ";
    cin>>day;

    // Determine cost of the call based on the day of the call
    // For Saturday and Sunday, only ask for the day because the cost is the same at anytime.
    if (day=="Sa" || day=="Su") {
        cout<<"Enter the length of the call in minutes (eg. 35 for 35 minutes): ";
        cin>>callLength;
        costCall = callLength * RATE_WEEKENDS_ANYTIME;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<"The cost of the call is $"<<costCall<<endl;
    }
    else if (day=="Mo" || day=="Tu" || day=="We" || day=="Th" || day=="Fr"){
        cout<<"Enter the time of the call started in 24-hour notation, separated by a space (eg. 13 30 for 1:30pm): ";
        cin>>timeStartedHour>>timeStartedMinute;
        cout<<"Enter the length of the call in minutes (eg. 35 for 35 minutes): ";
        cin>>callLength;

        // Determine cost of the call based on the time of the call
        if (timeStartedHour >=8 && timeStartedHour < 18)
            costCall = callLength * RATE_WEEKDAYS_8AM_TO_6PM;
        else 
            costCall = callLength * RATE_WEEKDAYS_NOT_8AM_TO_6PM;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<"The cost of the call is $"<<costCall<<endl;
    }
    else {
        cout<<"Invalid day"<<endl;
    }

    return 0;
}