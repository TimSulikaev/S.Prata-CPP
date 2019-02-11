#include "pch.h"
#include <iostream>
#include "Sales.h"

int main(){
	Sales::Sales s1;
	Sales::setSales(s1);
	Sales::showSales(s1);

	double ar[4] = { 58024.69, 24896.90, 37821.11, 96425.73 };
	Sales::Sales s2;
	Sales::setSales(s2, ar, Sales::QUARTERS);
	Sales::showSales(s2);

	system("pause");
	return 0;
}



