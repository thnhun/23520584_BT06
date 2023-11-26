#include<iostream>
#include<iomanip>
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ChanLonNhat(int[][100], int, int);
using namespace std;

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	int flag = ChanLonNhat(a, m, n);
	if (flag == -1)
		cout << "Ma tran ko ton tai chan.";
	else
		cout << "Gia tri chan lon nhat trong ma tran la : " << ChanLonNhat(a, m, n);
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

int ChanLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChanLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
		if (lc == -1 || a[m - 1][j] > lc)
		 lc = a[m - 1][j];
	return lc;
}
