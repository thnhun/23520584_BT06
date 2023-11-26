#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
int ktDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
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
int ktDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		if (a[d][0] < 0)
			return 1;
		else
			return 0;
	}
	if (a[d][n - 1] < 0 && ktDong(a, m, n - 1, d) == 1)
		return 1;
	return 0;
}
void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if(ktDong(a,m,n,m-1))
		cout << setw(4) << (m - 1);
}