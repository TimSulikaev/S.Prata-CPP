#include <iostream>
void cin_arr(double *, int);
void cout_arr(const double *, int);
double av_score(const double *, int);

using namespace std;

int main(){
    int size = 10;
    double mas[size];
    for(int i = 0; i < size; i++)
        mas[i] = -1;
    cin_arr(mas, size);
    cout_arr(mas, size);
    cout << "Average: " << av_score(mas, size);
    return 0;
}

void cin_arr(double * arr, int size){
    cout << "Enter the golf's scores or press 'q' to finish input: ";
    for(int i = 0; i < size; i++) {
        if(!(cin >> arr[i])){
            arr[i] = -1;
            break;
        }
    }
    cout << "Input is complete" << endl;
}

void cout_arr(const double * arr, int size){
    cout << "Game score: ";
    for(int i = 0; i < size; i++)
        if(arr[i] > -1)
            cout << arr[i] << " ";
    cout << endl;
}

double av_score(const double * arr, int size){
    double sum = 0;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > -1){
            sum += arr[i];
            count++;
        }
    }
    return sum/count;
}
