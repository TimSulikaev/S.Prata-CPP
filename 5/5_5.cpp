#include <iostream>
#include <string>

int main(){
    using namespace std;
    int sum = 0;
    const int arr_size = 12;
    string month[arr_size] =   {"January", "February", "March", "April",
                                "May", "June", "July", "August",
                                "September", "October", "November", "December"};
    int sails[arr_size];

    for(int i = 0; i < 12; i++){
        cout << "How many books sold in " << month[i] << " ? " << endl;
        cin >> sails[i];
        sum += sails[i];
    }

    cout << "Annual sales " << sum << endl;
    return 0;
}
