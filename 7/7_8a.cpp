#include <iostream>

const int seasons = 4;
const char * snames[seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill_array(double *, int);
void show_array(const double *, int);

int main(){
    double expenses[seasons];
    fill_array(expenses, seasons);
    show_array(expenses, seasons);
    return 0;
}

void fill_array(double * exp, int seasons){
    for (int i = 0; i < seasons; i++){
        std::cout << "Enter " << snames[i] << " expenses: $";
        std::cin >> exp[i];
    }
}

void show_array(const double * exp, int seasons){
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++){
        std::cout << snames[i] << ": $" << exp[i] << '\n';
        total += exp[i];
    }
    std::cout << "Total: $" << total << '\n';
}
