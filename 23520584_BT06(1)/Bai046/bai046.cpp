#include<iostream>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x = TinhAn(n);
	int y = TinhBn(n);
	cout << "Ket qua la: " << x << ", " << y;
	return 0;
}

int TinhAn(int n)
{
	if (n == 1)
		return 2;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (3 * y + 2 * x);
}
int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (x + 3 * y);
}
