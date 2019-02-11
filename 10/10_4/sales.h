#pragma once
#include <iostream>

namespace Sales {
	const int QUARTERS = 4;
	class Sales {
	private:
		double sales[QUARTERS] = { 0, 0, 0, 0 };
		double average;
		double max;
		double min;
	public:
		Sales();
		Sales(const double ar[], int n);
		~Sales() {};
		double minimum(const double ar[], int n);
		double maximum(const double ar[], int n);
		double m_average(const double ar[], int n);
		void showSales() const;
	};
	
}