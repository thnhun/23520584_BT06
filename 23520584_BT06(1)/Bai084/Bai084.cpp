#include<iostream>
#include<iomanip>
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
using namespace std;

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nCac gia tri lon hon gia tri tuyet doi cua gia tri lien sau : " << endl;
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
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << setprecision(3) << a[n - 1];
}

void LietKe(float a[], int n)
{
	if (n <= 1)
		return;
	if (a[n - 2] > abs(a[n - 1]))
		cout << setw(10) << setprecision(4) << a[n - 2];
	LietKe(a, n - 1);
}



