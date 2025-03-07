#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize);
void printIndicesOfMinimumValue(int arr[], int arrSize);

int main(){

    int arrSize = 20;
    int integers[arrSize];
    cout<<"Please enter 20 integers separated by a space:"<<endl;

    // Read 20 integers from user input
    for (int i=0; i<arrSize; i++)
        cin>>integers[i];

    // Print the minimum value and its indices
    cout<<"The minimum value is "<<minInArray(integers, arrSize)<<", and it is located in the following indices: ";
    // Call function to print indices
    printIndicesOfMinimumValue(integers, arrSize);
    
    return 0;
}

// Function to find the minimum value in an array
int minInArray(int arr[], int arrSize){
    // Initialize with the first element
    int minimumValue = arr[0];

    // Find the minimum value
    for(int i=1; i<arrSize; i++){
        if (arr[i]<=minimumValue)
            minimumValue = arr[i];
    }
    return minimumValue;
}
    
// Function to print the indices where the minimum value appears in the array
void printIndicesOfMinimumValue(int arr[], int arrSize){
    // Get the minimum value
    int minValue = minInArray(arr, arrSize); 

    // Print indices of elements matching minValue
    for(int i=0; i<arrSize; i++){
        if (arr[i] == minValue)
            cout<<i<<" ";
    }
}



// 1. Implement the function: int minInArray(int arr[], int arrSize)
// This function is given arr, an array of integers, and its logical size, arrSize. When called, it returns the minimum value in arr.

// 2. Write a program that reads from the user a sequence of 20 integers (unnecessarily differentfrom one another) into an array, 
// and outputs the minimum value, and all the indices it appears in the array.

// Your program should interact with the user exactly as it shows in the following example:

// Please enter 20 integers separated by a space:
// 14 5 12 5 6 14 5 12 14 12 14 6 8 7 5 136 9 2189 10 6
// The minimum value is 5, and it is located in the following indices: 1 3 6 14

// Note: You may want to define additional functions for your program to use.