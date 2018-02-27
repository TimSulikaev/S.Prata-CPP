#include <iostream>

int main(){
    using namespace std;
    int balDaphne = 100;
    int balCleo = 100;
    int i = 0;
    float percentDaphne = 0.10;
    float percentCleo = 0.05;
    double sumDaphne = balDaphne;
    double sumCleo = balCleo;

    while(!(sumDaphne < sumCleo)){
        i++;
        sumDaphne += balDaphne * percentDaphne;
        sumCleo += sumCleo * percentCleo;
        cout << "Year: " << i << endl;
        cout << "Dafna have = " << sumDaphne << endl;
        cout << "Cleo have = " << sumCleo << endl;
        cout << "===============================" << endl;
    }
    cout << "In " << i << " years Cleo's balance will be more than Daphne's balance." << endl;
    return 0;
}
