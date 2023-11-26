#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float TongDong(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	float s = TongDong(a, m, n - 1, d);
	if (a[d][n - 1] > 0)
		s = s + a[d][n - 1];
	return s;
}
int Tong5m(float a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	float s = TongDong(a, m, n - 1, d);
	if (a[d][n - 1] > 0)
		s = s + a[d][n - 1];
	return s;
}
int main() 
{
	int m, n, x;
	cin >> m;
	cin >> n;
	cin >> x;
	float a[100][100];
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
			cin >> a[i][j];
	}
	int k = Tong5m(a, m, n, x);
	cout << k;
	return 0;
}