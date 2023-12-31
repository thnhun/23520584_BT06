#include<iostream>
#include<iomanip>
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void SapDongTang(float[][100], int, int, int);
using namespace std;

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Nhap dong muon sap tang : ";
	cin >> d;
	cout << "Ma tran sau sap xep : " << endl;
	SapDongTang(a, m, n, d);
	Xuat(a, m, n);
	return 0;

}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}

void SapDongTang(float a[][100], int m, int n,int d)
{
	if (n == 1)
		 return;
	 for (int j = 0; j <= n - 2; j++)
		 if (a[d][j] > a[d][n - 1])
		 swap(a[d][j], a[d][n - 1]);
	SapDongTang(a, m, n - 1, d);
}