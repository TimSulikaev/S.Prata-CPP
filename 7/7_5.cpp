#include <iostream>

unsigned long long int fact(unsigned long long int);

int main(){
    using namespace std;
    unsigned long long int n;
    cout << "Enter the number or 'q' to quit: ";
    while (cin >> n){
        if(n >= 21)
            cout << "Error, please try again" << endl;
        else
            cout << fact(n) << endl;
        cout << "Enter the number or 'q' to quit: ";
    }
    cout << "Bye!";
    return 0;
}

unsigned long long int fact(unsigned long long int n){
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
