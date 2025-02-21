#include <iostream>
#include <cmath>
using namespace std;


int main(){


    double farenheit, celcius;

    cout << "Type the temperature in farenheit"<< endl;
    cin >> farenheit;

    //celcius = (farenheit - 32) * 5/9 ;  내 코드
    celcius =  5.0/9.0 * (farenheit - 32);

    cout << "The temperature in Celsius is "<< celcius << endl;



    return 0;
}