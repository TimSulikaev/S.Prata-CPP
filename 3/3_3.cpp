#include <iostream>

int main(){
    using namespace std;
    const int min_in_deg = 60;
    const int sec_in_min = 60;
    int deg, minutes, sec;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;
    cout << deg << " degrees, " << minutes << " minutes, " << sec << " seconds = ";
    cout << deg + (double(minutes + (sec/sec_in_min))/min_in_deg) << " degrees";
    return 0;
}
