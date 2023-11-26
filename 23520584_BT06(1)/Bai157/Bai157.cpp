#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void ChanTangLeTang(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	ChanTangLeTang(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(6);
	}
}

void ChanTangLeTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i < n - 1; i++)
	{
		if ((a[i] % 2 == 0) && (a[n - 1] % 2 == 0) && (a[i] > a[n - 1]))
			swap(a[i], a[n - 1]);
		if ((a[i] % 2 != 0) && (a[n - 1] % 2 != 0) && (a[i] > a[n - 1]))
			swap(a[i], a[n - 1]);
	}
	ChanTangLeTang(a, n - 1);
}
