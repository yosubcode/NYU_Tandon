#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string cleanString(string str);
int toLowercase(int c);
bool areAnagrams(string str1, string str2);

const int ASCII_RANGE = 128;

int main() {
    cout<<"This is error "<<endl;
    cout<<"////////////////////////////////////////"<<endl;
    
    string text1, text2;
    // Test cases
    cout<<"Please enter a line of text:"<<endl;
    getline(cin, text1);
    cout<<endl;

    cout<<"Please enter second line of text:"<<endl;
    getline(cin, text2);
    cout<<endl;

    // string text1 = "Eleven plus two";
    // string test2 = "Twelve plus one";
    
    // Test and output results
    if (areAnagrams(text1, text2))
        cout<<"Yes, "<<"\""<<text1<<"\" and \""<<text2<<"\" "<<"are anagrams";
    else
        cout<<"No, "<<"\""<<text1<<"\" and \""<<text2<<"\" "<<"are not anagrams";
                          
    return 0;
}

// Function to clean string (remove spaces/punctuation and convert to lowercase)
string cleanString(string str) {
    string result;
    int strLength = str.length();
    for (int i=0; i<strLength; i++) {
        if (str[i] >= 65 && str[i]<=90) {      // When str is Uppercase
            result += toLowercase(str[i]);     // convert it to lowercase.
        }
        else if (str[i] >= 97 && str[i]<=122){ // When str is lowercase 
            result += str[i];                  // keep it lowercase
        }
        else if (str[i] >= 48 && str[i]<=57){  // When str is numbers
            result += str[i];                  // keep it number.
        }
        else
            continue;                          // All others like punctuation, spaces are not included in the result.
    }
    return result;
}

// Function to convert uppercase alphabet to lowercase 
int toLowercase(int c) {
    if (c >= 'A' && c <= 'Z') {  // ASCII uppercase: 65-90
        return c + 32;           // Convert it to lowercase
    }
    return c;                    // No convert if already lowercase
}


// Function to check if two strings are anagrams
bool areAnagrams(string str1, string str2) {
    // Clean both strings first
    string cleanStr1 = cleanString(str1);
    string cleanStr2 = cleanString(str2);
    // cout<<cleanStr1<<endl;
    // cout<<cleanStr2<<endl;

    // If lengths differ after cleaning, they can't be anagrams
    if (cleanStr1.length() != cleanStr2.length()) {
        return false;
    }
    
    // Use array to count character frequencies (assuming ASCII characters)
    int charCount[ASCII_RANGE] = {0};  // Initialize all to 0
    
    // Count characters in first string
    for (int i=0; i<cleanStr1.length(); i++) {
        char c = cleanStr1[i];
        charCount[c]++;
    }
    
    // Subtract counts for second string
    for (int i=0; i<cleanStr2.length(); i++) {
        char c = cleanStr2[i];
        charCount[c]--;

        // Early exit if count goes negative, not an anagram
        if (charCount[c] < 0) {
            return false;
        }
    }
    
    // All counts must be 0 to be anagram
    for (int i=0; i<ASCII_RANGE; i++){ 
        if (charCount[i] != 0)
            return false;
    }

    return true;
}

// Two strings are anagrams if the letters can be rearranged to form each other. For example,
// “Eleven plus two” is an anagram of “Twelve plus one”. 
// Each string contains one ‘v’, three ‘e’s,two ‘l’s, etc.

// Write a program that determines if two strings are anagrams. The program should not be case
// sensitive and should disregard any punctuation or spaces.

// Notes:
// 1. Think how to break down your implementation to functions.
// 2. Pay attention to the running time of your program. If each input string contains 𝑛
// characters, an efficient implementation would run in a linear time (that is Θ(𝑛)).