#include <iostream>
using namespace std;
void Nhap(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int TanSuat(float a[], int n, float x)
{
	if (n == 0)
		return 0;
	int dem = TanSuat(a, n - 1, x);
	if (a[n - 1] == x)
		dem++;
	return dem;
}
int main()
{
	float a[100];
	int n, x;
	cout << "Nhap n:";
	cin >> n;
	Nhap(a, n);
	cout << "Nhap gia tri x:";
	cin >> x;
	cout << "Tan suat xuat hien cua gia tri x la:";
	cout << TanSuat(a, n, x);
	return 0;
}