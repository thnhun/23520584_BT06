#include<iostream>
#include<cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "ket qua la: " << Tong(n);
	return 0;
}
float Tong(int n)
{
	if (n == 1)
		return 2;
	return (5 * Tong(n - 1) + sqrt(24 * pow(Tong(n - 1), 2) - 8));
}