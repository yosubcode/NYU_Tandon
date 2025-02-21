#include <iostream>
using namespace std;

int main(){
    int n, evenNumber, oddNumber, remainder;
    bool moreEvenNumber;

    cout<<"Enter a positive integer: ";
    cin>>n;
    
    // If the entered number is less than or equal to 0, print a message and exit
    if (n <= 0){
        cout<<"Enter a positive integer!";
        return 0;
    }

    // Iterate through all numbers from 1 to n-1
    for (int i=1; i<n; i++){

        // Counts even and odd digits for each number
        evenNumber = 0;
        oddNumber = 0;

        // Create a temporary variable to hold the current number
        int num = i;
        
        // While loop to check if each digit is odd or even
        // Update the counter on evenNumber or oddNumber.
        while (num != 0) {
            remainder = num%10;
            if (remainder%2 == 1){
                oddNumber += 1;
            }
            else if (remainder%2 == 0){
                evenNumber += 1;
            }
            // Remove the last digit.
            num = num/10;
        }

        // check if the current number has more even digits than odd digits
        moreEvenNumber = evenNumber > oddNumber;    

        // If true, print the number
        if (moreEvenNumber == true)
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