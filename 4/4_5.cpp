#include <iostream>
#include <string>
int main(){
    using namespace std;
    struct CandyBar {
        string name;
        double weight;
        int cal;
    };
    CandyBar snack {
        "Mocha Munch",
        2.3,
        350
    };
    cout << "Candy Bar " << snack.name << endl;
    cout << "Weight is " << snack.weight << " oz"<< endl;
    cout << snack.cal << " calories." << endl;
    return 0;
}
