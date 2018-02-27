#include <iostream>
#include <string>

int main(){
    using namespace std;
    const int year = 3;
    const int month = 12;
    int sumY, sumG;
    sumG = 0;
    int sales[year][month];
    string name[month] = {"January", "February", "March",
                            "April", "May", "June",
                            "July", "August", "September",
                            "October", "November", "December"};

    for(int i = 0; i < year; i++){
        sumY = 0;
        cout << i + 1 << " Year" << endl;
        for(int j = 0; j < month; j++){
            cout << "How many books are sold in " << name[j] << endl;
            cin >> sales[year][month];
            sumY += sales[year][month];
        }
        sumG += sumY;
        cout << "Total sales for "<< i + 1 <<" year = " << sumY << endl;
    }
    cout << "General sales for 3 year " << sumG << endl;
    return 0;
}
