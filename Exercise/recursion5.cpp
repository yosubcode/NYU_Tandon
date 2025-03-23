#include <iostream>
using namespace std;



void recursive(int start, int end);

int main(){

    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;
    cout << "///////////////////////////////////" << endl;

    recursive(1, 10);
    // cout << num << "! = " << fac << endl;

    return 0;
}

void recursive(int start, int end){
    if (start==end)
        cout << start << endl;
    else{
        cout << end << endl;          // function 순서에 따라 달라짐
        recursive(start, end-1);

    }
}


// void recursive(int start, int end){
//     if (start==end)
//         cout << start << endl;
//     else{
//         cout << end << endl;          // function 순서에 따라 달라짐
//         recursive(start, end-1);

//     }
// }