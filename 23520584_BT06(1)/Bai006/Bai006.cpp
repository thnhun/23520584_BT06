#include<iostream>
#include<iomanip>
float Tong(int);
using namespace std;

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << "Tong la : " << fixed << setprecision(5) << Tong(n);
	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + (float)n / (n + 1));
}
