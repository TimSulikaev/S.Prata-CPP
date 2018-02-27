#include <iostream>

int main(){
    using namespace std;
    const int str_size = 20;
    char name[str_size];
    char lname[str_size];
    char let;
    int age;
    cout << "What is your first name? ";
    cin.getline(name, str_size);
    cout << "What is your last name? ";
    cin.getline(lname, str_size);
    cout << "What letter grade do you deserve? ";
    cin >> let;
    let++;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lname << ", " << name <<endl;
    cout << "Grade: " << let << endl;
    cout << "Age: " << age;
    return 0;
}
