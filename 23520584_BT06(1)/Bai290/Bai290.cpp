#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void DichPhaiDong(float a[][100],
	int m, int n, int d)
{
	float temp = a[d][n - 1];
	for (int j = n - 1; j >= 1; j--)
		a[d][j] = a[d][j - 1];
	a[d][0] = temp;
}
void DichPhai(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	DichPhai(a, m - 1, n);
	DichPhaiDong(a, m, n, m - 1);
}
int main() {
	int m, n, x;
	cin >> m;
	cin >> n;
	cin >> x;
	float a[100][100];
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			cin >> a[i][j];
	DichPhai(a, m, n);
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			cout << a[i][j];
	return 0;
}