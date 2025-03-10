#include <iostream>
using namespace std;

bool isOdd(int num);
void oddsKeepEvensFlip(int arr[], int arrSize);
void printArray(int arr[], int size);

int main() {
    // Test case 1: Example from the problem
    int arr1[] = {5, 2, 11, 7, 6, 4};
    int size1 = 6;
    cout << "Test 1 - Original array: ";
    printArray(arr1, size1);
    oddsKeepEvensFlip(arr1, size1);
    cout << "After oddsKeepEvensFlip: ";
    printArray(arr1, size1);
    
    // Test case 2: All odd numbers
    int arr2[] = {1, 3, 5, 7};
    int size2 = 4;
    cout << "\nTest 2 - Original array: ";
    printArray(arr2, size2);
    oddsKeepEvensFlip(arr2, size2);
    cout << "After oddsKeepEvensFlip: ";
    printArray(arr2, size2);
    
    // Test case 3: All even numbers
    int arr3[] = {2, 4, 6, 8};
    int size3 = 4;
    cout << "\nTest 3 - Original array: ";
    printArray(arr3, size3);
    oddsKeepEvensFlip(arr3, size3);
    cout << "After oddsKeepEvensFlip: ";
    printArray(arr3, size3);
    
    // Test case 4: Mixed with duplicates
    int arr4[] = {1, 2, 3, 4, 3, 2};
    int size4 = 6;
    cout << "\nTest 4 - Original array: ";
    printArray(arr4, size4);
    oddsKeepEvensFlip(arr4, size4);
    cout << "After oddsKeepEvensFlip: ";
    printArray(arr4, size4);

    return 0;
}

// Helper function to check if a number is odd
bool isOdd(int num) {
    return num % 2 != 0;
}

// Main function to reorder array
void oddsKeepEvensFlip(int arr[], int arrSize) {
    // Step 1: Create a temporary array
    int* temp = new int[arrSize];
    
    // Step 2: Copy odd numbers in original order
    int index = 0;
    for (int i = 0; i < arrSize; i++) {
        if (isOdd(arr[i])) {
            temp[index++] = arr[i];
        }
    }
    
    // Step 3: Copy even numbers in reverse order
    for (int i = arrSize - 1; i >= 0; i--) {
        if (!isOdd(arr[i])) {
            temp[index++] = arr[i];
        }
    }
    
    // Step 4: Copy back to original array
    for (int i = 0; i < arrSize; i++) {
        arr[i] = temp[i];
    }
    
    // Clean up temporary array
    delete[] temp;
}

// Function to print array
void printArray(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
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