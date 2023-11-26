#include<iostream>
using namespace std;

void Nhap(float[][100], int&, int&); 
int ktDongTang(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	cout << "Nhap d; ";
	cin >> d;
	cout << "Ket qua la: " << ktDongTang(a, m, n, d);
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
int ktDongTang(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return 1;
	if (a[d][n - 1] >= a[d][n - 2] && (ktDongTang(a, m, n - 1, d) == 1))
		return 1;
	return 0;
}
