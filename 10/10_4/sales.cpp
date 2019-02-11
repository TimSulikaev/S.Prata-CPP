#include "pch.h"
#include "Sales.h"
namespace Sales {
	
	double Sales::minimum(const double ar[], int n) {
		double min = ar[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] < min)
				min = ar[i];
		}
		return min;
	}

	double Sales::maximum(const double ar[], int n) {
		double max = ar[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] > max)
				max = ar[i];
		}
		return max;
	}

	double Sales::m_average(const double ar[], int n) {
		double aver = 0;
		for (int i = 0; i < n; i++)
			aver += ar[i];
		return aver / n;
	}

	Sales::Sales(const double ar[], int n) {
		for (int i = 0; i < n; i++) {
			if (sales[i] == 0) {
				sales[i] = minimum(ar, QUARTERS);
				if (i + 1 < n) {
					for (int j = i + 1; j < n; j++)
						sales[i] = 0;
				}
				break;
			}
		}
		min = minimum(ar, n);
		max = maximum(ar, n);
		average = m_average(ar, n);
	}

	Sales::Sales() {
		for (int i = 0; i < QUARTERS; i++) {
			std::cout << "Enter amount for the " << i + 1 << " quarter: ";
			std::cin >> sales[i];
		}
		min = minimum(sales, QUARTERS);
		max = maximum(sales, QUARTERS);
		average = m_average(sales, QUARTERS);
	}
	void Sales::showSales() const{
		std::cout << "\nMinimum: " << min << std::endl;
		std::cout << "Maximum: " << max << std::endl;
		std::cout << "Average: " << average << std::endl;
	}
}