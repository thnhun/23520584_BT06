#include<iostream>
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
	if (n == 0)
		return 0.5;
	float s = Tong(n - 1);
	return (s + (float)(2*n+1)/(2*n+2));
}