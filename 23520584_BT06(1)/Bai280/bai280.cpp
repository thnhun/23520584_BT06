#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void ThemCot(float[][100], int, int&, int);

int main()
{
	float a[100][100];
	int m, n, c;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Nhap c: ";
	cin >> c;
	ThemCot(a, m, n, c);
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}
void ThemCot(float a[][100], int m, int& n, int c)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot(a, m - 1 , n, c);
	for (int j = n; j > c; j--)
		a[m - 1][j] = a[m - 1][j - 1];
	a[m - 1][c] = 0;
}
