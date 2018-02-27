#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    const int ar_size = 50;
    int w_count = 0;
    char words[ar_size];
    cout << "Enter the words (done - quit)" << endl;
    cin >> words;
    while(strcmp(words, "done")){
        cin >> words;
        w_count++;
    }
    cout << "You entered: " << w_count << " words" << endl;
    return 0;
}
