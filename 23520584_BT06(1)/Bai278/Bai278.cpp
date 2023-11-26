#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void XoaCot(float a[][100], int m, int& n, int c)
{
	if (m == 0)
	{
		n--;
		return;
	}
	XoaCot(a, m - 1, n, c);
	for (int j = c; j <= n - 2; j++)
		a[m - 1][j] = a[m - 1][j + 1];
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
	XoaCot(a, m, n, x);
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			cout << a[i][j];
	return 0;
}