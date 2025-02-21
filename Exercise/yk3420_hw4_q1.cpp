#include <iostream>
using namespace std;

int main(){
    int n;

    // a) While loop version
    cout<<"Section a)"<<endl;
    cout<<"Please enter a positive integer: ";
    cin>>n;

    int evenNumberCount = 0;
    int num = 1;

    if (n > 0){
        while (evenNumberCount < n){
            if (num%2 == 0){
                cout<<num<<endl;
                evenNumberCount += 1;
            }
            num += 1;
        }
    }
    else 
        cout<<n<<" is not a positive integer. Please enter a positive integer"<<endl;


    // b) for loop version
    cout<<"\nSection b)"<<endl;
    cout<<"Please enter a positive integer: ";
    cin>>n;

    evenNumberCount = 0;

    if (n > 0){
        for (int i=1; evenNumberCount < n; i++){
            if (i%2 == 0){
                evenNumberCount += 1;
                cout<<i<<endl;
            }
        }
    }
    else
        cout<<n<<" is not a positive integer. Please enter a positive integer"<<endl;

    return 0;
}

// Write	two versions of	a	program	that	reads	a	positive	integer	n,	and	prints	the	first	n even numbers.	
// a) In	the	first,	use	a	while loop.	
// b) In	the	second,	use	a	for loop.	

// Each	section	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
// Please	enter	a	positive	integer: 3
// 2
// 4
// 6