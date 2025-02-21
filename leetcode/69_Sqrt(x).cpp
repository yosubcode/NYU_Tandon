// #include <iostream>
// using namespace std;


//     int main(){

//         int x=37, y1, y2, result;

//         y1 = 1;
//         y2 = 2;
//         result = 1;

//         while (x<y1*y1 || x>=y2*y2){
//             result = y2;   
//             y1++;
//             y2++;           
//         }
    
//         cout<<result<<endl;

//         return 0;
//     }


#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int result = 1;

    // Handle the trivial case when x is 0 or 1
    if (x == 0) {
        cout << x << endl;
        return 1;
    }

    // Incrementally search for the floor square root
    int y = 1;
    while (y * y <= x) {
        result = y;
        y++;
    }

    cout << "The square root (integer part) of " << x << " is " << result << endl;
    return 0;
}













// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.