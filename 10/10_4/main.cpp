#include "pch.h"
#include "Sales.h"

int main() {
	Sales::Sales s1;
	s1.showSales();

	double ar[4] = { 58024.69, 24896.90, 37821.11, 96425.73 };
	Sales::Sales s2 = Sales::Sales(ar, Sales::QUARTERS);
	s2.showSales();

	system("pause");
	return 0;
}