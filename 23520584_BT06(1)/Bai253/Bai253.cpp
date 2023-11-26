#include <iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int ktToanDuong(int[][100], int, int);

int main()
{
	int a[100][100], m, n;
	Nhap(a, m, n);
	if (ktToanDuong(a, m, n) == 0)
		cout << "Khong toan duong.";
	else
		cout << "Toan duong.";
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

int ktToanDuong(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	if (m == 1)
	{
		int flag = 1;
		for (int j = 0; j < n; j++)
			if (a[0][j] <= 0)
				flag = 0;
		return flag;
	}
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] <= 0)
			return 0;
	return ktToanDuong(a, m - 1, n);
}