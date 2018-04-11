#include <iostream>
#include <string>
using namespace std;

int main(){
    const int sizevlet = 12;
    char vlet[sizevlet] = {'a','e','y','u','i','o','A','E','Y','U','I','O'};
    string str;
    bool isv = false;
    int v = 0;
    int c = 0;
    int o = 0;

    cout << "Enter words (q to quit): " << endl;
    while(cin >> str && str != "q"){
        if(isalpha(str[0])){
            for(int i = 0; i < sizevlet; i++)
                if(str[0] == vlet[i])
                    isv = true;
            isv ? ++v : ++c;
        } else
            ++o;

        isv = false;
    }
    cout << v << " words beginning with vowels" << endl;
    cout << c << " words beginning with consonants" << endl;
    cout << o << " others" << endl;


return 0;
}
