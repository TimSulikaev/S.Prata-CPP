#include <iostream>
const int strsize = 20;
struct bop {
        char fullname[strsize];
        char title[strsize];
        char bopname[strsize];
        int preference;
};
using namespace std;

int main(){
    char ch;
    bop p[3] = {
        {"Wimp Macho", "Junior Programmer", "MIPS", 1},
        {"Angry Tatarin", "Junior Programmer", "Bashkir", 0},
        {"Mikky Mouse", "Senior Programmer", "Guru", 2}
    };

    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name \t b. display by title" << endl;
    cout << "c. display by bopname \t d. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choice: ";
    cin >> ch;
    while (ch != 'q'){
        switch(ch){
            case 'a':
                for(int i = 0; i < 3; i++){
                    cout << p[i].fullname << endl;
                }
                break;

            case 'b':
                for(int i = 0; i < 3; i++){
                    cout << p[i].title << endl;
                }
                break;

            case 'c':
                for(int i = 0; i < 3; i++){
                    cout << p[i].bopname << endl;
                }
                break;

            case 'd':
                for(int i = 0; i < 3; i++){
                    if(p[i].preference == 0)
                        cout << p[i].fullname << endl;
                    else
                        if(p[i].preference == 1)
                            cout << p[i].title << endl;
                    else
                        if(p[i].preference == 2)
                            cout << p[i].bopname << endl;
                }
                break;
            default:
                cout << "Wrong choice! Try again." << endl;
                break;
        }
        cout << endl;
        cout << "Next choice: ";
        cin >> ch;
    }

    return 0;

}
