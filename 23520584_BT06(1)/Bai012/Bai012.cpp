#include<iostream>
#include<iomanip>
float Tinh(int);
using namespace std;

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << "Tich la : " << fixed << setprecision(5) << Tinh(n);
	return 0;
}

float Tinh(int n)
{
	if (n == 0)
		return 1;
	float t = Tinh(n - 1);
	return (t*(1+(float)1/(n*n)));
}
