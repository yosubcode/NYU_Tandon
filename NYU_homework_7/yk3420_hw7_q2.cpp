#include <iostream>
#include <string>
using namespace std;

int main(){
    printYearCalender(2025, 3);
    return 0;
}

// Functions
int printMonthCalender(int numOfDays, int startingDay){
    cout<<"Mon"<<"\t"<<"Tue"<<"\t"<<"Wed"<<"\t"<<"Thr"<<"\t"<<"Fri"<<"\t"<<"Sat"<<"\t"<<"Sun"<<endl;

    for (int i=1; i<startingDay; i++)
        cout<<"\t";

    for (int i=1; i<=numOfDays; i++){
        cout<<i<<"\t";

        if ((i+startingDay-1)%7==0)
            cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    int finishingDay = (numOfDays%7) + startingDay-1;
    if (finishingDay==0)
        return 7;
    else if (finishingDay>0 && finishingDay<=7)
        return finishingDay;
    else
        return finishingDay-7;
}

int leapYear(int year){
    if (year%4 == 0)
        return 1;
    else
        return 0;
}




