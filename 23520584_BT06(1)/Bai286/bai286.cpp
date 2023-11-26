#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void NguyenHoa(float[][100], int, int);


int main()
{
	float a[100][100];
	int m, n, c;
	Nhap(a, m, n);
	Xuat(a, m, n);
	NguyenHoa(a, m, n);
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
void NguyenHoa(float a[][100], int m, int n)
{
	if (n == 0)
		return;
	NguyenHoa(a, m, n - 1);
	for (int i = 0; i < m; i++)
		a[i][n - 1] = round(a[i][n - 1]);
}
