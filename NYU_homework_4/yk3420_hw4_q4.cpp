#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    int lengthOfSequence;
    double product, sequence, geometricMean;
    
    // Version a)
    // First read the length of the sequence.
    cout<<"Section a)"<<endl;
    cout<<"Please enter the length of the sequence: ";
    cin>>lengthOfSequence;
    cout<<"Please enter your sequence: "<<endl;

    product = 1;
    for (int i=0; i<lengthOfSequence; i++){
        cin>>sequence;

        product *= sequence;
    
    geometricMean = pow(product, 1.0/lengthOfSequence);

    }
    cout.precision(5);
    cout<<"The geometric mean is: "<<geometricMean<<endl;
    cout<<endl;

    // Version b)
    // Keep reading the numbers until -1 is entered.
    cout<<"Section b)"<<endl;
    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: "<<endl;
    
    product = 1;
    lengthOfSequence = 0;
    while (true){
        cin>>sequence;
        if (sequence == -1)
            break;
        else 
            lengthOfSequence += 1;
            product *= sequence;
    }

    cout.precision(5);
    geometricMean = pow(product, 1.0/lengthOfSequence);
    cout<<"The geometric mean is: "<<geometricMean<<endl;

    return 0;
}