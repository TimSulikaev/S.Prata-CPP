#include <iostream>
#include <string>
int main(){
    using namespace std;
    struct {
        string name;
        int diameter;
        double weight;
    } pizza;
    cout << "Enter the name of manufacture: ";
    getline(cin, pizza.name);
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight: ";
    cin >> pizza.weight;
    cout << "Manufacture: " << pizza.name << endl;
    cout << "Diameter: " << pizza.diameter << " sm" << endl;
    cout << "Weight: " << pizza.weight << " oz" << endl;
    return 0;
}
