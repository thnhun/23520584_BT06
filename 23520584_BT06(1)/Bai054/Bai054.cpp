#include<iostream>
#include<iomanip>
#include<cmath>
float Tinh(float, int);
using namespace std;

int main()
{
	float x;
	cout << "Nhap x : ";
	cin >> x;
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << "S(" << x <<","<<n<< ") : " <<  fixed << setprecision(5) << Tinh(x, n);
	return 0;
}

float Tinh(float x, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x * x;
	return ((1 + x * x)* Tinh(x, n - 1) - x * x * Tinh(x, n - 2));
}
