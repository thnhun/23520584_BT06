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
float DuongCuoi(float a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1] > 0)
		return a[n - 1];
	return DuongCuoi(a, n - 1);
}
int main()
{
	float a[100];
	int n;
	cout << "Nhap n:";
	cin >> n;
	Nhap(a, n);
	cout << "Gia tri duong cuoi cung trong mang la:";
	cout << DuongCuoi(a, n);
	return 0;
}