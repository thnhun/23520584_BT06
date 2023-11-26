#include<iostream>
#include<iomanip>
void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktToanLe(int);
int DemToanLe(int[][100], int, int, int);
using namespace std;

int main()
{
	int a[100][100];
	int m, n, d;
	Nhap(a, m, n);
	Xuat(a, m, n);
	cout << "\nNhap dong can dem : ";
	cin >> d;
	cout << "So luong cac so toan le tren dong da nhap: " << DemToanLe(a, m,n, d);
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

int DemToanLe(int a[][100], int m, int n,int d)
{
	 if (n == 0)
		 return 0;
	 int dem = DemToanLe(a, m, n - 1, d);
	 if (ktToanLe(a[d][n - 1]))
		 dem = dem + 1;
	 return dem;
}

bool ktToanLe(int k)
{
	bool flag = true;
	for (int t = k = abs(k); t != 0; t = t / 10)
		 if (t % 2 == 0)
		 flag = false;
	 return flag;
}