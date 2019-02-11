#include "pch.h"
#include <iostream>
#include "Sales.h"
namespace Sales {
	double minimum(const double ar[], int n){
		double min = ar[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] < min)
				min = ar[i];
		}
		return min;
	}
	
	double maximum(const double ar[], int n){
		double max = ar[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] > max)
				max = ar[i];
		}
		return max;
	}
	
	double average(const double ar[], int n){
		double aver = 0;
		for (int i = 0; i < n; i++)
			aver += ar[i];
		return aver / n;
	}
	
	void setSales(Sales & s, const double ar[], int n) {
		for (int i = 0; i < n; i++) {
			if (s.sales[i] == 0) {
				s.sales[i] = minimum(ar, QUARTERS);
				if (i + 1 < n) {
					for (int j = i + 1; j < n; j++)
						s.sales[i] = 0;
				}
				break;
			}
		}
		s.min = minimum(ar, n);
		s.max = maximum(ar, n);
		s.average = average(ar, n);
	}
	
	void setSales(Sales & s) {
		for (int i = 0; i < QUARTERS; i++) {
			std::cout << "Enter amount for the " << i + 1 << " quarter: ";
			std::cin >> s.sales[i];
		}
		s.min = minimum(s.sales, QUARTERS);
		s.max = maximum(s.sales, QUARTERS);
		s.average = average(s.sales, QUARTERS);
	}
	void showSales(const Sales & s) {
		std::cout << "\nMinimum: " << s.min << std::endl;
		std::cout << "Maximum: " << s.max << std::endl;
		std::cout << "Average: " << s.average << std::endl;
	}
}