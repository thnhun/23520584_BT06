#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool ktNguyenTo(int n) 
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++) 
		if (n % i == 0) 
			return false;
	return true;
}
int NguyenToDau(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = NguyenToDau(a, m - 1, n);
	if (lc != -1)
		return lc;
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			return a[m - 1][j];
	return -1;
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
	int k = NguyenToDau(a, m, n);
	cout << k;
	return 0;
}