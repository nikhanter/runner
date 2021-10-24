#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double a;
	double a2;
	double b;
	double b2;
	int c;
	double d;
	double e;
	double f;
	cout << "ââĺäčňĺ äëčííó äčńňŕíöčč(ě): ";
	cin >>a;
	a2 = a / 1000;
	cout << "ââĺäčňĺ âđĺě˙ (ěčíóňű.ńĺęóíäű): ";
	cin >> b;
	c = b;
	e = b - c;
	b2 = (e  + (c * 60)) / 3600;
	f = a2 / b2;
	cout << "âŕřŕ ńęîđîńňü áűëŕ" << f << "ęě/÷";
}
