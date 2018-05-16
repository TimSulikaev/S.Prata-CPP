#include <iostream>
double av_harm(int, int);

int main(){
    using namespace std;
    int a, b;
    cout << "Enter two numbers: ";
    while(cin >> a >> b){
        if(a != 0 && b != 0){
            cout << av_harm(a, b) << endl;
            cout << "Enter two numbers: ";
        }
        else
            break;
    }
    cout << "End of program" << endl;
    return 0;
}

double av_harm(int x, int y){
    return 2.0 * x * y / (x + y);
}
