#include <iostream>
#include <string>
using namespace std;

int main(){
    int assignmentMarks, midtermExamMarks, finalExamMarks, bonusMarks;
    double finalMarks;
    string grade;

    cout<<"Enter your assignments score from 1 to 100: ";
    cin>>assignmentMarks;
    cout<<"Enter your midterm exam score from 1 to 100: ";
    cin>>midtermExamMarks;
    cout<<"Enter your final exam score from 1 to 100: ";
    cin>>finalExamMarks;

    bonusMarks = 0;
    if (assignmentMarks>=60) 
        bonusMarks += 5;
    if (midtermExamMarks==100 || finalExamMarks==100)
        bonusMarks += 3;

    finalMarks = assignmentMarks*0.4 + midtermExamMarks*0.3 + finalExamMarks*0.3 + bonusMarks;


    if (finalMarks >= 90)
        grade = "A";
    else if ((finalMarks >=80) && (finalMarks <= 89))
        grade = "B";
    else if ((finalMarks >=70) && (finalMarks <= 79))
        grade = "C";
    else if ((finalMarks >=60) && (finalMarks <= 69))
        grade = "D";
    else if (finalMarks <=59)
        grade = "F";

    cout<<"\n";
    cout<<"Assignment score is "<<assignmentMarks<<endl;
    cout<<"Your midterm exam score is "<<midtermExamMarks<<endl;
    cout<<"Your final exam score is "<<finalExamMarks<<endl;
    cout<<"Your bonus score is "<<bonusMarks<<endl;
    cout<<"=========================================\n";
    cout<<"Your Final score is "<<finalMarks<<endl;
    cout<<"Your Final Grade is "<<grade<<endl;

    // if (marks >= 90) {
    //     grade = "Grade A";
    // }
    // else if (marks <= 89 && marks >= 80) {
    //     grade = "Grade B";
    // }
    // else if (marks <= 79 && marks >= 70) {
    //     grade = "Grade C";
    // }
    // else if (marks <= 69 && marks >= 60) {
    //     grade = "Grade D";
    // }
    // else if (marks <= 59) {
    //     grade = "Grade F";
    // }

    //cout<<"Your grade is "<<grade<<endl;

    return 0;
}