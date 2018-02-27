#include <iostream>
#include <array>
using namespace std;
int main(){
    array<double, 5> running;
    cout << "Enter the results of the 1st race: ";
    cin >> running[0];
    cout << "Enter the results of the 2nd race: ";
    cin >> running[1];
    cout << "Enter the results of the 3rd race: ";
    cin >> running[2];
    running[3] = running[2] + running[1] + running[0];
    running[4] = running[3]/2;
    cout << "1st race = " << running[0] << " sec\n";
    cout << "2st race = " << running[1] << " sec\n";
    cout << "3st race = " << running[2] << " sec\n";
    cout << "Total = " << running[3] << " sec\n";
    cout << "Average = " << running[4] << " sec\n";

    return 0;
}
