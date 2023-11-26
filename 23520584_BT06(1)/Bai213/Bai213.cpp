#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
int TongDong(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n, d);
	int Tong = TongDong(a, m, n, d);
	cout << Tong;
	return 0;
}

void Nhap(int a[][100], int& m, int& n, int& d)
{
	cin >> m >> n >> d;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

int TongDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, d);
	if (a[d][n - 1] % 2 == 0)
		s = s + a[d][n - 1];
	return s;
}