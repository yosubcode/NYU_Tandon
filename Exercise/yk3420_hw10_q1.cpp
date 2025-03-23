#include <iostream>
#include <string>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);

int main() {
    // Test case 1: Regular sentence

    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;

    string sentence;
    cout << "Write a sentence" << endl;
    getline(cin, sentence);

    int size;
    string* words = createWordsArray(sentence, size);
    
    for (int i = 0; i < size; i++) {
        cout << "\"" << words[i] << "\" ";
    }
    
    // Clean up dynamically allocated memory
    delete[] words;
   
    return 0;
}


// Function to create an array of words from a sentence
string* createWordsArray(string sentence, int& outWordsArrSize) {
    // First, count the number of words
    int wordCount = 0;
    bool inWord = true;
    
    // Count words by counting transitions from space to non-space
    for (int i=0; i<sentence.length(); i++) {
        if (sentence[i] != ' ' && inWord == true) {
            wordCount++;
            inWord = false;
        }
        else if (sentence[i]  == ' ') {
            inWord = true;
        }
    }
    
    // Update the output parameter
    outWordsArrSize = wordCount;
    
    // Create new array with the calculated size
    string* words = new string[wordCount];
    
    // Extract words
    int wordIndex = 0;
    int startPos = 0;
    string currentWord = "";

    for (int i=0; i<sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (i > startPos) {
                words[wordIndex] = currentWord;
                wordIndex ++;
                currentWord = "";
            }
            startPos = i + 1;
        }

        else{
            currentWord += sentence[i];
        }
    }
    
    // Handle the last word if sentence doesn't end with space
    if (startPos < sentence.length() && currentWord != "") {
        words[wordIndex] = currentWord;
    }
    
    return words;
}

// Implement the function:
// string* createWordsArray(string sentence, int& outWordsArrSize)

// This function gets a string sentence containing a sentence.
// When called, it should create and return a new array (of strings), that contains all the
// words in sentence. The function should also update the output parameter,
// outWordsArrSize, with the logical size of the new array that was created.

// Note: Assume that the words in the sentence are separated by a single space.

// For example, if sentence=”You can do it”, after calling
// createWordsArray(sentence, outWordsArrSize), the function should create
// and return an array that contains [”You” , ”can” , ”do” , ”it”], and update the
// value in outWordsArrSize to be 4.

// Implementation requirements:
// 1. You may want to use some of the string methods, such as find, substr, etc.
// 2. Your function should run in linear time. That is, if sentence contains n characters,
// your function should run in theta(n).
// 3. Write a main() program that tests this function.