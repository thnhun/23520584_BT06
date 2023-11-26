#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
void Lietke(int[][20], int, int);

int main()
{
	int m, n, a[20][20];
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
	Lietke(a, m, n);
	return 0;
}

void Lietke(int a[][20], int m, int n)
{
	if (m < 0)
		return;
	Lietke(a, m-1, n);
	if(m%2==0)
		for (int j = 0;j < n;j++)
			if (a[m][j] % 2 != 0)
				cout << a[m][j] << " ";
}