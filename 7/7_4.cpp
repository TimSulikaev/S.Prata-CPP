#include <iostream>
long double probability(unsigned numbers, unsigned picks);

int main(){
    using namespace std;
    const int main_num = 47;
    const int mega_num = 27;
    long double total = probability(main_num, 5);
    long double mega_choice = probability(mega_num, 1);
    cout << "Probability is " << total * mega_choice;
    return 0;
}


long double probability (unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}
