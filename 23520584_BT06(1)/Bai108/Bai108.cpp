#include<iostream>
#include<iomanip>
void Nhap(float[], int&);
void Xuat(float[], int);
void TimDoan(float[], int, float&, float&);
using namespace std;

int main()
{
	float a[100],x,y;
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	TimDoan(a, n, x, y);
	cout << "\nDoan chua het gia tri mang la : [" << x << "," << y << "]";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << setprecision(3) << a[n - 1];
}

void TimDoan(float a[], int n, float& x, float& y)
{
	if (n == 1)
	{
		x = a[0];
		y = a[0];
		return;
	}
	TimDoan(a, n - 1,x,y);
	if (a[n - 1] < x)
		x = a[n - 1];
	if (a[n - 1] > y)
		y = a[n - 1];

}