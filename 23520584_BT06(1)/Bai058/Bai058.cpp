#include<iostream>
#include<cmath>
using namespace std;

float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua la: " << Tong(x, n);
	return 0;
}
float Tong(float x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1 + x * x / 2;
	float a = Tong(x, n - 1);
	float b = Tong(x, n - 2);
	float hs = x * x / (2 * n - 1) / (2 * n);
	return ((1 + hs) * a - hs * b);
}
