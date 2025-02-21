#include <iostream>
using namespace std;

// Constant values on each rounding method for switch
const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3; 

int main(){
    int roundingMethod;
    int floorRound, ceilingRound, nearestRound;
    double realNumberInput;

    cout<<"Please enter a Real number: \n";
    cin>>realNumberInput;
    cout<<"Choose your rounding method: \n";
    cout<<"1. Floor round \n2. Ceiling round \n3. Round to the nearest whole number \n";
    cin>>roundingMethod;

    // Calculate the floorRound and ceilingRound.
    floorRound   = realNumberInput / 1;
    ceilingRound = (realNumberInput / 1) + 1;

    // Calculate the nearest round value.
    if (realNumberInput >= ((double)floorRound + (double)ceilingRound) / 2)
        nearestRound = ceilingRound;
    else
        nearestRound = floorRound;

    // Determine rounded value based on the roundingMethod.
    switch (roundingMethod) {
        case 1:
            cout<<floorRound;
            break;
        case 2:
            cout<<ceilingRound;
            break;
        case 3:
            cout<<nearestRound;
            break;
        default:
            cout<<"Invalid round method";
    }

    return 0;
}


// If statement below. 

    // // Determine the rounding method selected by the user
    // if (roundingMethod == FLOOR_ROUND)
    //     roundedResult = floor(realNumberInput);
    // else if (roundingMethod == CEILING_ROUND)
    //     roundedResult = ceil(realNumberInput);
    // else if (roundingMethod == ROUND)
    //     roundedResult = round(realNumberInput);

    // // Print the calculated roundedResult
    // cout<<roundedResult<<endl;