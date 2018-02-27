#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    int w_count = 0;
    string words;
    cout << "Enter the words (done - quit)" << endl;
    getline(cin, words);
    while(words != "done"){
        getline(cin, words);
        w_count++;
    }
    cout << "You entered: " << w_count << " words" << endl;
    return 0;
}
