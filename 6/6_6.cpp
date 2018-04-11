#include <iostream>
#include <string>

using namespace std;

struct Patron{
    string name;
    double sum;
};

int main(){
    int num, flag;
    cout << "Enter the number of patrons: ";
    cin >> num;
    struct Patron *patrons = new Patron[num];

    for(int i = 0; i < num; i++){
        cout << "Enter the name of patron: ";
        cin >> patrons[i].name;
        cout << "Enter amount of donation: ";
        cin >> patrons[i].sum;
    }

    cout << "Grand Patrons" << endl;
    flag = 0;
    for(int i = 0; i < num; i++){
        if(patrons[i].sum > 10000){
            flag++;
            cout << patrons[i].name;
            cout << "\t" << patrons[i].sum << "$" << endl;
         }
    }

    if(flag == 0)
        cout << "None" << endl;

    cout << "Patrons" << endl;
    flag = 0;
    for(int i = 0; i < num; i++){
        if(patrons[i].sum < 10000){
            flag++;
            cout << patrons[i].name;
            cout << "\t" << patrons[i].sum << "$" << endl;
         }
    }

    if(flag == 0)
        cout << "None" << endl;

    return 0;
}
