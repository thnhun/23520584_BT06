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
		return ((float)1 / 1 / 2 / 3);
	float s = Tong(n - 1);
	return (s + (float)1 / n / (n + 1) / (n + 2));
}