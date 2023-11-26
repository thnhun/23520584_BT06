#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Nhap(int&, int&);
void Hoanvi(float&, float&);
void HoanViDong(float[][100], int, int, int, int);
void Xuat(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n, d1, d2;
	Nhap(a, m, n);
	Xuat(a, m, n);
	Nhap(d1, d2);
	HoanViDong(a, m, n, d1, d2);
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
void Nhap(int& d1, int& d2)
{
	cout << "Nhap d1: ";
	cin >> d1;
	cout << "Nhap d2: ";
	cin >> d2;
}
void Hoanvi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void HoanViDong(float a[][100], int m, int n, int d1, int d2)
{
	if (n == 0)
		return;
	HoanViDong(a, m, n - 1, d1, d2);
	Hoanvi(a[d1][n - 1], a[d2][n - 1]);
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