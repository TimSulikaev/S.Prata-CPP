#include <iostream>

using namespace std;

double calculate(double, double, double (*calc)(double, double));
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);


int main(){
    const int size = 4;
    double result;
    double x, y;
    double (*pa[size])(double, double) = {add, sub, mul, div};
    cout << "Enter two numbers, or 'q' to quit: ";
    while(cin >> x >> y){
        for(int i = 0; i < size; i++){
            result = calculate(x, y, (*pa[i]));
            cout << result << endl;
        }
        cout << "Enter two numbers, or 'q' to quit: ";
    }
    return 0;
}

double calculate(double x, double y, double (*calc)(double x, double y)){
    return calc(x, y);
}

double add(double x, double y){
    cout << x << " + " << y << " = ";
    return x + y;
}

double sub(double x, double y){
    cout << x << " - " << y << " = ";
    return x - y;
}

double mul(double x, double y){
    cout << x << " * " << y << " = ";
    return x * y;
}

double div(double x, double y){
    cout << x << " / " << y << " = ";
    return x / y;
}

