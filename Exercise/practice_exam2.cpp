#include <iostream>
using namespace std;

int main(){

    int n = 10;
    int countEmptySpace1, countEmptySpace2;
    

    for (int i=0; i<n; i++)
        cout<<"#";
    cout<<endl;
    //cout<<endl;

    countEmptySpace1 = 0;
    countEmptySpace2 = 0;

    for (int i=0; i< n/2 - 1; i++){ // i = 3
        countEmptySpace1 = i; // 3
        countEmptySpace2 = n - 4 - (2*i); // 6 - (2x3) = 0

        cout<<"#";

        for(int j=0; j<countEmptySpace1; j++)
            cout<<" ";

        cout<<"$";

        for(int j=0; j<countEmptySpace2; j++)
            cout<<" ";

        cout<<"$";

        for(int j=0; j<countEmptySpace1; j++)
            cout<<" ";
        
        cout<<"#"<<endl;
        //cout<<endl;
    }
    
    for (int i=n/2-2; i>=0; i--){ // i = 0
        countEmptySpace1 = i; // 0
        countEmptySpace2 = n - 4 - (2*i); // 6 - (2x0) = 6

        cout<<"#";

        for(int j=0; j<countEmptySpace1; j++)
            cout<<" ";

        cout<<"$";

        for(int j=0; j<countEmptySpace2; j++)
            cout<<" ";

        cout<<"$";

        for(int j=0; j<countEmptySpace1; j++)
            cout<<" ";
        
        cout<<"#"<<endl;
        //cout<<endl;
    }

    for (int i=0; i<n; i++)
        cout<<"#";

    return 0;
}






































// #include <iostream>
// using namespace std;

// int main(){

//     int n = 20, num, emptySpace1, emptySpace2;

//     num = n/2-1;
//     emptySpace1 = 0;
//     emptySpace2 = 0;

//     for (int i=0; i<n; i++)
//         cout<<'#';
//     cout<<endl;
//     cout<<endl;


//     for (int i=0; i < num; i++) {   // num = 4   i= 4
//         emptySpace1 = i; // 3
//         emptySpace2 = n - 4 - (2*i); // 10 - 4 - (2*2) = 0

//         cout<<'#';

//         for (int j=1; j <= emptySpace1; j++){
//             cout<<" ";
//         }
//         cout<<'$';

//         for (int j=1; j <= emptySpace2; j++){
//             cout<<" ";
//         }

//         cout<<'$';

//         for (int j=1; j <= emptySpace1; j++){
//             cout<<" ";
//         }

//         cout<<'#'<<endl;
//         cout<<endl;
//     }


//     for (int i=num-1; i < num && i >=0; i--) {   // num = 4   i= -1
//         emptySpace1 = i; // 0
//         emptySpace2 = n - 4 - (2*i); // 10 - 4 - (2*0) = 6

//         cout<<'#';

//         for (int j=1; j <= emptySpace1; j++){
//             cout<<" ";
//         }
//         cout<<'$';

//         for (int j=1; j <= emptySpace2; j++){
//             cout<<" ";
//         }

//         cout<<'$';

//         for (int j=1; j <= emptySpace1; j++){
//             cout<<" ";
//         }

//         cout<<'#'<<endl;
//         cout<<endl;
//     }

//     for (int i=0; i<n; i++)
//         cout<<'#';
//     cout<<endl;

//     return 0;
// }






