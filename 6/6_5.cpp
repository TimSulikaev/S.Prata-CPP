#include <iostream>

using namespace std;

int main(){
    double salary;
    double sumtax;
    int mintax = 5000;
    cout << "Enter your salary: ";
    while(cin >> salary && salary > 0){
        sumtax = 0;
        if(salary <= mintax)
            sumtax = 0;
        else
            if(salary > mintax && salary <= mintax * 3)
                sumtax = (salary - mintax) * 0.10;
            else
                if(salary > mintax * 3 && salary <= mintax * 7)
                    sumtax = (mintax * 2 * 0.10) + ((salary - mintax * 2) * 0.15);
                else
                    sumtax = (mintax * 2 * 0.10) + (mintax * 4 * 0.15) + ((salary - mintax * 7) * 0.20);

        cout << "Your tax is " << sumtax;
        cout << endl;
        cout << "Enter your salary: ";
    }
    return 0;

}
