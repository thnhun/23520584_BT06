#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void DuaVeCuoi(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	DuaVeCuoi(a, n);
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

bool ktNguyenTo(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

void DuaVeCuoi(int a[], int n) 
{
	if (n == 0)
		return;
	if (ktNguyenTo(a[n - 1]) == 1) 
	{
		DuaVeCuoi(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
		if (ktNguyenTo(a[i])) 
		{
			swap(a[n - 1], a[i]);
			break;
		}
	DuaVeCuoi(a, n - 1);
}