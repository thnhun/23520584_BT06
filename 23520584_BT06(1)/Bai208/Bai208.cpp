#include<iostream>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktToanChan(int);
int TongToanChan(int[][100], int, int);

int main()
{
	int a[100][100], m, n;
	Nhap(a, m, n);
	cout << "Ket qua la: " << TongToanChan(a, m, n);
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
bool ktToanChan(int n) {
	if (n < 10) 
		return (n % 2 == 0);

	return (n % 10 % 2 == 0) && ktToanChan(n / 10);
}
int TongToanChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int s = TongToanChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m-1][j]))
			s = s + a[m - 1][j];
	return s;
}