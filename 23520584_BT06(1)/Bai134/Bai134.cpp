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
int TimViTri(float a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] >= 0)
		return lc;
	if (lc == -1)
		return n - 1;
	if (a[n - 1] > a[lc])
		lc = n - 1;
	return lc;
}
int main()
{
	float a[100];
	int n;
	cout << "Nhap n:";
	cin >> n;
	Nhap(a, n);
	cout << "Vi tri gia tri am nho nhat trong mang la : ";
	cout << TimViTri(a, n);
	return 0;
}