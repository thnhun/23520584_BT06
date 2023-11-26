#include<iostream>
#include<iomanip>
int Tinh(int);
using namespace std;

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << "So hang thu " << n << " cua day la : " << Tinh(n);
	return 0;
}

int Tinh(int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	return (5* Tinh(n - 1)+6* Tinh(n - 2));
}
