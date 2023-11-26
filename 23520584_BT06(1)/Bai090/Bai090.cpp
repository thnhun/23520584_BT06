#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int TongDoiXung(int[], int);
bool ktDoiXung(int);
using namespace std;

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nTong cac gia tri doi xung trong mang : " << TongDoiXung(a, n);
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

int TongDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		 s = s + a[n - 1];
	return s;
}

bool ktDoiXung( int k)
{
	int dx = 0;
	for (int t = k = abs(k); t != 0; t = t / 10)
		dx = dx * 10 + t % 10;
	return dx == k;

}