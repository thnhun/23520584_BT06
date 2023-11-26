#include<iostream>
using namespace std;

void Nhap(int[], int&);
int ktGiam(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Ket qua la: " << ktGiam(a, n);
	return 0;
}
void Nhap(int a[100], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

int ktGiam(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (a[n - 2] > a[n - 1] && ktGiam(a, n - 1) == 1)
		return 1;
	return 0;
}
