#include <iostream>
#include <string>
using namespace std;

const int NUMBER_OF_ALPHABET = 26;

// Function prototypes
void countWords(string str);
void countLetters(string str, int letterCount[NUMBER_OF_ALPHABET]);
void printLetterCounts(int letterCount[NUMBER_OF_ALPHABET]);
int toLowercase(int c);

int main() {
    string text;

    cout << "Please enter a line of text:" << endl;
    getline(cin, text);
    
    // Count and print number of words
    countWords(text);
    cout<<endl;
    
    // Count and print letter occurrences
    int letterCount[NUMBER_OF_ALPHABET] = {0};  // Array to store count of each letter (a-z)
    countLetters(text, letterCount);
    printLetterCounts(letterCount);
    
    return 0;
}

void countWords(string str){
    int strLength = str.length();
    int wordCount = 0;

    if (strLength == 0) {
        cout << wordCount << "\t" << "words";
        return;
    }

    bool inWord = false;  // Check if i is inside a word but not space.

    for (int i=0; i<strLength; i++){
        // Check if character is a letter
        char c = toLowercase(str[i]);
        bool isLetter = (c >='a' && c <='z');
        
        if (isLetter){
            if (inWord == false){
                wordCount++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }
    cout << wordCount << "\t" << "words";
}

// Function to convert uppercase alphabet to lowercase 
int toLowercase(int c) {
    if (c >= 'A' && c <= 'Z') {  // ASCII uppercase: 65-90
        return c + 32;           // Convert it to lowercase
    }
    return c;                    // No convert if already lowercase
}

// Function to count occurrences of each letter
void countLetters(string str, int letterCount[NUMBER_OF_ALPHABET]) {
    int strLength = str.length();
    
    for (int i = 0; i < strLength; i++) {
        char c = toLowercase(str[i]);
        if (str[i] !=' ') {
            letterCount[c - 'a']++;
        }
    }
}

// Function to print letter counts in alphabetical order
void printLetterCounts(int letterCount[NUMBER_OF_ALPHABET]) {
    for (int i = 0; i < NUMBER_OF_ALPHABET; i++) {
        if (letterCount[i] > 0) {
            char letter = 'a' + i;
            cout << letterCount[i] << "\t" << letter << endl;
        }
    }
}


// - Write a program that will read in a line of text and output the number of words in the line and the number of occurrences of each letter.
// - Define a word to be any string of letters that is delimited at each end by either whitespace, a period, a comma, or the beginning or end of the line.
// - You can assume that the input consists entirely of letters, whitespace, commas, and periods.
// - When outputting the number of letters that occur in a line, be sure to count upper and lowercase versions of a letter as the same letter.
// - Output the letters in alphabetical order and list only those letters that do occur in the input line.

// Your program should interact with the user exactly as it shows in the following example:

// Please enter a line of text:
// I say Hi.
// 3    words
// 1    a
// 1    h
// 2    i
// 1    s
// 1    y

// Notes:
// 1. Think how to break down your implementation to functions.
// 2. Pay attention to the running time of your program. If the input line contains 𝑛 characters, 
//    an efficient implementation would run in a linear time (that is Θ(𝑛)).