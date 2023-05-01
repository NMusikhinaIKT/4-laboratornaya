#include <iostream>
#include "Header.h"
using namespace std;
extern "C" float SumR(int k, float x);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	int n;
	float x;
	cout << "Введите x " << endl;
	cin >> x;
	cout << "Введите количество элементов ряда " << endl;
	cin >> n;
	double R = 0.0;
	R = SumR(n, x);
	cout << "Сумма " << n << " элементов ряда = " << R << endl;
	return 0;
}