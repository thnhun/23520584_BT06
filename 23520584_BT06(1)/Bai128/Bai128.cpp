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
float DuongNhoNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DuongNhoNhat(a, n - 1);
	if (a[n - 1] <= 0);
	return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}
int main()
{
	float a[100];
	int n;
	cout << "Nhap n:";
	cin >> n;
	Nhap(a, n);
	cout << "Gia tri duong nho nhat trong mang la:";
	cout << DuongNhoNhat(a, n);
	return 0;
}