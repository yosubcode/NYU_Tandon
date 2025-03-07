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





// Traditional password entry schemes are susceptible to "shoulder surfing" in which an attacker
// watches an unsuspecting user enter their password or PIN number and uses it later to gain
// access to the account. One way to combat this problem is with a randomized challengeresponse
// system. In these systems the user enters different information every time, based on a
// secret in response to a randomly generated challenge.

// Consider the following scheme, in which the password consists of a five-digit PIN number (00000 to 99999). 
// Each digit is assigned a random number that is 1, 2, or 3. The user enters the random
// numbers that correspond to their PIN instead of their actual PIN numbers.

// For example, consider an actual PIN number of 12345. To authenticate the user would be
// presented with a screen such as:

// PIN: 0 1 2 3 4 5 6 7 8 9
// NUM: 3 2 3 1 1 3 2 2 1 3

// The user would enter 23113 instead of 12345. This doesn’t divulge the password even if an
// attacker intercepts the entry because 23113 could correspond to other PIN numbers, such as
// 69440 or 70439.

// The next time the user logs in, a different sequence of random numbers would be generated, such as:

// PIN: 0 1 2 3 4 5 6 7 8 9
// NUM: 1 1 2 3 1 2 2 3 3 3

// Write a program to simulate the authentication process. Store an actual 5-digit PIN number in
// your program (make one up, and store it as a constant). The program should use an array to
// assign random numbers to the digits from 0 to 9. Output the random digits to the screen, input
// the response from the user, and output whether or not the user’s response correctly matches
// the PIN number.

// Assuming that the actual PIN number is 12345, your program should interact with the user
// exactly as it shows in the following examples (2 different executions of the program):

// Please enter your PIN according to the following mapping:
// PIN: 0 1 2 3 4 5 6 7 8 9
// NUM: 3 2 3 1 1 3 2 2 1 3
// 23113
// Your PIN is correct

// Please enter your PIN according to the following mapping:
// PIN: 0 1 2 3 4 5 6 7 8 9
// NUM: 1 1 2 3 1 2 2 3 3 3
// 23113
// Your PIN is not correct


// Note: Think how to break down your implementation to functions.