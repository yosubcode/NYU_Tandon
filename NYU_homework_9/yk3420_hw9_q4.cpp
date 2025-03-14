#include <iostream>
using namespace std;

bool isOdd(int num);
void oddsKeepEvensFlip(int* arr, int arrSize);
void printArray(int* arr, int size);

int main() {

    int arr[] = {5, 2, 11, 7, 6, 4};
    int size = 6;
    cout << "Original array:          ";
    printArray(arr, size);

    oddsKeepEvensFlip(arr, size);
    cout << "After oddsKeepEvensFlip: ";
    printArray(arr, size);
    
    return 0;
}

// Function to print array elements
void printArray(int* arr, int size){
    cout<<"[ ";
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout << "]";
    cout << endl;
}

// Function to check if a number is odd
bool isOdd(int num) {
    return num % 2 != 0;
}

// Function to reorder array
void oddsKeepEvensFlip(int* arr, int arrSize) {
    // Create an array on Heap memory
    int* tempArr = new int[arrSize];
    
    // Copy odd numbers in original order
    int index = 0;
    for (int i=0; i<arrSize; i++) {
        if (isOdd(arr[i])) {
            tempArr[index] = arr[i];
            index++;
        }
    }
    
    // Copy even numbers in reverse order
    for (int i=arrSize-1; i>=0; i--) {
        if (isOdd(arr[i])==false) {
            tempArr[index] = arr[i];
            index++;
        }
    }
    
    // Copy tempArr back to the original array
    for (int i=0; i<arrSize; i++) {
        arr[i] = tempArr[i];
    }
    
    // Clean up temporary array on Heap memory
    delete[] tempArr;
}


// Implement the function:
// void oddsKeepEvensFlip(int arr[], int arrSize)

// This function gets an array of integers arr and its logical size arrSize.
// When called, it should reorder the elements of arr so that:

// 1. All the odd numbers come before all the even numbers
// 2. The odd numbers will keep their original relative order
// 3. The even numbers will be placed in a reversed order (relative to their original order).

// For example, if arr = [5, 2, 11, 7, 6, 4], after calling oddsKeepEvensFlip(arr, 6), arr will be:
// [5, 11, 7, 4, 6, 2]

// Implementation requirements:
// 1. Your function should run in linear time. That is, if there are n items in arr, calling oddsKeepEvensFlip(arr, n) will run in 𝜃(𝑛).
// 2. Write a main() program that tests this function.