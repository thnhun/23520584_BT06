#include<iostream>
#include<iomanip>
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemHoanThien(int[][100], int, int);
bool ktHoanThien(int);
using namespace std;

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "So luong so hoan thien la : " << DemHoanThien(a, m, n);
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

int DemHoanThien(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemHoanThien(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktHoanThien(a[m - 1][j]))
		 dem = dem + 1;
	return dem;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
		 s = s + i;
	return (s == k);
}
