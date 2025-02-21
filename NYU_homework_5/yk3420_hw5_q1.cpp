#include <iostream>
using namespace std;

int main(){

    int n, num;

    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;

    num = 0;

    // Loop to generate multiplication table
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            num = i * j;
            cout<<num<<"\t";
        }
        cout<<endl;
    }
    return 0;
}



// Write a program that reads a positive integer n from the user and prints out a n x n
// multiplication table. The columns should be spaced by a tab.
// Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:

// Please	enter	a	positive	integer:
// 10
// 1 2 3 4 5 6 7 8 9 10
// 2 4 6 8 10 12 14 16 18 20
// 3 6 9 12 15 18 21 24 27 30
// 4 8 12 16 20 24 28 32 36 40
// 5 10 15 20 25 30 35 40 45 50
// 6 12 18 24 30 36 42 48 54 60
// 7 14 21 28 35 42 49 56 63 70
// 8 16 24 32 40 48 56 64 72 80
// 9 18 27 36 45 54 63 72 81 90
// 10 20 30 40 50 60 70 80 90 100