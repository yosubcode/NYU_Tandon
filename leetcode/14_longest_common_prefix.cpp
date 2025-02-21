#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    vector<string> strs;
    string input;

    cout<<"Enter strings with space: ";
    while (true){
        cin>>input;
        if (input=="stop")
            break;
        strs.push_back(input);

    }
    cout<<"This is the first letter:  "<< strs[0] << endl;
    for (int i=0; i < strs.size(); i++)
        cout<<strs[i]<<endl;
    
    int n = strs.size();
    
    for (int i=0; ){
        for (int j=0;    ){
            strs[i][j]



        }


    }






    return 0;
}