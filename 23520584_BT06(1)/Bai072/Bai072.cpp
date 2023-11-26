#include<iostream>
#include<iomanip>
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
using namespace std;

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac gia tri duong trong man la : ";
	LietKe(a, n);
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
	cout << "Mang da nhap :" << endl;
	for (int i = 0; i < n; i++)
		cout << setw(10)<<setprecision(4)<<a[i];
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] > 0)
		cout << setw(10) << setprecision(4) << a[n - 1];
}
