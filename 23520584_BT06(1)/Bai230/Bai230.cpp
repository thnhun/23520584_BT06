#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool ktDang2m(int n) 
{
	if (n <= 0) 
		return false;
	while (n % 2 == 0) 
		n /= 2;
	return n == 1;
}
int DemDang2m(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemDang2m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang2m(a[m - 1][j]))
			dem = dem + 1;
	return dem;
}
int main() 
{
	int m, n;
	cin >> m;
	cin >> n;
	int a[100][100];
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
			cin >> a[i][j];
	}
	int k = DemDang2m(a, m, n);
	cout << k;
	return 0;
}