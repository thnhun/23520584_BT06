#include<iostream>
#include<cmath>
using namespace std;

void Nhap(int[], int&);
int Tong(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Ket qua la: " << Tong(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
int Tong(int a[], int n)
{
	if (n <= 1)
		return 0;
	int s = Tong(a, n - 1);
	if (a[n - 2] > abs(a[n - 1]))
		s = s + a[n - 2];
	return s;
}