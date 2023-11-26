#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int ViTriDau(int[], int);
using namespace std;

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nVi tri gia tri chan dau tien la : " << ViTriDau(a, n);
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

int ViTriDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ViTriDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (a[n - 1] % 2 == 0)
		return n - 1;
	return -1;
}