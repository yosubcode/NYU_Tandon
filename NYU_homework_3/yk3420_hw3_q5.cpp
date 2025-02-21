#include <iostream>
#include <string>
using namespace std;

// Constants for conversion factors
const double KILOGRAM_PER_POUND = 0.453592;
const double METER_PER_INCH     = 0.0254;

int main(){
    double weghtInPounds, weightInKg, heightInInches, heightInMeter, bmiRange;
    string weightStatus;

    cout<<"Please enter weight (in pounds): ";
    cin>>weghtInPounds;
    cout<<"Please enter height (in inches): ";
    cin>>heightInInches;

    // Convert weight to kilograms and height to meters
    weightInKg    = weghtInPounds  * KILOGRAM_PER_POUND;
    heightInMeter = heightInInches * METER_PER_INCH;

    // Calculate BMI using the formula: weight(kg) / (height(m) * height(m))
    bmiRange = weightInKg / (heightInMeter*heightInMeter);

    // Determine weight status based on BMI range
    if (bmiRange < 18.5)
        weightStatus = "Underweight";
    else if (bmiRange >= 18.5 && bmiRange < 25)
        weightStatus = "Normal";
    else if (bmiRange >= 25 && bmiRange < 30)
        weightStatus = "Overseight";
    else if (bmiRange >= 30)
        weightStatus = "Obese";

    // Print the calculated weight status
    cout<<"The weight status is: "<<weightStatus<<endl;

    return 0;
}