#include <iostream>

struct CandyBar{
	const char * name;
	double weight;
	int kal;
};

void fill(CandyBar &c, const char * text = "Millennium Munch", double w = 2.85, int k = 350);
void show(const CandyBar &c);

int main(){
	CandyBar mm;
	CandyBar merci;
	fill(mm);
	show(mm);
	fill(merci, "Merci", 2.03, 150);
	show(merci);
	system("pause");
	return 0;
}

void fill(CandyBar &c, const char * text, double w, int k){
	c.name = text;
	c.weight = w;
	c.kal = k;
}

void show(const CandyBar &c){
	std::cout << c.name << std::endl;
	std::cout << c.weight << std::endl;
	std::cout << c.kal << std::endl;
}