#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int DauTien(int[], int, int, int);
using namespace std;

int main()
{
	int a[100];
	int n, x, y;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nNhap khoang [x,y] : " << endl;
	cout << "   x = ";
	cin >> x;
	cout << "   y = ";
	cin >> y;
	cout << "Gia tri dau tien thuoc [x,y] la : " << DauTien(a, n, x, y);
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

int DauTien(int a[], int n, int x, int y)
{
	if (n == 0)
		return x;
	int lc = DauTien(a, n - 1, x, y);
	if (lc != x)
		return lc;
	if (a[n - 1] > x && a[n - 1] < y)
		return a[n - 1];
	return x;
}