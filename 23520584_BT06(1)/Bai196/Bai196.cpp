#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void LietKe(int[][100], int, int);
bool ktToanChan(int);

int main()
{
	int a[100][100], m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
		cout << endl;
	}
}
void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];

}
bool ktToanChan(int n)
{
	if (n == 0)
		return 0;
	ktToanChan(n / 10);
	if (n % 2 == 0)
		return true;
	return false;
}