#include <iostream>
#include <string>
int main(){
    using namespace std;
    struct CandyBar {
        string name;
        double weight;
        int cal;
    };
    CandyBar snacks[3] {
        {"Mocha Munch", 2.3, 350},
        {"Wonka", 2.5, 50},
        {"Lindt", 2.0, 200}
    };
    cout << "Candy Bar " << snacks[0].name << endl;
    cout << "Weight is " << snacks[0].weight << " oz"<< endl;
    cout << snacks[0].cal << " calories." << endl;
    cout << "=============================" << endl;
    cout << "Candy Bar " << snacks[1].name << endl;
    cout << "Weight is " << snacks[1].weight << " oz"<< endl;
    cout << snacks[1].cal << " calories." << endl;
    cout << "=============================" << endl;
    cout << "Candy Bar " << snacks[2].name << endl;
    cout << "Weight is " << snacks[2].weight << " oz"<< endl;
    cout << snacks[2].cal << " calories." << endl;
    cout << "=============================" << endl;
    return 0;
}
