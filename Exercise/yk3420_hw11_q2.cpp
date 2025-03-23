#include <iostream>
#include <string>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main() {

    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;

    // Test case 1 for sumOfSquares
    int arr1[] = {2, -1, 3, 10};
    int size1 = 4;
    int result1 = sumOfSquares(arr1, size1);
    cout << "Sum of squares of [2, -1, 3, 10] = " << result1 << endl;
    // Expected output: 114 (4 + 1 + 9 + 100)

    // Test case 2 for isSorted (sorted array)
    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = 5;
    bool result2 = isSorted(arr2, size2);
    cout << "Is [1, 2, 3, 4, 5] sorted? " << (result2 ? "Yes" : "No") << endl;
    // Expected output: Yes

    // Test case 3 for isSorted (unsorted array)
    int arr3[] = {1, 3, 2, 4, 5};
    int size3 = 5;
    bool result3 = isSorted(arr3, size3);
    cout << "Is [1, 3, 2, 4, 5] sorted? " << (result3 ? "Yes" : "No") << endl;
    // Expected output: No   
    
    return 0;
}

// a. Sum of squares of array elements
int sumOfSquares(int arr[], int arrSize) {
    // Base cases
    if (arrSize <= 0) return 0;  // Empty array or invalid size
    if (arrSize == 1) return arr[0] * arr[0];  // Single element
    
    // Recursive case: square of first element + sum of rest
    return (arr[0] * arr[0]) + sumOfSquares(arr + 1, arrSize - 1);
}

// b. Check if array is sorted in ascending order
bool isSorted(int arr[], int arrSize) {
    // Base cases
    if (arrSize <= 1) return true;  // Empty or single element is always sorted
    
    // Recursive case: check first pair and rest of array
    if (arr[0] > arr[1]) return false;  // If current element > next, not sorted
    return isSorted(arr + 1, arrSize - 1);  // Check rest of array
}

// Give a recursive implement to the following functions:
// a. int sumOfSquares(int arr[], int arrSize)

// This function is given arr, an array of integers, and its logical size, arrSize. When called,
// it returns the sum of the squares of each of the values in arr.
// For example, if arr is an array containing [2, -1, 3, 10], calling sumOfSquares(arr, 4)
// will return 114 (since, 2^2 + (-1)^2 + 3^2 + 10^2 = 114).

// b. bool isSorted(int arr[], int arrSize)
// This function is given arr, an array of integers, and its logical size, arrSize. When called,
// it should return true if the elements in arr are sorted in an ascending order, or false if
// they are not.
