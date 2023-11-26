#include<iostream>
#include<iomanip>
void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongDong(float[][100], int, int, int);
bool ktDoiXung(int);
using namespace std;

int main()
{
	float a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nNhap dong muon tinh tong : ";
	cin >> d;
	cout << "Tong gia tri duong la : " << TongDong(a, m, n, d);
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

float TongDong(float a[][100], int m, int n,int d)
{
	if (n == 0)
		return 0;
	float s = TongDong(a, m, n - 1, d);
	if (ktDoiXung(a[d][n - 1]))
		s = s + a[d][n - 1];
	return s;
}

bool ktDoiXung(int k)
{
	int dx = 0;
	for (int t = k = abs(k); t != 0; t = t / 10)
		dx = dx * 10 + t % 10;
	return dx == k;
}