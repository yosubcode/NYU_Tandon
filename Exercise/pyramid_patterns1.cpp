#include <iostream>
using namespace std;

int main (){

    int n, countSpace;
    char star = '*', space =' ';

    cout<<"Enter a positive integer: ";
    cin>>n;

    ///////////////////////////////////////////////////////////////// Pattern 1 for loop
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * *

    cout<<"Pattern 1 for loop"<<endl;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<star;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 1 while loop
    // * 
    // * * 
    // * * *
    // * * * * 
    // * * * * *

    cout<<"Pattern 1 while loop"<<endl;
    int i = 1;
    while (i<=n){
        int j = 1;
        while (j <= i){
            cout<<star;
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 2 for loop
    //         * 
    //       * * 
    //     * * * 
    //   * * * * 
    // * * * * * 

    cout<<"Pattern 2 for loop"<<endl;
    for (int i=1; i<=n; i++){
        countSpace = n - i;
        for (int j=1; j<=countSpace; j++)
            cout<<space;
        for (int j=1; j<=i; j++)
            cout<<star;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 2 while loop
    //         * 
    //       * * 
    //     * * * 
    //   * * * * 
    // * * * * * 

    cout<<"Pattern 2 while loop"<<endl;
    i = 1;
    while (i<=n){
        countSpace = n - i;
        int j = 1;
        while (j<=countSpace){
            cout<<space;
            j++;
        }
        int k = 1;
        while (k<=i){
            cout<<star;
            k++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 3 for loop
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 

    cout<<"Pattern 3 for loop"<<endl;
    for (int i=1; i<=n; i++){
        for(int j=n+1-i; j>=1; j--){
            cout<<star;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 3 while loop
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 

    cout<<"Pattern 3 while loop"<<endl;
    i = 1;
    while (i<=n){
        int j = n-i;
        while(j>=1){
            cout<<star;
            j--;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 4 for loop
    // * * * * * 
    //   * * * * 
    //     * * * 
    //       * * 
    //         * 

    cout<<"Pattern 4 for loop"<<endl;

    for (int i=1; i<=n; i++){
        countSpace = i - 1;
        for(int j=1; j<=countSpace; j++)
            cout<<space;
        for(int k=n+1-i; k>=1; k--)
            cout<<star;
        
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;


    ///////////////////////////////////////////////////////////////// Pattern 4 while loop
    // * * * * * 
    //   * * * * 
    //     * * * 
    //       * * 
    //         * 

    cout<<"Pattern 4 while loop"<<endl;

    i = 1;
    while (i<=n){
        countSpace = i - 1;
        int j = 1;
        while (countSpace>=j){
            cout<<space;
            j++;
        }
        int k = n + 1 - i;
        while(k>=1){
            cout<<star;
            k--;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 5 for loop
    //     * 
    //    * * 
    //   * * * 
    //  * * * * 
    // * * * * * 

    cout<<"Pattern 5 for loop"<<endl;

    for (int i=0; i<n; i++){
        for (int j=n-i-1; j>0; j--)
            cout<<space;
        for (int k=0; k<i+1; k++){
            cout<<star;
            cout<<space;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 5 while loop
    //     * 
    //    * * 
    //   * * * 
    //  * * * * 
    // * * * * * 

    cout<<"Pattern 5 while loop"<<endl;
    i = 0;
    while (i<n){
        countSpace = n - 1 - i;
        int j = 0;
        while(j<countSpace){
            cout<<space;
            j++;
        }
        int k = 0;
        while (k<=i){
            cout<<star;
            cout<<space;
            k++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 6 for loop
    // * * * * * * * * * 
    //   * * * * * * * 
    //     * * * * * 
    //       * * * 
    //         * 

    cout<<"Pattern 6 for loop"<<endl;

    for (int i=0; i<n; i++){
        for(int j=0; j<i*2; j++)
            cout<<space;

        for (int k=n*2-i*2-1; k>0; k--){
            cout<<star;
            cout<<space;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 6 while loop
    // * * * * * * * * * 
    //   * * * * * * * 
    //     * * * * * 
    //       * * * 
    //         * 

    cout<<"Pattern 6 while loop"<<endl;

    i = 0;
    while (i<n){
        int j = 0;
        while (j < i){
            cout<<space;
            cout<<space;
            j++;
        }
        int k = 0;
        while (k<2*n - 1 - 2*i){
            cout<<star;
            cout<<space;
            k++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 7 for loop
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 

    cout<<"Pattern 7 for loop"<<endl;

    for (int i=0; i< n*2-1; i++){
        if (i<(n*2)/2){
            for (int j=0; j<i+1; j++){
                cout<<star;
                cout<<space;
            }
            cout<<endl;
        } 
        else {
            for (int k=0; k<(2*n-1)-i; k++){
                cout<<star;
                cout<<space;         
            }
            cout<<endl;
        }
    }

    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 8 for loop
    //     *
    //    **
    //   ***
    //  ****
    // *****
    //  ****
    //   ***
    //    **
    //     *

    cout<<"Pattern 8 for loop"<<endl;

    for (int i=1; i<=n; i++){
        if (i<=n/2+1){
            for (int j=1; j<=n/2+1-i; j++)
                cout<<space;
            for (int k=1; k<=i; k++)
                cout<<star;
        } else{
            for (int j=1; j<=i-(n/2+1); j++)
                cout<<space;
            for (int k=1; k<=(n+1)-i; k++)
                cout<<star;
        }
        cout<<endl;
    }

    // for (int i=0; i<n; i++){
    //     for(int j=0; j<n-1-i; j++)
    //         cout<<space;
    //     for(int k=0; k<i+1; k++)
    //         cout<<star;
    //     cout<<endl;
    // }
    // for (int i=n-2; i>=0; i--){
    //     for(int j=0; j<n-1-i; j++)
    //         cout<<space;
    //     for(int k=0; k<i+1; k++)
    //         cout<<star;
    //     cout<<endl;
    // }

    // cout<<endl;
    // cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 9 for loop
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    cout<<"Pattern 9 for loop"<<endl;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++)
            cout<<space;
        for (int k=1; k<=2*i -1; k++)
            cout<<star;
        cout<<endl;
    }
    for (int i=n-1; i>0 ; i--){
        for (int j=1; j<=n-i; j++)
            cout<<space;
        for (int k=1; k<=2*i-1; k++)
            cout<<star;
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 10 for loop
    // * * * * * * * * * 
    //   * * * * * * * 
    //     * * * * * 
    //       * * * 
    //         * 
    //       * * * 
    //     * * * * * 
    //   * * * * * * * 
    // * * * * * * * * * 

    cout<<"Pattern 10 for loop"<<endl;
    for (int i=1; i<=n; i++){
        for(int j=1; j<i ; j++){
            cout<<space;
            cout<<space;
        }
        for(int k=1; k<=2*n-i-(i-1); k++){
            cout<<star;
            cout<<space;
        }
        cout<<endl;
    }
    for (int i=n-1; i>0; i--){
        for(int j=1; j<i ; j++){
            cout<<space;
            cout<<space;
        }
        for(int k=1; k<=2*n-i-(i-1); k++){
            cout<<star;
            cout<<space;
        }
        cout<<endl;
    }    

    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 11 for loop
    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 
    // 5 5 5 5 5 

    cout<<"Pattern 11 for loop"<<endl;
    for (int i=1; i<=n; i++){ // i=2
        int num = i;
        for(int j=1; j<=i; j++){
            cout<<num;

        int placeValue = 0;
        int division   = n;
        while (division>0){
            placeValue++;
            division /= 10;
        }

        int placeValue_i = 0;
        int division_i   = i;
        while (division_i>0){
            placeValue_i++;
            division_i /= 10;
        }

        if (placeValue_i == placeValue)
            cout<<space;
        else{
            for(int k=1; k<=placeValue; k++)
                cout<<space;
        }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 12 for loop
    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // 11 12 13 14 15 

    cout<<"Pattern 12 for loop"<<endl;

    int num = 0; // 0
    for (int i=1; i<=n; i++){ // i = 2
        for (int j=1; j<=i; j++){ // j = 1
            cout<<num+j;
            cout<<space;
        }
        num+=i;
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 12 while loop
    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // 11 12 13 14 15 

    cout<<"Pattern 12 while loop"<<endl;

    i = 1;
    num = 1; // 4
    while (i <= n){ // i=2
        int j = 1; 
        while(j<=i){ //j=2
            cout<<num;  // 3
            cout<<space;
            num++;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;
    cout<<endl;



    ///////////////////////////////////////////////////////////////// Pattern 13 for loop
    //         1 
    //       2 3 
    //     3 4 5 
    //   4 5 6 7 
    // 5 6 7 8 9 

    cout<<"Pattern 13 for loop"<<endl;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            cout<<space;
            cout<<space;
        }
        int num = i;
        for (int k=1; k<=i; k++){
            cout<<num;
            cout<<space;
            num++;
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 14 for loop
    //         1 
    //       2 3 2 
    //     3 4 5 4 3 
    //   4 5 6 7 6 5 4 
    // 5 6 7 8 9 8 7 6 5 

    cout<<"Pattern 14 for loop"<<endl;
    for(int i=1; i<=n; i++){  // i=
        for(int j=1; j<=n-i; j++){
            cout<<space;
            cout<<space;
        }
        num = i; // 4
        int num2 = 2*i - 2; // 6
        for (int k=1; k<=2*i-1; k++){ // 7   7 loops
            if (k<=i) { // 5<=4
                cout<<num; // 7
                cout<<space;
                num++; // 8
            } else {
                cout<<num2; // 4
                cout<<space;
                num2--; //  3
            }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 15 for loop
    // A 
    // B B 
    // C C C 
    // D D D D 
    // E E E E E 

    cout<<"Pattern 15 for loop"<<endl;
    
    char alphabet = 'A';
    for(int i=1; i<=n; i++){  // i=
        for(int j=1; j<=i; j++){
            cout<<alphabet;
            cout<<space;
        }
        alphabet++;
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 15 while loop
    // A 
    // B B 
    // C C C 
    // D D D D 
    // E E E E E 

    cout<<"Pattern 15 while loop"<<endl;
    
    alphabet = 'A';
    i = 1;
    while (i<=n){
        int j = 1;
        while (j<=i){
            cout<<alphabet;
            cout<<space;
            j++;
        }
        alphabet++;
        i++;
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    ///////////////////////////////////////////////////////////////// Pattern 16 for loop
    // A 
    // B C 
    // D E F 
    // G H I J 
    // K L M N O 

    cout<<"Pattern 16 for loop"<<endl;

    alphabet = 'A'; // D
    for (int i=1; i<=n; i++){ // i=2       5 loops
        for(int j=1; j<=i; j++){ // j=2    2 loops
            cout<<alphabet;
            cout<<space;
            alphabet++;
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;


    return 0;
}

