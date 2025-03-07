#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);
void printArray(int arr[], int arrSize);

int main(){

    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;

    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;

    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;

    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);

    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);

    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);

    return 0;
}

void printArray(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    }


void reverseArray(int arr[], int arrSize){
    for (int i=0; i<arrSize/2; i++){
        int temp = arr[i];
        arr[i] = arr[arrSize-1-i];
        arr[arrSize-1-i] = temp;
    }
}

void removeOdd(int arr[], int& arrSize){
    // Counter for even numbers
    int countEvenNumber = 0;

    for (int i=0; i<arrSize; i++){
        if (arr[i]%2 == 0){
            arr[countEvenNumber] = arr[i];
            countEvenNumber++;
        }
    }
    // Update the new size of the array (removing odd numbers)
    arrSize = countEvenNumber;
}


void splitParity(int arr[], int arrSize){
    int leftIndex = 0;
    int rightIndex = arrSize-1;

    while(leftIndex < rightIndex){

        // If left is even and right is odd, swap 
        if (arr[leftIndex]%2 == 0 && arr[rightIndex]%2 == 1){
            int temp = arr[leftIndex];
            arr[leftIndex] = arr[rightIndex];
            arr[rightIndex] = temp;
            leftIndex++;
            rightIndex--;
        }

        // If left is already odd, move forward       
        else if (arr[leftIndex]%2 == 1){
            leftIndex++;
        }

        // If right is already even, move backward        
        else if (arr[leftIndex]%2 == 0){
            rightIndex--;
        }
    }
}
