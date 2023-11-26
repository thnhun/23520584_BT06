#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
int ChinhPhuongLonNhat(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << ChinhPhuongLonNhat(a, m, n);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

bool ktChinhPhuong(int n)
{
	int root = sqrt(n);
	return (root * root == n);
}

int ChinhPhuongLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChinhPhuongLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[m - 1][j]))
			if (lc == -1 || lc < a[m - 1][j])
				lc = a[m - 1][j];
	return lc;
}