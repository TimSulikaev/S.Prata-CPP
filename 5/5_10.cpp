#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    int row, i, j, k;
    cout << "Enter the number of rows: ";
    cin >> row;
    for (i = 0; i < row; i++){
        for(j = 0; j < row - i - 1; j++){
            cout << ".";
        }
        for(k = 0; k < row - j; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
