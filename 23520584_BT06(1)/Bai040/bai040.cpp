#include<iostream>
#include<cmath>
using namespace std;

float UocSoLeLonNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "ket qua la: " << UocSoLeLonNhat(n);
	return 0;
}
float UocSoLeLonNhat(int n)
{
	n = abs(n);
	if (n % 2 != 0)
		return n;
	return UocSoLeLonNhat(n / 2);
}