#include<iostream>
#include<iomanip>
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DichLen(float[][100], int, int);
void DichLenCot(float[][100], int, int, int);
using namespace std;

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Ma tran sau dich len xoay vong cac hang :" << endl;
	DichLen(a, m, n);
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

void DichLenCot(float a[][100],int m, int n, int c)
{
	float temp = a[0][c];
	for (int i = 0; i <= m - 2; i++)
		a[i][c] = a[i + 1][c];
	a[m - 1][c] = temp;
}

void DichLen(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	DichLen(a, m, n - 1);
	DichLenCot(a, m, n, n - 1);
}