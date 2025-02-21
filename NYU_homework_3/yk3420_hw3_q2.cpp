#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, collegeStatus;
    int graduationYear, currentYear;

    cout<<"Please enter your name: ";
    cin>>name;
    cout<<"Please enter your graduation year: ";
    cin>>graduationYear;
    cout<<"Please enter current year: ";
    cin>>currentYear;
    
    // Assign collegeStatus.
    if (graduationYear == currentYear)
        collegeStatus = "Graduated";
    else if (graduationYear == currentYear + 1)
        collegeStatus = "a Senior";
    else if (graduationYear == currentYear + 2)
        collegeStatus = "a Junior";
    else if (graduationYear == currentYear + 3)
        collegeStatus = "a Sophomore";
    else if (graduationYear == currentYear + 4)
        collegeStatus = "a Freshman";
    else if (graduationYear < currentYear)
        collegeStatus = "typing an invalid year";
    else
        collegeStatus = "not in college yet";

    // Print the calculated collegeStatus
    cout<<name<<", you are "<<collegeStatus<<endl;
    return 0;
}




// Question	2:
// Write	a	program	that:

// • Asks	the	user	for	their	name.
// • Asks	the	user	to	input	their	graduation	year.
// • Asks	the	user	to	input	the	current	year.

// Assume	the	student	is	in	a	four-year	undergraduate	program.	Display	the	current	collegeStatus	the	
// student	is	in.	Possible	collegeStatus	include:	not	in	college	yet,	freshman,	sophomore,	junior,	senior,	
// graduated.	

// Note:	If	graduation	year	equals	to	current	year,	collegeStatus	is	‘Graduated’;	if	graduation	year	is	
// four	years	after	current	year,	collegeStatus	is	‘Freshman’,	etc.

// Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:

// Please	enter	your	name: Jessica
// Please	enter	your	graduation	year: 2019
// Please	enter	current	year: 2015
// Jessica,	you	are	a	Freshman