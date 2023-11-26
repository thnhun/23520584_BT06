#include<iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
float NhoNhatCot(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int m, n, c;
	Nhap(a, m, n);
	cout << "nhap c: ";
	cin >> c;
	cout << "Ket qua la: " << NhoNhatCot(a, m, n, c);
	return 0;
}
void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}
float NhoNhatCot(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return a[0][c];
	float min = NhoNhatCot(a, m - 1, n, c);
	if (a[m - 1][c] < min)
		min = a[m - 1][c];
	return min;
}