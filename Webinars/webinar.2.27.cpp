// #include <iostream>
// #include <cmath>
// using namespace std;


// int main(){

//     // int num = 10;
//     // int grade[num] = {97, 100, 50, 73, 93};

//     // cout<<"This is grade : "<<grade<<endl;
//     // cout<<"This is grade.... : "<<grade[4]<<endl;
//     // grade[4] = 2;
//     // cout<<"This is grade.... : "<<grade[4]<<endl;
//     // grade[5] = 34;
//     // cout<<"This is grade.... : "<<grade[5]<<endl;
//     // grade[6] = 34.54;
//     // cout<<"This is grade.... : "<<grade[6]<<endl;


//     // cout<<"This is whole grade.... : ";
//     // for(int i=0; i<num; i++){
//     //     cout<<grade[i]<<", "; 
//     // }


//     ////////////////////////////////////////////////////////////////////////
//     int linearSearch(int arr[], int logical_size, int x){
//         int logical_size=0;
//         for(int i=0; i<logical_size; i++){
//             if (arr[i]==x){
//                 return i;
//           }
//         }
//     }

//     return 0;
// }

// Binary Search.

#include <iostream>
using namespace std;

int linearSearch(int arr[], int logical_size, int x) {
    for (int i = 0; i < logical_size; i++) {
        if (arr[i] == x) {
            return i; // Return the index where x is found
        }
    }
    return -1; // Return -1 if x is not found
}

int main() {
    int size;

    // Asking user for array size
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size]; // Declare array of user-defined size

    // User input for array elements
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the number to search: ";
    cin >> x;

    // Perform linear search
    int result = linearSearch(arr, size, x);

    // Display result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
