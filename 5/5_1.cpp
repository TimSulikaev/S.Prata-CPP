#include <iostream>
using namespace std;

int main(){
    int i, a, b, sum;
    sum = 0;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    for(i = a; i <= b; i++)
        sum += i;
    cout << "Sum between " << a << " to " << b << " = " << sum << endl;
    return 0;
}
