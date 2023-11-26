#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void XuatCon(int[], int, int, int);
void XuatCon(int[], int, int);
void LietKe(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	LietKe(a, n);
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

void XuatCon(int a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n, vt, l - 1);
	cout << setw(4) << a[vt + l - 1];
}

void XuatCon(int a[], int n, int l)
{
	if (n < 1)
		return;
	XuatCon(a, n - 1, l);
	XuatCon(a, n, n - l, l);
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	for (int l = 1; l <= n; l++)
		XuatCon(a, n, n - l, l);
}
