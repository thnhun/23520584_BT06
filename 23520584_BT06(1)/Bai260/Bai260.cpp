#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int ktDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (a[d][n - 1] < 0)
		return 1;
	return ktDong(a, m, n - 1, d);
}
void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m, n, m - 1) == 1)
		cout << setw(4) << (m - 1);
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
	LietKe(a, m, n);
	return 0;
}