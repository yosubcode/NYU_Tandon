#include <iostream>
#include <string>
using namespace std;


int main(){

    string Last_Name, First_Name, Middle_Name, Middle_Initial;
    
    cout<<"Enter your full name separated by a space: "<<endl;
    cin>>First_Name>>Middle_Name>>Last_Name;
    
    Middle_Initial = Middle_Name[0];
    cout<<Last_Name<<", "<<First_Name<<" "<<Middle_Initial<<".";


    return 0;
}
