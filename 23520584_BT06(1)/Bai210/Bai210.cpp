#include<iostream>
#include<iomanip>
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongDuong(float[][100], int, int);
using namespace std;

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Tong gia tri duong la : " << TongDuong(a, m, n);
	return 0;

}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}

float TongDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	float s = TongDuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
		s = s + a[m - 1][j];
	return s;
}