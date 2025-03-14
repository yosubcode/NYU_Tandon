#include <iostream>
using namespace std;

void printArray(int* arr, int size);
// int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
// void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
// void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

int main() {
    // Test array
    int arr[] = {3, -1, -3, 0, 6, 4};
    int arrSize = 6;
    cout<<"Error message///////////////////////"<<endl;
    cout<<"Error message///////////////////////"<<endl;

    cout << "Original array: ";
    printArray(arr, arrSize);
    cout<<endl;
    cout<<endl;

    // // array 값, array 주소
    // for (int i=0; i<arrSize; i++){
    //     cout<<arr[i]<<" ";
    //     cout<<&arr[i]<<" ";
    // }
    // cout<<endl;

    // Test Version b)
    int posSize2;
    int* posArr2 = getPosNums2(arr, arrSize, &posSize2);
    cout << "Version b) result: ";
    printArray(posArr2, posSize2);


    // // Heap 에 있는 array 값, array 주소
    // cout<<endl;
    // for (int i=0; i<PosArrSize; i++){
    //     cout<<PosArr[i]<<" ";
    //     cout<<&PosArr[i]<<" ";
    // }

    // // After Heap delete, garbage array value, garbage array address
    // delete[] PosArr;
    // cout<<endl;
    // for (int i=0; i<PosArrSize; i++){
    //     cout<<PosArr[i]<<" ";
    //     cout<<&PosArr[i]<<" ";
    // }

    return 0;
}

void printArray(int* arr, int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

// Version b)
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr) {
    int posCount = 0;
    for (int i=0; i<arrSize; i++) {
        if (arr[i] > 0) 
            posCount++;
    }
    
    int* posArr = new int[posCount];
    
    int index = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] > 0) {
            posArr[index] = arr[i];
            index++;
        }
    }
    
    *outPosArrSizePtr = posCount;
    return posArr;
}





    // Test Version a)
    // int posSize1;
    // int* posArr1 = getPosNums1(arr, arrSize, posSize1);
    // cout << "Version a) result: ";
    // printArray(posArr1, posSize1);
    
    // Test Version b)
    // int posSize2;
    // int* posArr2 = getPosNums2(arr, arrSize, &posSize2);
    // cout << "Version b) result: ";
    // printArray(posArr2, posSize2);
    
    // Test Version c)
    // int* posArr3 = nullptr;
    // int posSize3;
    // getPosNums3(arr, arrSize, posArr3, posSize3);
    // cout << "Version c) result: ";
    // printArray(posArr3, posSize3);
    
    // // Test Version d)
    // int* posArr4 = nullptr;
    // int posSize4;
    // getPosNums4(arr, arrSize, &posArr4, &posSize4);
    // cout << "Version d) result: ";
    // printArray(posArr4, posSize4);
    
    // // Clean up dynamically allocated memory
    // delete[] posArr1;
    // delete[] posArr2;
    // delete[] posArr3;
    // delete[] posArr4;


// // Version a)
// int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
//     // First count positive numbers
//     int posCount = 0;
//     for (int i=0; i<arrSize; i++) {
//         if (arr[i] > 0) 
//             posCount++;
//     }
    
//     // Create new array on Heap memory
//     int* posArr = new int[posCount];
    
//     // Fill new array with positive numbers
//     int index = 0;
//     for (int i=0; i<arrSize; i++) {
//         if (arr[i]>0) {
//             posArr[index] = arr[i];
//             index++;
//         }
//     }
    
//     outPosArrSize = posCount;
//     return posArr;
// }

// // Version b)
// int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr) {
//     int posCount = 0;
//     for (int i=0; i<arrSize; i++) {
//         if (arr[i] > 0) 
//             posCount++;
//     }
    
//     int* posArr = new int[posCount];
    
//     int index = 0;
//     for (int i = 0; i < arrSize; i++) {
//         if (arr[i] > 0) {
//             posArr[index] = arr[i];
//             index++;
//         }
//     }
    
//     *outPosArrSizePtr = posCount;
//     return posArr;
// }

// Version c)
// void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
//     int posCount = 0;
//     for (int i = 0; i < arrSize; i++) {
//         if (arr[i] > 0) posCount++;
//     }
    
//     outPosArr = new int[posCount];
    
//     int index = 0;
//     for (int i = 0; i < arrSize; i++) {
//         if (arr[i] > 0) {
//             outPosArr[index] = arr[i];
//             index++;
//         }
//     }
    
//     outPosArrSize = posCount;
// }

// // Version d)
// void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr) {
//     int posCount = 0;
//     for (int i = 0; i < arrSize; i++) {
//         if (arr[i] > 0) posCount++;
//     }
    
//     *outPosArrPtr = new int[posCount];
    
//     int index = 0;
//     for (int i = 0; i < arrSize; i++) {
//         if (arr[i] > 0) {
//             (*outPosArrPtr)[index] = arr[i];
//             index++;
//         }
//     }
    
//     *outPosArrSizePtr = posCount;
// }

// // Function to print array
// void printArray(int* arr, int size) {
//     cout << "[";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i];
//         if (i < size - 1) cout << ", ";
//     }
//     cout << "]" << endl;
// }



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