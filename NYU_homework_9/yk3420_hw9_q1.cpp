#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void countWords(string str);
void countLetters(string str, int letterCount[26]);
void printLetterCounts(int letterCount[26]);
int toLowercase(int c);

int main() {
    string text;
    
    cout << "Please enter a line of text:" << endl;
    getline(cin, text);
    
    // Count and print number of words
    countWords(text);
    cout<<endl;
    
    // Count and print letter occurrences
    int letterCount[26] = {0};  // Array to store count of each letter (a-z)
    countLetters(text, letterCount);
    printLetterCounts(letterCount);
    
    return 0;
}

void countWords(string str){
    // |this is a text example.|
    // | this is    a text example.|
    // |this is a t e x  t  example.      |
    // |t his is a t e x  t  example.     |
    // | t his is a t e x  t  example.    |    

    int strLength = str.length();
    int wordCount = 0;

    if (strLength == 0) {
        cout<<wordCount<<"\t"<<"word";
    }

    bool inWord = false;  // Check if i is inside a word but not space.

    for (int i=0; i<strLength; i++){
        if(str[i] !=' '){
            if (inWord==false){
                wordCount++;
                inWord = true;
            }
        }
        // If space
        else {
            inWord = false;
        }
    }
    cout<<wordCount<<"\t"<<"words";
}

// Function to convert uppercase alphabet to lowercase 
int toLowercase(int c) {
    if (c >= 'A' && c <= 'Z') {  // ASCII uppercase: 65-90
        return c + 32;           // Convert it to lowercase
    }
    return c;                    // No convert if already lowercase
}

// Function to count occurrences of each letter
void countLetters(string str, int letterCount[26]) {
    int strLength = str.length();
    
    for (int i = 0; i < strLength; i++) {
        char c = toLowercase(str[i]);
        if (str[i] !=' ') {
            letterCount[c - 'a']++;
        }
    }
}

// Function to print letter counts in alphabetical order
void printLetterCounts(int letterCount[26]) {
    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 0) {
            char letter = 'a' + i;
            cout << letterCount[i] << "\t" << letter << endl;
        }
    }
}






// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// // Function prototypes
// void countWords(string str);
// void countLetters(const string& text, int letterCount[26]);
// void printLetterCounts(const int letterCount[26]);
// int toLowercase(int c);

// int main() {
//     string text;
    
//     cout << "Please enter a line of text:" << endl;
//     getline(cin, text);
    
//     cout << "[DEBUG] 입력받은 텍스트: '" << text << "'" << endl;
    
//     // Count and print number of words
//     countWords(text);
//     cout << endl;
    
//     // Count and print letter occurrences
//     int letterCount[26] = {0};  // Array to store count of each letter (a-z)
//     cout << "[DEBUG] letterCount 배열 초기화: 모든 값 0" << endl;
//     countLetters(text, letterCount);
//     printLetterCounts(letterCount);
    
//     return 0;
// }

// void countWords(string str) {
//     int strLength = str.length();
//     int wordCount = 0;
//     bool inWord = false;

//     cout << "[DEBUG] 문자열 길이: " << strLength << endl;
    
//     if (strLength == 0) {
//         cout << "[DEBUG] 빈 문자열 -> " << wordCount << "\tword" << endl;
//         return;  // 빈 문자열이면 바로 종료
//     }

//     for (int i = 0; i < strLength; i++) {
//         cout << "[DEBUG] 현재 위치: " << i << ", 글자: '" << str[i] << "'" << endl;
//         if (str[i] != ' ') {
//             if (!inWord) {
//                 wordCount++;
//                 inWord = true;
//                 cout << "[DEBUG] 새 단어 시작! wordCount: " << wordCount << ", inWord: " << inWord << endl;
//             } else {
//                 cout << "[DEBUG] 단어 안에 있음. wordCount: " << wordCount << ", inWord: " << inWord << endl;
//             }
//         } else {
//             inWord = false;
//             cout << "[DEBUG] 공백 만남. inWord: " << inWord << endl;
//         }
//     }
//     cout << "[DEBUG] 최종 결과: " << wordCount << "\twords" << endl;
//     cout << wordCount << "\twords";
// }

// // Function to count occurrences of each letter
// void countLetters(const string& text, int letterCount[26]) {
//     int len = text.length();
    
//     cout << "[DEBUG] countLetters 시작, 문자열 길이: " << len << endl;
    
//     for (int i = 0; i < len; i++) {
//         char c = toLowercase(text[i]);
//         cout << "[DEBUG] 위치 " << i << ": '" << text[i] << "' -> 소문자: '" << c << "'" << endl;
//         if (text[i] != ' ') {
//             int index = c - 'a';
//             letterCount[index]++;
//             cout << "[DEBUG] '" << c << "' 개수 증가, letterCount[" << index << "] = " << letterCount[index] << endl;
//         } else {
//             cout << "[DEBUG] 공백 무시" << endl;
//         }
//     }
//     cout << "[DEBUG] countLetters 종료" << endl;
// }

// // Function to print letter counts in alphabetical order
// void printLetterCounts(const int letterCount[26]) {
//     cout << "[DEBUG] printLetterCounts 시작" << endl;
//     for (int i = 0; i < 26; i++) {
//         if (letterCount[i] > 0) {
//             char letter = 'a' + i;
//             cout << "[DEBUG] '" << letter << "'의 개수: " << letterCount[i] << endl;
//             cout << letterCount[i] << " " << letter << endl;
//         }
//     }
//     cout << "[DEBUG] printLetterCounts 종료" << endl;
// }

// int toLowercase(int c) {
//     if (c >= 'A' && c <= 'Z') {
//         int result = c + 32;
//         cout << "[DEBUG] toLowercase: '" << (char)c << "' -> '" << (char)result << "'" << endl;
//         return result;
//     }
//     cout << "[DEBUG] toLowercase: '" << (char)c << "' 변환 불필요" << endl;
//     return c;
// }
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