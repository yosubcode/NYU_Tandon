#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
// Generates a calendar for a given month.  
// - numOfDays   : The total number of days in the month (28, 29, 30, or 31).  
// - startingDay : The day on which the month begins (1 = Monday, ..., 7 = Sunday).  
// - Returns     : The day of the last day of the month (1 = Monday, ..., 7 = Sunday). 

int leapYear(int year);
// Determines whether the given year is a leap year.  
// - year: The year to check.  
// - Returns: 1 if the year is a leap year, otherwise 0.  

void printYearCalender(int year, int startingDay);
// Prints a full calendar for the specified year.  
// - year: The year for which the calendar should be generated.  
// - startingDay: The day on which January 1st falls (1 = Monday, ..., 7 = Sunday).


int main(){

    int year, day;

    cout<<"Enter the year for which you want to display the calendar: ";
    cin>>year;
    cout<<"Enter the day for January 1st (1 = Monday, 2 = Tuesday, ..., 7 = Sunday): ";
    cin>>day;

    printYearCalender(year, day);

    return 0;
}

// Functions
int printMonthCalender(int numOfDays, int startingDay){
    cout<<"Mon"<<"\t"<<"Tue"<<"\t"<<"Wed"<<"\t"<<"Thr"<<"\t"<<"Fri"<<"\t"<<"Sat"<<"\t"<<"Sun"<<endl;

    for (int i=1; i<startingDay; i++)
        cout<<"\t";

    for (int j=1; j<=numOfDays; j++){
        cout<<j<<"\t";

        if ((j+startingDay-1)%7==0)
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
    if ((year%4 == 0 && year%100 != 0) || (year%400 == 0))
        return 1;
    else
        return 0;
}

void printYearCalender(int year, int startingDay){
    cout<<"January "<<year<<endl;
    int January   = printMonthCalender(31, startingDay);
    cout<<"February "<<year<<endl;
    int February  = printMonthCalender(leapYear(year)==1 ? 29 : 28, January+1==8 ? 1 : January+1);
    cout<<"March "<<year<<endl;
    int March     = printMonthCalender(31, February+1==8 ? 1 : February+1);
    cout<<"April "<<year<<endl;
    int April     = printMonthCalender(30, March+1==8 ? 1 : March+1);
    cout<<"May "<<year<<endl;
    int May       = printMonthCalender(31, April+1==8 ? 1 : April+1);
    cout<<"June "<<year<<endl;
    int June      = printMonthCalender(30, May+1==8 ? 1 : May+1);
    cout<<"July "<<year<<endl;
    int July      = printMonthCalender(31, June+1==8 ? 1 : June+1);
    cout<<"August "<<year<<endl;
    int August    = printMonthCalender(31, July+1==8 ? 1 : July+1);
    cout<<"September "<<year<<endl;
    int September = printMonthCalender(30, August+1==8 ? 1 : August+1);
    cout<<"October "<<year<<endl;
    int October   = printMonthCalender(31, September+1==8 ? 1 : September+1);
    cout<<"November "<<year<<endl;
    int November  = printMonthCalender(30, October+1==8 ? 1 : October+1);
    cout<<"December "<<year<<endl;
    int December  = printMonthCalender(31, November+1==8 ? 1 : November+1);
}


// Question 1:
// a. Implement	a	function:
// int printMonthCalender(int numOfDays, int startingDay)

// This	function	is	given	two	parameters:	
// • numOfDays - The	number	of	days	in	the	month	
// • startingDay – a	number	1-7	that	represents	the	day	in the	week	of	the	first	day	
// in	that	month (1	for	Monday,	2	for	Tuesday,	3	for	Wednesday,	etc.).	

// The	function	should:
// • Print	a	formatted	monthly	calendar	of	that	month
// • Return	a	number	1-7	that	represents	the	day	in the	week	of	the	last	day in	that month.

// Formatting	Notes:	
// • The	output	should	include	a	header	line	with	the	days’ names.	
// • Columns should	be	spaced	by	a	Tab.

// Example: when	calling	printMonthCalender(31, 4)it	should	return	6,	and	should print:	

// Mon Tue Wed Thr Fri Sat Sun
// 1 2 3 4
// 5 6 7 8 9 10 11
// 12 13 14 15 16 17 18
// 19 20 21 22 23 24 25
// 26 27 28 29 30 31


// b. A	method	for	determining	if	a	year	is	a	leap	year	in	the	Gregorian	calendar	system	is	to	
// check	if	it	is	divisible	by	4	but	not	by	100,	unless	it	is	also	divisible	by	400.	
// For	example,	1896,	1904,	and	2000	were	leap	years	but	1900	was	not.	

// Write a function that takes in a year as input and return true if the year is a leap year, return false otherwise.
// Note: background on leap year https://en.wikipedia.org/wiki/Leap_year


// c. Implement	a	function:
// void printYearCalender(int year, int startingDay)
// This	function	is	given	two	parameters:	
// • year – an	integer	that	represents	a	year	(e.g.	2016)
// • startingDay – a number 1-7 that represents the day in the	week of	1/1	in	that year (1 for Monday, 2 for Tuesday,	3 for Wednesday, etc.).		

// The	function	should use	the	functions	from	sections	(a)	and	(b)	in	order	to	print	a formatted	yearly calendar	of	that	year.
// Formatting	Note:	As	the	header	for	each	month	you	should	print	the	months’	name followed	by	the	year	(e.g.	March	2016).	

// Example: Appendix A	shows	the	expected	output	of	the	call	
// printYearCalender(2016, 5).


// d. Write program that interacts with the user and your function in (c).	


