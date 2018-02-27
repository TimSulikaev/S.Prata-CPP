#include <iostream>
#include <climits>

int main(){
    using namespace std;
    const int foot_in_inch = 12;
    const double inch_in_metrs = 0.0254;
    const double pounds_in_kg = 2.2;
    int height_foot;
    int height_inch;
    double height_meters;
    int weight;
    double weight_kg;
    cout << "Enter your height: " << endl << "____ feets \r";
    cin >> height_foot;
    cout << "____ inches \r";
    cin >> height_inch;
    height_meters = static_cast<double>(height_foot * foot_in_inch + height_inch) * inch_in_metrs;
    cout << "Your height is " << height_meters  << " meters" << endl;
    cout << "Enter your weight: " << endl << "____ pounds \r";
    cin >> weight;
    weight_kg = static_cast<double>(weight) / pounds_in_kg;
    cout << "Your weight is " << weight_kg  << " kilograms" << endl;
    cout << "Your BMI is " << weight_kg / (height_meters * height_meters) << endl;
    return 0;
}
