#pragma once
namespace Sales {
	const int QUARTERS = 4;
	struct Sales {
		double sales[QUARTERS] = {0, 0, 0, 0};
		double average;
		double max;
		double min;
	};
	double minimum(const double ar[], int n);
	double maximum(const double ar[], int n);
	double average(const double ar[], int n);
	void setSales(Sales & s, const double ar[], int n);
	void setSales(Sales & s);
	void showSales(const Sales & s);
}