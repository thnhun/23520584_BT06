#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int TimGiaTri(int[], int);
bool ktHoanThien(int);
using namespace std;

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nHoan thien nho nhat la : " << TimGiaTri(a, n);
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

int TimGiaTri(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimGiaTri(a, n - 1);
	 if (!ktHoanThien(a[n - 1]))
		return lc;
	if (lc == -1)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	return s == k;
}

