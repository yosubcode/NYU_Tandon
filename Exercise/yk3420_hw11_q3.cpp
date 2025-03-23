#include <iostream>
using namespace std;

int minInArray1(int arr[], int arrSize);
int minInArray2(int arr[], int low, int high);

int main() {

    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;

    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;

    res1 = minInArray1(arr, 10);
    res2 = minInArray2(arr, 0, 9);
    cout << res1 << " " << res2 << endl; //should both be -9

    res3 = minInArray2(arr, 2, 5);
    res4 = minInArray1(arr + 2, 4); //arr+2 is equivalent to &(arr[2])
    cout << res3 << " " << res4 << endl; //should both be 3
    
    return 0;
}

// Version 1: Using array and size
int minInArray1(int arr[], int arrSize) {
    // Base case: if only one element, return it
    if (arrSize == 1) {
        return arr[0];
    }
    
    // Recursive case: compare first element with minimum of rest
    int minRest = minInArray1(arr + 1, arrSize - 1);
    return (arr[0] < minRest) ? arr[0] : minRest;
}

// Version 2: Using array and low/high indices
int minInArray2(int arr[], int low, int high) {
    // Base case: if low and high are same, return that element
    if (low == high) {
        return arr[low];
    }
    
    // Recursive case: compare element at low with minimum of rest
    int minRest = minInArray2(arr, low + 1, high);
    return (arr[low] < minRest) ? arr[low] : minRest;
}


// Write two recursive versions of the function minInArray. The function will be given a
// sequence of elements and should return the minimum value in that sequence. The two versions
// differ from one another in the technique we use to pass the sequence to the function.

// In version 1 – The prototype of the function should be:
// int minInArray1(int arr[], int arrSize)

// Here, the function is given arr, an array of integers, and its logical size, arrSize.
// The function should find the minimum value out of all the elements in positions:
// 0, 1, 2, …, arrSize-1.


// In version 2 – The prototype of the function should be:
// int minInArray2(int arr[], int low, int high)
// Here, the function is given arr, an array of integers, and two additional indices: low and high
// (low ≤ high), which indicate the range of indices that need to be considered.
// The function should find the minimum value out of all the elements in positions:
// low, low+1, …, high.

// Use the following main to check your program:
// int main() {
//     int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
//     int res1, res2, res3, res4;

//     res1 = minInArray1(arr, 10);
//     res2 = minInArray2(arr, 0, 9);
//     cout<<res1<<” “<<res2<<endl; //should both be -9

//     res3 = minInArray2(arr, 2, 5);
//     res4 = minInArray1(arr+2, 4); //arr+2 is equivalent to &(arr[2])
//     cout<<res3<<” “<<res4<<endl; //should both be 3

//     return 0;
// }
