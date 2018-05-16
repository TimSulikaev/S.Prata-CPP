#include <iostream>

const int seasons = 4;
const char * snames[seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct struct_exp {
        double expenses[seasons];
    };

void fill_array(struct_exp *, int);
void show_array(const struct_exp *, int);

int main(){
    struct_exp exp;
    fill_array(&exp, seasons);
    show_array(&exp, seasons);
    return 0;
}

void fill_array(struct_exp * exp, int seasons){
    for (int i = 0; i < seasons; i++){
        std::cout << "Enter " << snames[i] << " expenses: $";
        std::cin >> exp->expenses[i];
    }
}

void show_array(const struct_exp * exp, int seasons){
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++){
        std::cout << snames[i] << ": $" << exp->expenses[i] << '\n';
        total += exp->expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}
