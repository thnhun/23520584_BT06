#include<iostream>
#include<iomanip>
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TongCot(int[][100], int, int, int);
bool ktDang2m(int);
using namespace std;

int main()
{
	int a[100][100];
	int m, n, c;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nNhap cot muon tinh tong : ";
	cin >> c;
	cout << "Tong gia tri 2^m : " << TongCot(a, m, n, c);
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

int TongCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, n, c);
	if (ktDang2m(a[m - 1][c]))
		s = s + a[m - 1][c];
	return s;
}

bool ktDang2m(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 2)
		if (t % 2 != 0)
		 flag = false;
	return flag;
}
