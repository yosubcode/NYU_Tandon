#include <iostream>
using namespace std;

int finishingPoint(string text, int startingPointer);
void convertToX(string& text, int startingPointer, int finishingPointer);
bool isDigit(char c);

int main(){

    string text;
    cout<<"Please enter a line of text: "<<endl;
    getline(cin,text);

    // Loop through the text character by character
    for(int i=0; i<text.length(); i++){

        bool isNumberStart = false;
        int startingPointer = 0;

        // Check for number at start of string
        if (i==0 && isDigit(text[0])) {
            isNumberStart = true;
            startingPointer = 0;
        }
        // Check for space followed by a number (Example: " 3")
        else if (text[i] == ' ' &&  (isDigit(text[i + 1])) &&  i+1 < text.length()){
            isNumberStart = true;
            startingPointer = i+1;
        }

        // If we found a number to process
        if (isNumberStart){
            // Find the last digit of the number sequence
            int finishingPointer = finishingPoint(text, startingPointer);

            // Check if number is followed by space or end of string
            if (text[finishingPointer+1]==' ' || finishingPointer+1 >= text.length()) {
                // Replace digits with 'x'
                convertToX(text, startingPointer, finishingPointer);

                // Move i to the last modified index
                i = finishingPointer;
            }
        }
    }

    // Print modified text
    cout<<text<<endl;
    
    return 0;
}

// Function to find the last digit in a number sequence
int finishingPoint(string text, int startingPointer){
    int i=1;
    while (isdigit(text[startingPointer + i]) && startingPointer + i < text.length()) 
        i++;
    
    // Return the index of the last digit
    return startingPointer + i - 1;
}


// Function to replace digits with 'x' characters
void convertToX(string& text, int startingPointer, int finishingPointer) {
    for (int k = startingPointer; k <= finishingPointer; k++) {
        text[k] = 'x';
    }
}


// Function to check if a charactor is a digit
bool isDigit(char c) {
    return (c >= '0' && c <= '9');  // Check ASCII range for digits
}




// 1. On text, each letter finishing with space = regardes as a letter.
// 2. loop on each letter. If there is any char=false, if all digit, get each char's index number. 
// 3. count char, make arr[count char], add the index number.
// 4. loop on text and arr[count char]의 index number 모두 x 로 변환.



// Write a program that reads in a line of text and outputs the line with all the digits in all integer
// numbers replaced with 'x'.

// Please enter a line of text:
// My userID is john17 and my 4 digit pin is 1234 which is secret
// My userID is john17 and my x digit pin is xxxx which is secret

// Notes:
// 1. If a digits is part of a word, then the digit is not changed to an 'x'. For example, john17 is NOT changed to johnxx.
// 2. You may assume that the text entered by the user will contain only letters (upper case or lower case), digits and spaces.
// 3. Think how to break down your implementation to functions.