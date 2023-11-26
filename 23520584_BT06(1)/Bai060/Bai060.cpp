#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int ViTriGiaTriX(int[], int,int,int);
using namespace std;

int main()
{
	int a[100];
	int n, x;
	cout << "Nhap gia tri muon tim vi tri trong mang : ";
	cin >> x;
	Nhap(a,n);
	Xuat(a, n);
	int ketQua = ViTriGiaTriX(a, 0, n - 1, x);
	if (ketQua == -1) 
		cout << "\nKhong tim thay " << x << " trong mang." << endl;
	else 
		cout << "\n"<<x << " nam o vi tri " << ketQua << " trong mang." << endl;
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
	cout << "Mang da nhap :" << endl;
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(4) << a[i];
}


int ViTriGiaTriX(int a[], int trai, int phai, int x)
{
	if (phai >= trai)
	{
		int giua = trai + (phai - trai) / 2;

		if (a[giua] == x)
			return giua;

		if (a[giua] > x)
			return ViTriGiaTriX(a, trai, giua - 1, x);

		return ViTriGiaTriX(a, giua + 1, phai, x);
	}
	return -1;
}

