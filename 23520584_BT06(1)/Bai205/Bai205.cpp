#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktNguyenTo(int);
int TongNguyenTo(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << TongNguyenTo(a, m, n);
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

bool ktNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int TongNguyenTo(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongNguyenTo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}