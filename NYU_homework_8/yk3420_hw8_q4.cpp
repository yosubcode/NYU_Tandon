#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const int PIN_NUMBER = 12345;
void generateMapping(int arrDigits[], int arrRandomNumber[], int arrSize);
void displayMapping(int arrDigits[], int arrRandomNumber[], int arrSize);

int main() {
    int input;
    const int arrSize = 10;
    int arrRandomNumber[arrSize], arrDigits[arrSize];

    // Assign 0 to 9 to arrDigits
    // Assign a random number from 1 to 3 to arrRandomNumber
    srand(time(0));
    generateMapping(arrDigits, arrRandomNumber, arrSize);

    // Display the mapping
    cout << "Please enter your PIN according to the following mapping:"<< endl;
    displayMapping(arrDigits, arrRandomNumber, arrSize);

    // Get user input
    cin >> input;

    // Convert PIN_NUMBER and input to strings for digit-by-digit comparison
    string pinNumberStr = to_string(PIN_NUMBER);
    string inputStr = to_string(input);

    // Check if input is exactly 5 digits
    if (inputStr.length() != 5) {
        cout << "Error: Please enter a 5-digit PIN." << endl;
        return 0;
    }

    // Verify the PIN
    bool pinCorrect = true; // Start assuming the PIN is correct
    for (int i = 0; i < 5; i++) {
        int actualDigit = pinNumberStr[i] - '0';        // Digit from PIN_NUMBER (e.g., '1' -> 1)
        int expectedNum = arrRandomNumber[actualDigit]; // Expected mapped number (e.g., 1 -> 1)
        int inputNum = inputStr[i] - '0';               // Digit from user input (e.g., '1' -> 1)

        if (inputNum != expectedNum) {
            pinCorrect = false; // If any digit doesn't match, PIN is incorrect
            break;
        }
    }

    // Output result
    if (pinCorrect) {
        cout << "Your PIN is correct" << endl;
    } else {
        cout << "Your PIN is not correct" << endl;
    }

    return 0;
}

// Function to generate the digit (0-9) and random number (1-3) arrays
void generateMapping(int arrDigits[], int arrRandomNumber[], int arrSize){
    for (int i=0; i<arrSize; i++){
        arrDigits[i] = i;
        arrRandomNumber[i] =  (rand() % 3) + 1;
    }
}

// Function to display the PIN and NUM mapping
void displayMapping(int arrDigits[], int arrRandomNumber[], int arrSize){
    cout<<"PIN:   ";
    for (int i=0; i<arrSize; i++){
        cout<<arrDigits[i]<<" ";
    }
    cout<<endl;
    cout<<"NUM:   ";
    for (int i=0; i<arrSize; i++){
        cout<<arrRandomNumber[i]<<" ";        
    }
    cout<<endl;
}
