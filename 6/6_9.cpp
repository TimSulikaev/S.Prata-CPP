#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Patron{
    string name;
    double sum;
};

int main(){
    int num = 0;
    int flag;
    ifstream inFile;
    inFile.open("patrons.txt");
    inFile >> num;
    struct Patron *patrons = new Patron[num];

    for(int i = 0; i < num; i++){
        inFile.ignore();
        getline(inFile,patrons[i].name);
        inFile >> patrons[i].sum;
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
