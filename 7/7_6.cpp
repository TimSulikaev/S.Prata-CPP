#include <iostream>
using namespace std;
int fill_array(double *, int);
void show_array(double *, int);
void reverse_array(double *, int);

int main(){
    const int size = 10;
    double mas[size];
    int amount;
    amount = fill_array(mas, size);
    reverse_array(mas, amount);
    show_array(mas, amount);
    return 0;
}

int fill_array(double * arr, int size){
    int count = 0;
    cout << "Enter \"double\" type numbers: ";
    while(count < size && cin >> arr[count])
        count++;
    cout << "Input is complete" << endl;
    return count;
}

void show_array(double * arr, int size){
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void reverse_array(double * arr, int size){
    double temp;
    int n;

    if (size > 3 && size % 2)
        n = (size - 1)/2;
    else
        n = size/2;

    for(int i = 0; i < n; i++){
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
