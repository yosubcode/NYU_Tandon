#include <iostream>
using namespace std;

int* findMissing(int arr[], int n, int& resArrSize);

int main() {
    
    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;

    int arr[] = {3, 1, 3, 0, 6, 4};
    int n = 6;
    
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Missing numbers: ";
    int resSize;
    int* result = findMissing(arr, n, resSize);

    for (int i = 0; i < resSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    cout << "Result size: " << resSize <<endl;
    
    // Clean up
    delete[] result;
    
    
    return 0;
}


// Function to find missing numbers
int* findMissing(int arr[], int n, int& resArrSize) {
    // Create a boolean array to mark present numbers
    // 0 through 6 inclusive
    // If arr[] = {3, 1, 3, 0, 6, 4} = 0, 1, 2, 3, 4, 5, 6 = total 7 arrays
    bool* presentNumbers = new bool[n + 1](); 
    
    // Mark all numbers that appear in arr {3, 1, 3, 0, 6, 4}
    // {0, 1, 2, 3, 4, 5, 6}
    // {1, 1, 0, 1, 1, 0, 1} 1 for true, 0 for false
    for (int i = 0; i < n; i++) {
        presentNumbers[arr[i]] = true;
    }
    
    // Count how many numbers are missing in arr {3, 1, 3, 0, 6, 4}
    // 2, 5 are false, therefore resArrSize = 2.
    resArrSize = 0;
    for (int i = 0; i <= n; i++) {
        if (presentNumbers[i] == false) {
            resArrSize++;
        }
    }
    
    // Create result array with exact size needed
    int* result = new int[resArrSize];
    int index = 0;
    
    // Fill result array with missing numbers
    // {2, 5}
    for (int i = 0; i <= n; i++) {
        if (presentNumbers[i] == false) {
            result[index++] = i;
        }
    }
    
    // Clean up temporary array
    delete[] presentNumbers;
    
    return result;
}

// Implement the function:
// int* findMissing(int arr[], int n, int& resArrSize)

// This function gets an array of integers arr and its logical size n. All elements in arr are
// in the range {0, 1, 2, … , n}.

// Note that since the array contains n numbers taken from a range of size n+1, there must
// be at least one number that is missing (could be more than one number missing, if there
// are duplicate values in arr).

// When called, it should create and return a new array, that contains all the numbers in
// range {0, 1, 2, … , n} that are not in arr. The function should also update the output
// parameter, resArrSize, with the logical size of the new array that was created.

// For example, if arr=[3, 1, 3, 0, 6, 4], after calling
// findMissing(arr, 6, resArrSize), the function should create and return an
// array that contains [2, 5], and update the value in resArrSize to be 2.

// Implementation requirements:
// 1. Your function should run in linear time. That is, it should run in theta(n).
// 2. Write a main() program that tests this function..