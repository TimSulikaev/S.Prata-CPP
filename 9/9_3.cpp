#include "pch.h"
#include <iostream>

struct chaff {
	char dross[20];
	int slag;
};

int main(){
	using namespace std;
	const int buf_sz = 512;
	const int arr_sz = 2;
	char * buffer = new char[buf_sz];
	chaff *arr = new (buffer) chaff[arr_sz];
	for (int i = 0; i < arr_sz; i++) {
		char text[20];
		cout << "Enter dross #" << i + 1 << ": ";
		cin >> text;
		strcpy_s(arr[i].dross, text);
		cout << "Enter slag #" << i + 1 << ": ";
		cin >> arr[i].slag;
	}
	for (int i = 0; i < arr_sz; i++) {
		cout << "Struct #" << i + 1 << ": " << endl;
		cout << arr[i].dross << " : " << arr[i].slag << endl;
	}
	system("pause");
	return 0;
}