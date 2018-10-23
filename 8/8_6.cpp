#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(const T * arr, int size);

const char * maxn(const char *arr[], int size);

int main(){
	int arr1[6] = {5, 2, 9, 15, 3, 7};
	double arr2[4] = {6.2, 23.6, 56.4, 36.8};
	char * arr3[5] = {"hello", "bye", "see you", "how are you?", "how do you do?"};
	cout << maxn(arr1, 6) << endl;
	cout << maxn(arr2, 4) << endl;
	cout << maxn(arr3, 5) << endl;
	system("pause");
	return 0;
}

template <typename T>
T maxn(const T * arr, int size){
	T crnt = 0;
	for(int i = 0; i < size; i++)
		if(arr[i] > crnt)
			crnt = arr[i];
	return crnt;
}

const char * maxn(const char *arr[], int size){
	const char * crnt = nullptr;
	int maxchar = strlen(arr[0]);
	int next = 0;
	for(int i = 0; i < size; i++){
		next = strlen(arr[i]);
		if(next > maxchar){
			maxchar = next;
			crnt = &arr[i][0];
		}	
	}
	return crnt;
}