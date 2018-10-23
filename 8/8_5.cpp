#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T>
T max5(const T * arr);

int main(){
	int arr1[5] = {5, 2, 9, 15, 3};
	double arr2[5] = {6.2, 23.6, 56.4, 36.8, 96.4};
	cout << max5(arr1) << endl;
	cout << max5(arr2) << endl;
	system("pause");
	return 0;
}

template <typename T>
T max5(const T * arr){
	T crnt = 0;
	for(int i = 0; i < 5; i++)
		if(arr[i] > crnt)
			crnt = arr[i];
	return crnt;
}