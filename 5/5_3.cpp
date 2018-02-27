#include <iostream>

int main(){
    using namespace std;
    int a, sum = 0;
    cout << "Enter a number (Enter 0 if you want to quit): ";
    while((cin >> a) && (a != 0)){
          sum += a;
          cout << "Sum = " << sum << endl;
    }
    cout << "Final Sum = " << sum << endl;
    return 0;
}
