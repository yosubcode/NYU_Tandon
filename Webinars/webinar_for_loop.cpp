#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int j,k;

    j = i++ ;
    k = ++i ;

    cout<<i<<", "<<j<<", "<<k<<endl;

    int x = 2, y= 1, z;
    x++;
    --y;
    x+= 2+(y++);
    y-= 2+(++x);
    x*=2;

    z = (x++) + (y++) - (++x) ; 

    cout<<x<<", "<<y<<", "<<z<<endl;

    // cout<<""<<endl;

    // for (int i=0; i <= 10; i++){
    //     cout<<i<<endl;

    // }
    //  counter = 0
    //  while (true){
    //     counter++   
    //  }

    return 0;
}