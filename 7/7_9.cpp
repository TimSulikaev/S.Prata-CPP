#include <iostream>
using namespace std;

const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student *, unsigned int);
void display1(student);
void display2(const student *);
void display3(const student *, unsigned int);

bool rd_str(char *, unsigned int);
unsigned int rd_sz();
int rd_lv();
void clr_input();

int main(){
    cout << "Enter class size: ";
    unsigned class_size = rd_sz();

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    if(entered){
        cout << endl;
        for(int i = 0; i < entered; i++){
            if(i > 0)
                cout << endl;

            display1(ptr_stu[i]);
            cout << endl;
            display2(ptr_stu + i);
        }
        cout << endl;
        display3(ptr_stu, entered);
    }
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student * pa, unsigned int n){
    unsigned int i;
    for(i = 0; i < n; i++){
        if(i > 0)
            cout << endl;

        cout << "Student #" << i + 1 << ":\n" << "Enter student's name: ";
        if(!rd_str(pa[i].fullname, SLEN))
            break;

        cout << "Enter student's hobby: ";
        rd_str(pa[i].hobby, SLEN);

        cout << "Enter student's OOP level: ";
        pa[i].ooplevel = rd_lv();
    }
    return i;
}

void display1(student st){
    cout    << "Name: " << st.fullname
            << "\nHobby: " << (*(st.hobby) ? st.hobby : "none")
            << "\nOOP level: " << st.ooplevel << endl;
}

void display2(const student * ps){
    cout    << "Name: " << ps->fullname
            << "\nHobby: " << (*(ps->hobby) ? ps->hobby : "none")
            << "\nOOP level: " << ps->ooplevel << endl;
}

void display3(const student * pa, unsigned int n){
    for(unsigned int i = 0; i < n; i++){
        if(i > 0)
            cout << endl;
        display2(pa + i);
    }
}

bool rd_str(char * str, unsigned int n){
    cin.get(str, n);
    clr_input();

    return *str;
}

unsigned int rd_sz(){
    unsigned int size;
    while(!(cin >> size) || size == 0){
        clr_input();
        cout << "Bad size. Try again: ";
    }
    clr_input();

    return size;
}

int rd_lv(){
    int level;
    while(!(cin >> level)){
        clr_input();
        cout << "Bad input. Try again: ";
    }
    clr_input();
    return level;
}

void clr_input(){
    cin.clear();
    while(cin.get() != '\n')
        continue;
}
