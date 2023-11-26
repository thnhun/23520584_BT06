#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][100], int&, int&, float&);
int TanSuat(float[][100], int, int, float);

int main()
{
	float a[100][100];
	int m, n;
	float x;
	Nhap(a, m, n, x);
	cout << TanSuat(a, m, n, x);
	return 0;
}

void Nhap(float a[][100], int& m, int& n, float& x)
{
	cin >> m >> n;
	cin >> x;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

int TanSuat(float a[][100], int m, int n, float x) 
{
	if (m == 0)
		return 0;
	int dem = TanSuat(a, m - 1, n, x);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] == x)
			dem = dem + 1;
	return dem;
}