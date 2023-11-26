#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int DemNguyenToPhanBiet(int[], int);
bool ktNguyenTo(int);
using namespace std;

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nSo luong so nguyen to phan biet la : " << DemNguyenToPhanBiet(a, n);
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

int DemNguyenToPhanBiet(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemNguyenToPhanBiet(a, n - 1);
	
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1 && ktNguyenTo(a[n - 1]))
		dem++;
	return dem;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	return dem == 2;
}
