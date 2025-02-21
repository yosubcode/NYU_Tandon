#include <iostream>
using namespace std;

int main(){

    int n = 26, emptySpace1, emptySpace2;
    char alphabet='a';

    for(int i=0; i<n; i++){
        emptySpace1 = n - i - 1;
        emptySpace2 = 2*i - 1;

        for(int j=0; j<emptySpace1; j++)
            cout<<" ";
        
        cout<<alphabet;

        for(int j=0; j<emptySpace2; j++)
            cout<<" ";
        
        if (i>0)
            cout<<alphabet;
        
        alphabet ++;
        cout<<endl;
    }

    alphabet = alphabet - 2;

    for(int i=n-2; i>=0; i--){
        emptySpace1 = n - i - 1;
        emptySpace2 = 2*i - 1;

        for(int j=0; j<emptySpace1; j++)
            cout<<" ";
        
        cout<<alphabet;

        for(int j=0; j<emptySpace2; j++)
            cout<<" ";
        
        if (i>0)
            cout<<alphabet;
        
        alphabet --;
        cout<<endl;
    }
    return 0;
}



















// #include <iostream>
// using namespace std;

// int main(){

//     int n = 5;
//     int countEmptySpaceFront, countEmptySpaceMiddle;


//     countEmptySpaceFront = 0;
//     countEmptySpaceMiddle = 0;
//     char alphabet = 'a'; // f

//     for (int i=0; i<n; i++){ //n=5, i=4
//         countEmptySpaceFront  = n-i-1; // 0
//         countEmptySpaceMiddle = (2*i) - 1; // 7
        
//         for (int j=0; j<countEmptySpaceFront; j++)
//             cout<<" ";
        
//         cout<<alphabet;

//         for (int j=0; j<countEmptySpaceMiddle; j++)
//             cout<<" ";

//         if (countEmptySpaceMiddle > 0)
//             cout<<alphabet;
        
//         alphabet = alphabet + 1;
//         cout<<endl;
//     }
//     alphabet = alphabet - 2; // a

//     for (int i=n-2; i>=0; i--){ //n=5, i=0
//         countEmptySpaceFront  = n-i-1; // 4
//         countEmptySpaceMiddle = (2*i) - 1; // -1
        
//         for (int j=0; j<countEmptySpaceFront; j++)
//             cout<<" ";
        
//         cout<<alphabet;

//         for (int j=0; j<countEmptySpaceMiddle; j++)
//             cout<<" ";

//         if (countEmptySpaceMiddle > 0)
//             cout<<alphabet;
        
//         alphabet = alphabet - 1;
//         cout<<endl;    
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     int countEmptySpaceFront, countEmptySpaceMiddle;

//     countEmptySpaceFront  = 0; 
//     countEmptySpaceMiddle = 0; 
//     char alphabet = 'a';    // f
    
//     for (int i=0; i<n; i++){ // n = 5  i = 4
//         countEmptySpaceFront  = n - i - 1;// 0
//         countEmptySpaceMiddle = (2*i) - 1; // 7

//         // Iterate front space 
//         for (int j=1; j <= countEmptySpaceFront; j++ ){
//             cout<<" ";
//         }

//         cout<<alphabet;

//         // Iterate middle space
//         if (countEmptySpaceMiddle > 0){
//             for (int j=1; j <= countEmptySpaceMiddle; j++ ){
//                 cout<<" ";
//             }    
//             cout<<alphabet;
//         }

//         cout<<endl;
//         alphabet = alphabet + 1;
//     }


//     alphabet = alphabet - 2; // d

//     for (int i=n-2; i>=0; i--){ // n = 5   i = 3
//         countEmptySpaceFront  = n - i - 1;// 1
//         countEmptySpaceMiddle = (2*i) - 1; // 5

//         // Iterate front space 
//         for (int j=1; j <= countEmptySpaceFront; j++ ){
//             cout<<" ";
//         }

//         cout<<alphabet;

//         // Iterate middle space
//         if (countEmptySpaceMiddle > 0){
//             for (int j=1; j <= countEmptySpaceMiddle; j++ ){
//                 cout<<" ";
//             }    
//             cout<<alphabet;    
//         }
//         cout<<endl;
//         alphabet = alphabet - 1;
//     }

//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
//     int n = 20;   // 최대 높이
//     char alphabet = 'a'; // 시작 문자

//     // 첫 번째 부분 (위쪽)
//     for (int i = 0; i < n; i++) {
//         int countEmptySpaceFront = n - i - 1;  // 앞쪽 공백 수
//         int countEmptySpaceMiddle = 2 * i - 1; // 중간 공백 수 (첫 줄은 0, 두 번째 줄부터는 증가)

//         // 앞쪽 공백 출력
//         for (int j = 0; j < countEmptySpaceFront; j++) {
//             cout << " ";
//         }

//         // 알파벳 출력
//         cout << alphabet;

//         // 중간 공백 출력 (첫 줄은 출력하지 않음)
//         if (countEmptySpaceMiddle > 0) {
//             for (int j = 0; j < countEmptySpaceMiddle; j++) {
//                 cout << " ";
//             }
//             cout << alphabet; // 뒤쪽 알파벳 출력
//         }

//         cout << endl;

//         // 알파벳 갱신
//         alphabet++;
//     }

//     // 두 번째 부분 (아래쪽)
//     alphabet--; // 마지막 알파벳 하나 줄여야 함
//     alphabet--; // 마지막 알파벳 하나 줄여야 함

//     for (int i = n - 2; i >= 0; i--) {
//         int countEmptySpaceFront = n - i - 1;  // 앞쪽 공백 수
//         int countEmptySpaceMiddle = 2 * i - 1; // 중간 공백 수 (첫 줄은 0, 두 번째 줄부터는 증가)

//         // 앞쪽 공백 출력
//         for (int j = 0; j < countEmptySpaceFront; j++) {
//             cout << " ";
//         }

//         // 알파벳 출력
//         cout << alphabet;

//         // 중간 공백 출력 (첫 줄은 출력하지 않음)
//         if (countEmptySpaceMiddle > 0) {
//             for (int j = 0; j < countEmptySpaceMiddle; j++) {
//                 cout << " ";
//             }
//             cout << alphabet; // 뒤쪽 알파벳 출력
//         }

//         cout << endl;

//         // 알파벳 갱신
//         alphabet--;
//     }

//     return 0;
// }
