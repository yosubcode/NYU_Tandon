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
