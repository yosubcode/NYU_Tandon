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
