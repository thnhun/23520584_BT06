#include<iostream>
#include<iomanip>
void Nhap(float[], int&);
void Xuat(float[], int);
int DemLonNhat(float[], int);
float LonNhat(float[], int);
using namespace std;

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nSo luong gia tri lon nhat trong mang : " << DemLonNhat(a, n);
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

int DemLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		return 1;
	int dem = DemLonNhat(a, n - 1);
	if (a[n - 1] == lc)
		dem++;
	return dem;
}

float LonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		return a[n - 1];
	return lc;
}
