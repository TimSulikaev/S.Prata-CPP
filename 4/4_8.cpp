#include <iostream>
#include <string>
int main(){
    using namespace std;
    struct pizza{
        string name;
        int diameter;
        double weight;
    };
    pizza *pt = new pizza;
    cout << "Enter the name of manufacture: ";
    getline(cin, pt->name);
    cout << "Enter the diameter of the pizza: ";
    cin >> pt->diameter;
    cout << "Enter the weight: ";
    cin >> pt->weight;
    cout << "Manufacture: " << pt->name << endl;
    cout << "Diameter: " << pt->diameter << " sm" << endl;
    cout << "Weight: " << pt->weight << " oz" << endl;
    delete pt;
    return 0;
}
