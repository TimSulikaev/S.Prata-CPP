#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    ifstream inFile;
    inFile.open("symbols.txt");
    if(!inFile.is_open()){
        cout << "Could not open the file symbols.txt" << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    int count = 0;
    inFile >> ch;
    while(inFile.good()){
        ++count;
        inFile >> ch;
    }
    if(inFile.eof())
        cout << "End of file reached.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    if(count == 0)
        cout << "No data processed.\n";
    else
        cout << "Symbols read: " << count << endl;

    inFile.close();
return 0;
}
