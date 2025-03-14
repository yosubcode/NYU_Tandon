#include <iostream>
using namespace std;

void printArray(int* arr, int size);
int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

int main() {

    int arr[] = {3, -1, -3, 0, 6, 4};
    int arrSize = 6;

    cout << "Original array: ";
    printArray(arr, arrSize);
    cout<<endl;

    // Version a)
    int posSize1;
    int* posArr1 = getPosNums1(arr, arrSize, posSize1);
    cout << "Version a) result: ";
    printArray(posArr1, posSize1);
    delete[] posArr1;

    // Version b)
    int posSize2;
    int* posArr2 = getPosNums2(arr, arrSize, &posSize2);
    cout << "Version b) result: ";
    printArray(posArr2, posSize2);
    delete[] posArr2;

    // Version c)
    int* posArr3 = nullptr;
    int posSize3;
    getPosNums3(arr, arrSize, posArr3, posSize3);
    cout << "Version c) result: ";
    printArray(posArr3, posSize3);
    delete[] posArr3;

    // Version d)
    int* posArr4 = nullptr;
    int posSize4;
    getPosNums4(arr, arrSize, &posArr4, &posSize4);
    cout << "Version d) result: ";
    printArray(posArr4, posSize4);
    delete[] posArr4;

    return 0;
}

// Function to print array elements
void printArray(int* arr, int size){
    cout<<"[ ";
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
}
 
// Version a)
// Returns pointer to new array and updates size via reference parameter
int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
    // Count positive numbers
    int posCount = 0;
    for (int i=0; i<arrSize; i++) {
        if (arr[i] > 0) 
            posCount++;
    }
    
    // Create new array on Heap memory with exact size needed
    int* posArr = new int[posCount];
    
    // Fill new array with positive numbers
    int index = 0;
    for (int i=0; i<arrSize; i++) {
        if (arr[i]>0) {
            posArr[index] = arr[i];
            index++;
        }
    }
    
    outPosArrSize = posCount;  // Update size parameter via reference
    return posArr;             // Return pointer to new array
}

// Version b)
// Returns pointer and updates size via pointer parameter
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr) {
    // Count positive numbers
    int posCount = 0;
    for (int i=0; i<arrSize; i++) {
        if (arr[i] > 0) 
            posCount++;
    }
    // Create new array on Heap memory with exact size needed
    int* posArr = new int[posCount];
    
    // Fill new array with positive numbers
    int index = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            posArr[index] = arr[i];
            index++;
        }
    }
    
    *outPosArrSizePtr = posCount;  // Update size through pointer
    return posArr;                 // Return pointer to new array
}

// Version c)
// Void function that modifies pointer reference and size reference
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
    // Count positive numbers
    int posCount = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) posCount++;
    }

    // Creat array and assign to reference parameter on Heap memory
    outPosArr = new int[posCount];
    
    int index = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            outPosArr[index] = arr[i];
            index++;
        }
    }
    
    outPosArrSize = posCount;      // Update size through reference
}

// Version d)
// Void function using pointer to pointer for array and pointer for size
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr) {
    // Count positive numbers
    int posCount = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) posCount++;
    }

    // Creat array and assign to pointer parameter on Heap memory
    *outPosArrPtr = new int[posCount];
    
    int index = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            (*outPosArrPtr)[index] = arr[i];
            index++;
        }
    }
    
    *outPosArrSizePtr = posCount;     //// Update size through pointer
}


// In this question, you will write four versions of a function getPosNums that gets an
// array of integers arr, and its logical size. When called it creates a new array containing
// only the positive numbers from arr.

// For example, if arr=[3, -1, -3, 0, 6, 4], the functions should create an array
// containing the following 3 elements: [3, 6, 4],

// The four versions you should implement differ in the way the output is returned.
// The prototypes of the functions are:

// a) int* getPosNums1(int* arr, int arrSize, int& outPosArrSize)
// returns the base address of the array (containing the positive numbers), and updates
// the output parameter outPosArrSize with the array’s logical size.

// b) int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr)
// returns the base address of the array (containing the positive numbers), and uses
// the pointer outPosArrSizePtr to update the array’s logical size.

// c) void getPosNums3(int* arr, int arrSize,
// int*& outPosArr, int& outPosArrSize)
// updates the output parameter outPosArr with the base address of the array
// (containing the positive numbers), and the output parameter outPosArrSize with
// the array’s logical size.

// d) void getPosNums4(int* arr, int arrSize,
// int** outPosArrPtr, int* outPosArrSizePtr)
// uses the pointer outPosArrPtr to update the base address of the array (containing
// the positive numbers), and the pointer outPosArrSizePtr to update the array’s
// logical size.


// Note: You should also write a main program that calls and tests all these functions.