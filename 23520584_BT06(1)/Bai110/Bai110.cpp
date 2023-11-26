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
float DuongDau(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DuongDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 0)
		return a[n - 1];
	return 0;
}
int main()
{
	float a[100];
	int n;
	cout << "Nhap n:";
	cin >> n;
	Nhap(a, n);
	cout << "Gia tri duong dau tien trong mang la:";
	cout << DuongDau(a, n);
	return 0;
}