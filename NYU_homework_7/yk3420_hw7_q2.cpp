#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main(){

    int M, outCountDivs, outSumDivs, pair1, pair2;
    cout<<"Enter a positive number >=2 : ";
    cin>>M;
    cout<<endl;

    if (M < 2) {
        cout << "Number must be >= 2" << endl;
        return 0;
    }

    // All the perfect numbers between 2 and M.
    cout<<"The perfect numbers between 2 and "<<M<<": "<<endl;
    bool foundPerfect = false;
    for (int i=2; i<=M; i++){
        if (isPerfect(i)){
            cout<<i<<" ";
            foundPerfect = true;
        }
    }
    if (foundPerfect == false)
        cout << "Not found";
        
    cout << endl;
    cout << endl;

    // All pairs of amicable numbers that are between 2 and M (both numbers must be in the range)
    cout << "The amicable number pairs between 2 and " << M << ":"<<endl;
    bool foundAmicable = false;
    int j=2;
    while (j<=M){
        outCountDivs = 0;
        outSumDivs   = 0;
        pair1 = 0;
        pair2 = 0;

        analyzeDividors(j, outCountDivs, outSumDivs);
        pair1 = outSumDivs;

        analyzeDividors(pair1, outCountDivs, outSumDivs);
        pair2 = outSumDivs;

        if (pair2==j && pair1<pair2 && pair1<=M && pair2<=M){
            cout<<"("<<pair1<<", "<<pair2<<")";
            foundAmicable = true;
            cout<<endl;
        }
        j++;
    }
    if (foundAmicable == false) 
        cout << "Not found" << endl;

    return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
    outCountDivs = 0;
    outSumDivs   = 0;    

    for(int i=1;i<=sqrt(num); i++){
        if (num % i==0){
            // Add first divisor
            outCountDivs++;
            outSumDivs += i;

            // Add second divisor if it's different from the first
            if (i!=num/i){
                outCountDivs++;
                outSumDivs += num/i;            
            }
        }
    }
    // Remove the number itself from count and sum
    outCountDivs--;
    outSumDivs -= num;
}

// Function to check if a number is a perfect number
bool isPerfect(int num) {
    int outCountDivs, outSumDivs;
    analyzeDividors(num, outCountDivs, outSumDivs);

    return outSumDivs == num; // A number is perfect if the sum of its proper divisors equals itself
}
