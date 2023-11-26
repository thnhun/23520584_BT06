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

int DemNguyenTo(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int dem = DemNguyenTo(a, m - 1, n, c);
	if (ktNguyenTo(a[m - 1][c]))
		dem = dem + 1;
	return dem;
}
int main()
{
	int m, n, x;
	cin >> m;
	cin >> n;
	cin >> x;
	int a[100][100];
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			cin >> a[i][j];
	int k = DemNguyenTo(a, m, n, x);
	cout << k;
	return 0;
}