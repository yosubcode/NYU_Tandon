// Write a C++ program to find the max of an integral data set. 
// The program will ask the user to input the number of data values in the set and each value. 
// The program prints on screen a pointer that points to the max value.

#include <iostream>
using namespace std;

int main() {
    int size;
    
    // Get the size of the dataset
    cout << "Enter the number of values in the dataset: ";
    cin >> size;
    
    // Input validation
    if (size <= 0) {
        cout << "Please enter a positive number of values." << endl;
        return 1;
    }
    
    // Dynamically allocate array based on user input
    int *data = new int[size];
    
    // Get values from user
    cout << "Enter " << size << " integer values:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> data[i];
    }
    
    // Pointer to track maximum value
    int *maxPtr = &data[0];  // Start by pointing to first element
    
    // Find maximum value by comparing each element
    for (int i = 1; i < size; i++) {
        if (data[i] > *maxPtr) {
            maxPtr = &data[i];  // Update pointer to new max value
        }
    }
    
    // Display results
    cout << "\nResults:" << endl;
    cout << "Maximum value: " << *maxPtr << endl;
    cout << "Memory address of maximum value: " << maxPtr << endl;
    
    // Clean up dynamically allocated memory
    delete[] data;
    
    return 0;
}
