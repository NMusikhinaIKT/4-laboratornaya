#include <iostream>
#include "Header.h"
using namespace std;
extern "C" float SumR(int k, float x);
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	int n;
	float x;
	cout << "������� x " << endl;
	cin >> x;
	cout << "������� ���������� ��������� ���� " << endl;
	cin >> n;
	double R = 0.0;
	R = SumR(n, x);
	cout << "����� " << n << " ��������� ���� = " << R << endl;
	return 0;
}