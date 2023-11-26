#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);
bool ktNguyenTo(int);
using namespace std;

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n);
	cout << "\nVi tri co so nguyen to la : "; 
	LietKe(a, n);
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

void LietKe(int a[], int n)
{
	if (n == 0)
		return;

	LietKe(a, n - 1);
	if(ktNguyenTo(a[n-1]))
		cout << setw(10) << setprecision(4) << n-1;
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	return dem == 2;


}
