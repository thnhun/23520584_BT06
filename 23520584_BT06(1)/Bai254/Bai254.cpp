#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int TonTaiLe(int[][100], int, int);
int TonTaiLe(int a[][100], int m, int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 != 0)
		return 1;
	return TonTaiLe(a, m - 1, n);
}
bool ktHoanThien(int n) 
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) 
		if (n % i == 0) 
			sum += i;
	return sum == n;
}
int TonTaiHoanThien(int[][100], int, int);
int TonTaiHoanThien(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	for (int j = 0; j < n; j++)
		if (ktHoanThien(a[m - 1][j]))
			return 1;
	return TonTaiLe(a, m - 1, n);
}
int main() 
{
	int m, n;
	cin >> m;
	cin >> n;
	int a[100][100];
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			cin >> a[i][j];
	int k = TonTaiHoanThien(a, m, n);
	cout << k;
	return 0;
}