#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
void DichTraiDong(float a[][100], int m, int n, int d)
{
	float temp = a[d][0];
	for (int j = 0; j <= n - 2; j++)
		a[d][j] = a[d][j + 1];
	a[d][n - 1] = temp;
}

void DichTrai(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	DichTrai(a, m - 1, n);
	DichTraiDong(a, m, n, m - 1);
}

int main()
{
	int m, n;
	float a[100][100];
	cin >> m >> n;
	srand(time(NULL));
	for (int i = 0;i < m;i++)
		for (int j = 0;j < n;j++)
			a[i][j] = rand() % 200 - 100;
	for (int i = 0;i < m;i++)
	{

		for (int j = 0;j < n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	DichTrai(a, m, n);

	for (int i = 0;i < m;i++)
	{

		for (int j = 0;j < n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
