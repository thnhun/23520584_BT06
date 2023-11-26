#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void Hoanvi(float&, float&);
void SapDongTang(float[][100], int, int, int);
void SapDongGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);


int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	SapXep(a, m, n);
	Xuat(a, m, n);
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
void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
}
void Hoanvi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void SapDongTang(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return;
	for (int j = 0; j < n - 2; j++)
		if (a[d][j]>a[d][n-1])
			Hoanvi(a[d][j], a[d][n - 1]);
	SapDongTang(a, m, n - 1 , d);
		
}
void SapDongGiam(float a[][100], int m, int n, int d) 
{
	if (n == 1)
		return;
	for (int j = 0; j < n - 2; j++)
		if (a[d][j] < a[d][n - 1])
			Hoanvi(a[d][j], a[d][n - 1]);
	SapDongGiam(a, m, n - 1, d);
}
void SapXep(float a[][100], int m, int n)
{
	if (m == 1)
		return;
	SapXep(a, m - 1, n);
	if ((m - 1) % 2 == 0)
		SapDongTang(a, m, n, m - 1);
	else 
		SapDongGiam(a, m, n, m - 1);

}