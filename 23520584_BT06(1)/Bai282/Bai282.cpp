#include<iostream>
#include<iomanip>
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float NhoNhatDong(float[][100], int, int, int);
void ThemCot(float[][100], int, int&);
using namespace std;

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Ma tran sau them : " << endl;
	ThemCot(a,m,n);
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

float NhoNhatDong(float a[][100], int m, int n,int d)
{
	if (n == 1)
		return a[d][0];
	float lc = NhoNhatDong(a, m, n - 1, d);
	if (a[d][n - 1] < lc)
		 lc = a[d][n - 1];
	 return lc;
}

void ThemCot(float a[][100], int m, int& n)
{
	if (m == 0)
	{
		 n++;
		return;
	}
	ThemCot(a, m - 1, n);
	a[m - 1][n - 1] = NhoNhatDong(a, m, n - 1, m - 1);
}
