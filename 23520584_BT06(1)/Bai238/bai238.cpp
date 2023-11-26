#include<iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int DemChuSo(int);
int DemChuSo(int[][100], int, int);


int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Ket qua la: " << DemChuSo(a, m, n);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
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
int DemChuSo(int n)
{
	if (n == 0)
		return 0;
	int dem = DemChuSo(n / 10);
	if (n != 0)
		dem++;
	return dem;
}
int DemChuSo(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChuSo(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			dem = dem + DemChuSo(a[m - 1][j]);
	return dem;
}