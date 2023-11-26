#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void HoanVi(float& a, float& b) 
{
	int temp = a;
	a = b;
	b = temp;
}
void SapCotTang(float a[][100], int m, int n,
	int c)
{
	if (m == 1)
		return;
	for (int i = 0; i <= m - 2; i++)
		if (a[i][c] > a[m - 1][c])
			HoanVi(a[i][c], a[m - 1][c]);
	SapCotTang(a, m - 1, n, c);
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
	SapCotTang(a, m, n, x);
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			cout << a[i][j];
	return 0;
}