#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float TichCot(float a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	float T = TichCot(a, m - 1, n, c);
	if (a[m - 1][c] >= -1 && a[m - 1][c] <= 0)
		T = T * a[m - 1][c];
	return T;
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
	float k = TichCot(a, m, n, x);
	cout << k;
	return 0;
}