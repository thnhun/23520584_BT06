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
	if (n == 1)
		return x;
	return (Tong(x, n - 1) + pow(x, n));
}