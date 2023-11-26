#include<iostream>
using namespace std;

void Nhap(int[], int&);
void Hoanvi(int&, int&);
void SapGiam(int[], int);
void Xuat(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "mang sau: ";
	SapGiam(a, n);
	Xuat(a, n);
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
void Hoanvi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SapGiam(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i < n; i++)
		if (a[i] < a[n - 1])
			Hoanvi(a[i], a[n - 1]);
	SapGiam(a, n - 1);
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]: ";
		cout << a[i];
	}
}