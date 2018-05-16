#include <iostream>
const int Max = 5;

int fill_array(double *, double *);
void show_array(const double *, const double *);
void revalue(double r, double *, double *);

int main (){
    using namespace std;
    double properties[Max];
    int size = fill_array(properties, properties + Max);
    show_array(properties, properties + size);
    if (size > 0){
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: "; // повторный запрос на ввод числа
        }
        revalue(factor, properties, properties + size);
        show_array(properties, properties + size);
    }
    cout << "Done.\n";
    cin.get ();
    cin.get ();
    return 0;
}
int fill_array(double * begin, double * end){
    using namespace std;
    double temp;
    int count = 0;
    for(double * pt = begin; pt != end; pt++, count++){
        cout << "Enter value #" << count + 1 << ": ";
        cin >> temp;
        if(!cin){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else
            if(temp < 0)
                break;
            *pt = temp;
    }
    return count;
}

void show_array(const double * begin, const double * end){
    using namespace std;
    int count = 1;
    for(const double * pt = begin; pt != end; ++pt, count++){
        cout << "Property #" << count << ": $";
        cout << *pt << endl;
    }
}

void revalue(double r, double * begin, double * end){
    for(double * pt = begin; pt != end; pt++)
        *pt *= r;
}
