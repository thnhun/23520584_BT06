#include<iostream>
#include<iomanip>
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int, int);
using namespace std;

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nNhap dong liet ke chan :";
	cin >> d;
	cout << "Cac gia tri chan tren dong da nhap: " << endl;
	LietKe(a, m, n, d);
	return 0;

}

void Nhap(int a[][100], int& m, int& n)
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

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}

void LietKe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (a[d][n - 1] % 2 == 0)
		cout << setw(4) << a[d][n - 1];
}