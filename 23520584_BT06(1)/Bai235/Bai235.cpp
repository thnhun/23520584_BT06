#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
int ChuSoDau(int);
int DemGiaTri(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n, c;
	Nhap(a, m, n, c);
	cout << DemGiaTri(a, m, n, c);
	return 0;
}

void Nhap(int a[][100], int& m, int& n, int& c)
{
	cin >> m >> n >> c;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

int ChuSoDau(int n)
{
	while (n >= 10)
	{
		n /= 10;
	}
	return n;
}

int DemGiaTri(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemGiaTri(a, m - 1, n, c);
	if (ChuSoDau(a[m - 1][c]) % 2 == 0)
		dem = dem + 1;
	return dem;
}