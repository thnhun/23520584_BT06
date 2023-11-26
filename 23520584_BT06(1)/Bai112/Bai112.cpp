#include<iostream>
using namespace std;

void Nhap(float[], int&);
float Dautien(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Ket qua la: " << Dautien(a,n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
float Dautien(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = Dautien(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 2003)
		return	a[n - 1];
	return 0;
}
