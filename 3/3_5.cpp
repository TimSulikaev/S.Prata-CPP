#include <iostream>

int main(){
    using namespace std;
    long long pop_earth, pop_country;
    cout << "Enter the world's population: ";
    cin >> pop_earth;
    cout << "Enter the population of country: ";
    cin >> pop_country;
    cout << "The population of the country is " << pop_country * 100 / double(pop_earth);
    cout << "% of the world population.";
    return 0;
}
