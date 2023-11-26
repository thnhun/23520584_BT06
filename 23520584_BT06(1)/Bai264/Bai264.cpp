#include<iostream>
#include<iomanip>
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktCot(int[][100], int, int, int);
void LietKe(int[][100], int, int);
bool ktChinhPhuong(int);
using namespace std;

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "Cac cot co so chinh phuong la : ";
	LietKe(a, m, n);
	return 0;

}

void Nhap(int a[][100], int& m, int& n)
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

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setw(10) << a[i][j];
		cout << endl;
	}
}

int ktCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	if (ktChinhPhuong(a[m - 1][c]))
		return 1;
	return ktCot(a, m - 1, n, c);
}

void LietKe(int a[][100], int m, int n)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1);
	if (ktCot(a, m, n, n - 1) == 1)
		cout << setw(4) << (n - 1);
}

bool ktChinhPhuong(int k)
{
	bool flag = false;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
		 flag = true;
	return flag;
}