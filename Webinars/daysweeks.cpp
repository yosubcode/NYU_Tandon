#include <iostream>
using namespace std;


const int daysInaweek = 7;

int main(){

  int totalDays, weeks, days;
 
  cout << "Please type number of days."<< endl;
  cin >> totalDays;
  weeks = totalDays / daysInaweek;
  days  = totalDays % daysInaweek;

  cout << totalDays << " days are " << weeks <<  (weeks<2 ? " week and " : " weeks and ") << days << (days<2 ? " day." : " days.") << endl;


  return 0;

  }