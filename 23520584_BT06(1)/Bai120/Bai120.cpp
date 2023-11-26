#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int HoanThienDau(int[], int);
bool ktHoanThien(int);
using namespace std;

int main()
{
	int a[100];
	int n, x, y;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nSo hoan thien dau tien la : " << HoanThienDau(a, n);
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

int HoanThienDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = HoanThienDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktHoanThien(a[n - 1]))
		return a[n - 1];
	return -1;

}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	return s == k;
}
