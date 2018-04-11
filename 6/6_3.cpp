#include <iostream>

using namespace std;

int main(){
    char ch;
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore \t p) pianist" << endl;
    cout << "t) tree \t g) game" << endl;
    cin >> ch;
    while(ch != 'c' && ch != 'p' && ch != 't' && ch != 'g'){
        cout << "Please enter a c, p, t, or g: ";
        cin >> ch;
    }
    if (ch == 'c')
        cout << "A lion is a carnivore" << endl;
    else
        if (ch == 'p')
            cout << "Mozart was a pianist" << endl;
        else
            if (ch == 't')
                cout << "A maple is a tree" << endl;
            else
                if (ch == 'g')
                    cout << "Football is a game" << endl;

    return 0;
}
