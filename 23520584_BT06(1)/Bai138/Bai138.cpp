#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int TimUCLN(int[], int);
int ucln(int, int);
using namespace std;

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout <<"\nUoc chung lon nhat cua cac phan tu trong mang la : " << TimUCLN(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << setprecision(3) << a[n - 1];
}

int TimUCLN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimUCLN(a, n - 1);
	lc = ucln(lc, a[n - 1]);
	 return lc;
}

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
