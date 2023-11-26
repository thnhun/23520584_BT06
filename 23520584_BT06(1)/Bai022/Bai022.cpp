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
	n = abs(n);
	if (n == 0)
		return 0;
	float s = Tong(n / 10);
	return (s + n % 10);
}