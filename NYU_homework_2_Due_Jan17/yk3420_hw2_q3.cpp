#include <iostream>
using namespace std;

int HOURS_PER_DAY    = 24;
int MINUTES_PER_HOUR = 60;

int main(){
    int daysJohnWorked, hoursJohnWorked, minutesJohnWorked;
    int daysBillWorked, hoursBillWorked, minutesBillWorked;
    int totalJohnWorked, totalBillWorked, totalBothWorked;
    int remainingWorked, totalWorkedInDays, totalWorkedInHours, totalWorkedInMinutes;

    cout<<"Please enter the number of days John has worked: ";
    cin >>daysJohnWorked;
    cout<<"Please enter the number of hours John has worked: ";
    cin>>hoursJohnWorked;
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>minutesJohnWorked;

    cout<<"\n";
    cout<<"Please enter the number of days Bill has worked: ";
    cin >>daysBillWorked;
    cout<<"Please enter the number of hours Bill has worked: ";
    cin >>hoursBillWorked;
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin >>minutesBillWorked;
    cout<<"\n";
    
    // Convert totalDays and totalHours to minutes and calculate how much minutes total each worked.
    totalJohnWorked = (daysJohnWorked*HOURS_PER_DAY*MINUTES_PER_HOUR) + (hoursJohnWorked*MINUTES_PER_HOUR) + minutesJohnWorked;
    totalBillWorked = (daysBillWorked*HOURS_PER_DAY*MINUTES_PER_HOUR) + (hoursBillWorked*MINUTES_PER_HOUR) + minutesBillWorked;
    
    // Calculate the total minutes of work by both John and Bill.
    totalBothWorked = totalJohnWorked + totalBillWorked;
    remainingWorked = totalBothWorked;

    // Calculate the maximum number of Days and remaining minutes
    totalWorkedInDays = remainingWorked/(MINUTES_PER_HOUR*HOURS_PER_DAY);
    remainingWorked %=(MINUTES_PER_HOUR*HOURS_PER_DAY);

    // Calculate the maximum number of Hours and remaining minutes
    totalWorkedInHours = remainingWorked/MINUTES_PER_HOUR;
    remainingWorked %= MINUTES_PER_HOUR;

    // Calculate the remaining minutes
    totalWorkedInMinutes = remainingWorked;


    cout<<"The total time both of them worked together is: ";
    cout<<totalWorkedInDays<<" days, "<<totalWorkedInHours<<" hours and "<<totalWorkedInMinutes<<" minutes."<<endl;

    return 0;
}