#include <iostream>
using namespace std;

int main(){

    int n = 80;

    int placeValue, remainder, division, countEven, countOdd, num;

    for (int i=1; i<n; i++){ //i=15
        countEven = 0; // 
        countOdd  = 0; // 1
        num = i;

        while(num > 0){ //num = 15
            placeValue = num % 10; // 1
            remainder = placeValue % 2; 

            if (remainder == 0)
                countEven+=1;
            else   
                countOdd+=1;
            num /=10;
        }

        if (countEven > countOdd)
            cout<<i<<endl;

        }

    return 0;
}

// Write	a	program	that	asks	the user	to	input	a	positive	integer	n,	and	print	all	of	the	numbers	
// from	1	to	n that	have	more	even	digits	than	odd	digits.
// For	example,	if	n=30,	the	program	should	print:
// 2
// 4
// 6
// 8
// 20
// 22
// 24
// 26
// 28
