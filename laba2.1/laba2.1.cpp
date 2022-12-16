#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "x = "; cin >> x;

	z1 = (1 - (2 * (pow(sin(x), 2)))) / (1 + sin(2 * x));
	z2 = (1 - tan(x)) / (1 + tan(x));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
