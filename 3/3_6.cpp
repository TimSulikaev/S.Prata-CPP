#include <iostream>

int main(){
    using namespace std;
    int dist, fuel;
    cout << "Enter the distance(km): ";
    cin >> dist;
    cout << "Enter spent fuel(L): ";
    cin >> fuel;
    cout << "Your fuel consumption is " << fuel * 100 / double(dist) << " L/100km" << endl;
    return 0;
}
