#include <iostream>

int main(){
    using namespace std;

    const int min_in_h = 60;
    const int sec_in_min = 60;
    const int h_in_day = 24;

    long long sec;
    int min, hour, day;

    cout << "Enter the number of seconds:" << endl;
    cin >> sec;

    min = sec/sec_in_min;
    hour = min/min_in_h;
    day = hour/h_in_day;

    cout << sec << " seconds = ";
    cout << day << " days, ";
    cout << hour % h_in_day << " hours, ";
    cout << min % min_in_h << " minutes, ";
    cout << sec % sec_in_min << " seconds";

    return 0;
}
