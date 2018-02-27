#include <iostream>

int main(){
    using namespace std;
    const double mile_in_100km = 62.14;
    const double L_in_gal = 3.875;
    double fuel;
    cout << "Enter your fuel consumption(L/100km): ";
    cin >> fuel;
    cout << "Your fuel consumption is " << mile_in_100km /(fuel / L_in_gal) << " miles/gal" << endl;
    return 0;
}
