#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main(){

    // a. ShiftedTriangle
    int numOfLines, numOfSpace; 
    char symbol1;

    cout<<"Version a. ShiftedTriangle"<<endl;
    cout<<"Please enter a number of lines for the triangle: ";
    cin>> numOfLines;
    cout<<"Please enter a number of spaces: ";
    cin>>numOfSpace;
    cout<<"Please enter a symbol for the triangle: ";
    cin>>symbol1;

    // Call the printShiftedTriangle function
    printShiftedTriangle(numOfLines, numOfSpace, symbol1);
    cout<<endl;

    // b. Pine Tree
    int numOfTree;
    char symbol2;

    cout<<"Version b. Pine Tree"<<endl;
    cout<<"Please enter a number of Tree for the PineTree: ";
    cin>> numOfTree;
    cout<<"Please enter a symbol for the PineTree: ";
    cin>>symbol2;

    // Call the printPineTree function
    printPineTree(numOfTree, symbol2);

    return 0;
}


// Function for a. ShiftedTriangle
void printShiftedTriangle(int n, int m, char symbol) {
    // Loop for each line of the triangle
    for (int i=1; i<=n; i++){
        // Print the n spaces from the left margin.
        for(int j=1; j<=m; j++)
            cout<<" ";
        // Print the spaces to the triangle
        for(int k=1; k<=n-i; k++)
            cout<<" ";
        // Print the symbols for the current line
        for(int l=1; l<=2*i - 1; l++)
            cout<<symbol;
        cout<<endl;        
    }
}

// Function for b. PineTree
void printPineTree(int n, char symbol) {
    // Loop for each triangle
    for(int i=1; i<=n; i++){
        // Loop for each line in the current triangle
        for(int j=1; j<=i+1; j++){
            // Print the spaces
            for(int k=1; k<=n+1-j; k++)
                cout<<" ";
            // Print the symbols
            for(int l=1; l<=2*j-1; l++)
                cout<<symbol;
            cout<<endl;
        }
    }
}



// Question 2:
// Write a program that, prints a ‘pine tree’ consisting of triangles of increasing sizes, filled	
// with	a	character	(eg. ‘*’ or ’+’	or	‘$’	etc).
// Your program should interact with the user to read the number of triangles in the tree and the character filling the tree.

// Your	implementation	should	include	the	following functions:
// a. void printShiftedTriangle(int n, int m, char symbol)
// It prints an n-line triangle, filled with symbol characters, shifted	m spaces from the left margin.
// For example, if we call printShiftedTriangle(3, 4, `+`),	the	expected output is:
//
//       +
//      +++
//     +++++
//
// b. void printPineTree(int n, char symbol)
// It prints a sequence of n triangles of increasing sizes (the smallest triangle is a 2-line triangle), 
// which form the  hape of a pine tree. The triangles are filled with the symbol character.	
// For example, if we call printPineTree(3, `#`), the expected output is:
//
//    #
//   ###
//    #
//   ###
//  #####
//    #
//   ###
//  #####
// #######