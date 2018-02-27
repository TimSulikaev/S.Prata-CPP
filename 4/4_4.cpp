#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    const int st_size = 20;
    char name[st_size];
    char lname[st_size];
    char fullname[st_size * 2 + 2];
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your last name: ";
    cin >> lname;
    strcpy(fullname, lname);
    strcat(fullname, ", ");
    strcat(fullname, name);
    cout << "Here's the information in a single string: " << fullname << endl;
    return 0;
}
