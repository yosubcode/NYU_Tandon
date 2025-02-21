#include <iostream>
using namespace std;

int main(){

// 사용자로부터 점수를 입력받습니다.
//점수에 따라 A, B, C, D, F 학점을 출력합니다.
//예외처리를 통해 점수가 0~100 사이인지 확인합니다.
  
  
  
    int score;
    char grade;

    cout<<"Type the grade from 0 to 100 : "<<endl;
    cin>>score;

    if (score <=70 && score>=60) {
        grade = 'D';
        cout<<"Your grade is : "<<grade<<endl;}

    else if (score <=80 && score>=70) {
        grade = 'C';
        cout<<"Your grade is : "<<grade<<endl;}

    else if (score <=90 && score>=80){ 
        grade = 'B';
        cout<<"Your grade is : "<<grade<<endl;}

    else if (score <=100 && score>=90){
        grade = 'A';
        cout<<"Your grade is : "<<grade<<endl;}

    else if (score < 70)
        grade = 'F';
        cout<<"Your grade is : "<<grade<<endl;



    return 0;
}