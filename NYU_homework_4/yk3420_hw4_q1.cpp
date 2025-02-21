#include <iostream>
using namespace std;

int main(){
    int n;

    // a) While loop version
    cout<<"Section a)"<<endl;
    cout<<"Please enter a positive integer: ";
    cin>>n;

    // Initialize number of even number = 0 and positive number = 1.
    int countEvenNumber = 0;
    int positiveNumber  = 1;

    if (n > 0){
        while (n > countEvenNumber){
            if (positiveNumber%2==0){
                cout<<positiveNumber<<endl;
                countEvenNumber++;
            }
            positiveNumber++;
        }
    }
    else 
        cout<<n<<" is not a positive integer. Please enter a positive integer"<<endl;


    // b) for loop version
    cout<<"\nSection b)"<<endl;
    cout<<"Please enter a positive integer: ";
    cin>>n;

    // Initialize number of even number = 0.
    countEvenNumber = 0;

    if (n > 0){
        for (int i=1; countEvenNumber < n; i++){
            if (i%2==0){
                cout<<i<<endl;
                countEvenNumber++;
            }
        }
    }
    else
        cout<<n<<" is not a positive integer. Please enter a positive integer"<<endl;

    return 0;
}



// Write	two versions of	a	program	that	reads	a	positive	integer	n,	and	prints	the	first	n even	
// numbers.	
// a) In	the	first,	use	a	while loop.	
// b) In	the	second,	use	a	for loop.	

// Each	section	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
// Please	enter	a	positive	integer: 3
// 2
// 4
// 6