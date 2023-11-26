#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float TichDong(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return a[d][0];
	return TichDong(a, m, n - 1, d) * a[d][n - 1];
}
void ThemCot(float a[][100], int m, int& n)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot(a, m - 1, n);
	a[m - 1][n - 1] = TichDong(a, m, n - 1, m - 1);
}
int main() 
{
	int m, n, x;
	cin >> m;
	cin >> n;
	cin >> x;
	float a[100][100];
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			cin >> a[i][j];
	TichDong(a, m, n, x);
	for (int i = 0; i < m + 1; i++) 
		for (int j = 0; j < n + 1; j++) 
			cout << a[i][j];
	return 0;
}