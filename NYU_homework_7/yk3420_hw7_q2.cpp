#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
bool isPrimeNumber(int num);

int main(){

    int M, outCountDivs, outSumDivs, pair1, pair2;
    cout<<"Enter a positive number >=2 : ";
    cin>>M;
    cout<<endl;

    // All the perfect numbers between 2 and M.
    int i=2;
    while (true){
        int primeMersenne = pow(2,i-1)*(pow(2,i)-1); // Mersenne primes

        if (primeMersenne > M)
            break;
        if (isPerfect(primeMersenne) && isPrimeNumber(i))
            cout<<"The perfect numbers between 2 and "<<M<<": "<<primeMersenne<<endl;
        i++;
    }
    cout<<endl;

    // All pairs of amicable numbers that are between 2 and M (both numbers must be in the range)
    int j=2;
    while (j<=M){ // && isEvenNumber(j)==true && isPrimeNumber(j)==true
        outCountDivs = 0;
        outSumDivs   = 0;
        pair1 = 0;
        pair2 = 0;
        // int p = 3 * pow(2, j-1)-1;
        // int q = 3 * pow(2, j)-1;
        // int r = 9 * pow(2, 2*j-1)-1;

        // int pair_1 = pow(2,j)*p*q;
        // int pair_2 = pow(2,j)*r;

        // if (pair_1>M || pair_2>M)
        //     break;
        
        // if (isPrimeNumber(p)==true && isPrimeNumber(q)==true && isPrimeNumber(r)==true){


        analyzeDividors(j, outCountDivs, outSumDivs);
        pair1 = outSumDivs;

        analyzeDividors(pair1, outCountDivs, outSumDivs);
        pair2 = outSumDivs;

        if (pair2==j && pair1<pair2 && pair1<=M && pair2<=M){
            cout<<"("<<pair1<<", "<<pair2<<"), are pairs of amicable numbers.";
            cout<<endl;
        }
        j++;
    }
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

bool isPrimeNumber(int num){
    if (num <= 1) {
        return false; 
    }
    if (num == 2) {
        return true; 
    }
    if (num % 2 == 0) {
        return false;
    }

    for (int i=3; i<=sqrt(num); i++){
        if (num % i == 0)
            return false;
    }
    return true;
}

// bool isEvenNumber(int num){
//     return num % 2 == 0;
// }