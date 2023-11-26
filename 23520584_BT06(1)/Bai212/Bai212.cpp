#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong(float a[][100], int m, int n, float x, float y)
{
	if (m == 0)
		return 0;
	float s = Tong(a, m - 1, n, x, y);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > x && a[m - 1][j] < y)
			s = s + a[m - 1][j];
	return s;
}
int main() 
{
	int m, n, x, y;
	cin >> m;
	cin >> n;
	cin >> x;
	cin >> y;
	float a[100][100];
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
			cin >> a[i][j];
	}
	float k = Tong(a, m, n, x, y);
	cout << k;
	return 0;
}