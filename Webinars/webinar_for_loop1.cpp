#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main(){

//////////////////////////////////////////////////////////////////////////// Print odd number and no 17.
    // for (int i=1; i <= 19; i=i+2){
    //     if (i==17)
    //         continue;
    //     cout<<i<<endl;
    // }
    // for (int i=1; i <= 19; i++){
    //     if ((i==17) || (i%2==0))
    //         continue;
    //     cout<<i<<endl;

    // }


//////////////////////////////////////////////////////////////////////////// Number into Binary
    // int x = 19;
    // int output;
    // string y="";

    // y = "";

    // for (int i=x; i != 0; i/=2){
    //     if ((i % 2)==1){
    //         y ="1"+ y;}
    //     else {
    //         y ="0"+y;}

    // }
    // cout<<y<<endl;
    
//////////////////////////////////////////////////////////////////////////// Guess Number from 1 to 20
    // int secretNumber;
    // srand (time(NULL));
    // secretNumber= rand() % 20 + 1;

    // int myGuess;

    // cout<<"Guess the number from 1 to 20"<<endl;

    // while (myGuess != secretNumber){
    //     cin>>myGuess;
    //     if (myGuess > secretNumber)
    //         cout<<"Lower!"<<endl;
    //     else if (myGuess < secretNumber)
    //         cout<<"Higher!"<<endl;
    //     else  {
    //         cout<<"You got it!"<<endl;
    //         break;}
    // }

    // for (int i = 0; i< 20; i++){
    //     cin>>myGuess;
    //     if (myGuess > secretNumber)
    //         cout<<"Lower!"<<endl;
    //     else if (myGuess < secretNumber)
    //         cout<<"Higher!"<<endl;
    //     else  {
    //         cout<<"You got it!"<<endl;
    //         break;}
    // }

    return 0;
}