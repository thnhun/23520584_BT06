#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&, int&);
float LonNhatDong(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n, d);
	cout << LonNhatDong(a, m, n, d);
	return 0;
}

void Nhap(float a[][100], int& m, int& n, int& d)
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

float LonNhatDong(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return a[d][0];
	float lc = LonNhatDong(a, m, n - 1, d);
	if (a[d][n - 1] > lc)
		lc = a[d][n - 1];
	return lc;
}