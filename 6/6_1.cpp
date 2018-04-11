#include <iostream>
#include <string>
#include <cctype>

int main(){
    using namespace std;
    int sizeStr;
    char ch;
    string streamStd;
    cout << "Enter something: " << endl;
    getline(cin, streamStd);
    sizeStr = streamStd.size();
    for(int i = 0; i < sizeStr; i++){
        ch = streamStd[i];

        if(ch != '@'){
            if(isspace(ch) || ispunct(ch))
                cout << ch;
            else
                if(isdigit(ch))
                    cout << "";
            else
                if(isalpha(ch))
                    islower(ch) ? cout << (char)toupper(ch) : cout << (char)tolower(ch);
        }
        else {
            cout << "";
            break;
        }
    }
    return 0;
}
