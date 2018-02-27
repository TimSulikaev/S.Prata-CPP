#include <iostream>
#include <string>

int main(){
    using namespace std;
    int k;

    struct car{
        string name;
        int date;
    };

    cout << "How many cars will be put in the catalog? ";
    cin >> k;
    car * ps = new car[k];

    for(int i = 0; i < k; i++){
        cout << "Auto #" << i + 1 << ":" << endl;
        cout << "Enter manufacturer: ";
        cin.get(ps[i].name, 30).get;
        cout << "Enter the year of manufacture: ";
        cin >> ps[i].date;
    }

    cout << "Your collection:" << endl;
    for(int i = 0; i < k; i++)
        cout << ps[i].date << " " << ps[i].name << endl;

    return 0;
}
