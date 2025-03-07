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
