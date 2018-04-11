#include <iostream>
#include <array>

int main(){
    const int sizeArr = 10;
    using namespace std;
    bool err_flag = 0;
    double sum = 0;
    double sr;
    array<double, sizeArr> mas;

    cout << "Enter amount of donation: ";
    for(int i = 0; i < sizeArr; i++){
        if(!(cin >> mas[i])){
            err_flag = true;
            break;
        }
        else
            sum += mas[i];
    }
    if(!err_flag){
        sr = sum/sizeArr;
        cout << "Average amount of donation = " << sr << endl;
        cout << "Donation > Average of donation: ";
        for(int i = 0; i < sizeArr; i++){
            if(mas[i] > sr)
                cout << mas[i] << "\t" ;
        }
    }
    else
        cout << "Error type. Exit....." << endl;

    return 0;
}
