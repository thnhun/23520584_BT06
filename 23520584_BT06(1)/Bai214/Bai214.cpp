#include<iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
int TongDong(int[][100], int, int, int);
bool ktNguyenTo(int);

int main()
{
	int a[100][100], m, n, d;
	Nhap(a, m, n);
	cout << "\nNhap d: ";
	cin >> d;
	cout << "Ket qua la: " << TongDong(a, m, n, d);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
int TongDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, d);
	if(ktNguyenTo(a[d][n-1]))
			s = s + a[d][n-1];
	return s;
}
bool ktNguyenTo(int n)
{
	if (n <= 1) 
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0) 
			return false;

	return true;
}