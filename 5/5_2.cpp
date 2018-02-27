#include <iostream>
#include <array>
const int ArSize = 101;


int main(){
    using namespace std;
    array<long double, ArSize> factorials = {1L,1L};

    for(int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];

    cout << "100! = " << factorials[100] << endl;

    return 0;
}
