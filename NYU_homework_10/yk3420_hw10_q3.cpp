#include <iostream>
#include <vector>
using namespace std;

void main1();
void main2();


int main() {
    
    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;
    cout << "//////////////////////////////////////////////" << endl;

    cout << "Version 1 (without vector):" << endl;
    main1();
    
    cout << endl;
    cout << "Version 2 (with vector):" << endl;
    main2();
    
    return 0;
}
  
// Version 1: Without using vector 
void main1() {
    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing -1." << endl;

    // Initialize the capacity and make an array on heap memory.
    int capacity = 2;
    int* arr = new int[capacity];
    
    int num;                      // Current input number
    int index = 0;                // Keep track of line numbers

    //
    while (true){
        cin >> num;
        if (num == -1) 
            break;

        if (capacity <= index){
            capacity *=2;
            int* newArr = new int[capacity];
            for (int i=0; i<index; i++){
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }

        arr[index] = num;
        index++;

    }
    
    cout << "Please enter a number you want to search." << endl;
    int searchNum;
    cin >> searchNum;
    
    // Count the number for matches
    int matchCount = 0;
    for (int i=0; i<index; i++) {
        if (arr[i] == searchNum) {
            matchCount++;
        }
    }
    
    // Print results
    if (matchCount == 0) {
        cout << searchNum << " does not show at all in the sequence." << endl;
    } else {
        cout << searchNum << " shows in lines ";
        bool firstMatch = false; 
        for (int i = 0; i <= index; i++) {
            if (arr[i] == searchNum) {
                if (firstMatch == true) {
                    cout << ", ";
                }
                cout << i + 1;
                firstMatch = true;
            }
        }
        cout << "." << endl;
    }
    delete[] arr;
    cout << endl; 
    cout << endl; 
}


// Version 2: Using vector
void main2() {
    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing -1." << endl;
    
    vector<int> arr;    // Store all numbers
    int num;                // Current input number
    
    // Read numbers into vector
    while (true) {
        cin >> num;
        if (num == -1) 
            break;
        arr.push_back(num);
    }
    
    cout << "Please enter a number you want to search." << endl;
    int searchNum;
    cin >> searchNum;
    
    // Count the number for matches
    int matchCount = 0;
    int countArray = arr.size();
    for (int i=0; i<countArray; i++) {
        if (arr[i] == searchNum) {
            matchCount++;
        }
    }
    
    // Print results
    if (matchCount == 0) {
        cout << searchNum << " does not show at all in the sequence." << endl;
    } else {
        cout << searchNum << " shows in lines ";
        bool firstMatch = false; 
        for (int i = 0; i <= countArray; i++) {
            if (arr[i] == searchNum) {
                if (firstMatch == true) {
                    cout << ", ";
                }
                cout << i + 1;
                firstMatch = true;
            }
        }
        cout << "." << endl;
    }
}

// In this question, you will write two versions of a program that reads from the user a
// sequence of positive integers ending with -1, and another positive integer num that the
// user wishes to search for.
// The program should then print all the line numbers in sequence entered by the user, that
// contain num, or a message saying that num does not show at all in the sequence.

// Your program should interact with the user exactly as it shows in the following example:
// Please enter a sequence of positive integers, each in a separate line.
// End you input by typing -1.
// 13
// 5
// 8
// 2
// 9
// 5
// 8
// 8
// -1
// Please enter a number you want to search.
// 5
// 5 shows in lines 2, 6.
// a) The first version of the program, is not allowed to use the vector data structure.
// b) The second version of the program, should use the vector data structure.

// Implementation requirements (for both programs):
// 1. Think how to break down your implementation to functions.
// 2. Your programs should run in linear time. That is, if there are n numbers in the input
// sequence, your program should run in theta(n).
// 3. Write the two programs in two functions named main1() and main2(). Also have
// the main() test these two functions.




















