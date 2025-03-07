#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main(){

    string word;

    cout<<"Please enter a word: ";
    cin>>word;

    // Check if the word is a palindrome and display the result
    if (isPalindrome(word))
        cout<<word<<" is a palindrome";
    else
        cout<<word<<" is not a palindrome";

    return 0;
}

// Function to check if a given string is a palindrome
bool isPalindrome(string str){
    int wordLength = str.length();

    // Iterate through the first half of the string
    for(int i=0; i < wordLength/2; i++){
        if (str[i] != str[wordLength-1-i])
            return false;
    }
    return true;
}



// A palindrome is a word, which reads the same backward or forward. For example, 
// noon, civic, radar, level, rotor, kayak, reviver, racecar, redder, madam, and refer are all palindromes.

// a. Implement a function:
// bool isPalindrome(string str)
// This function is given a string str containing a word, and returns true if and only if str is a palindrome.

// b. Write a program that reads a word from the user and announces to the user if it is a palindrome or not.

// Your program should interact with the user exactly as it shows in the following example:

// Please enter a word: level
// level is a palindrome