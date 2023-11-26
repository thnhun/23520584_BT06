#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&, int&);
void ThemDong(int[][100], int&, int, int);
void Xuat(int[][100], int, int);

int main()
{
    int a[100][100];
    int m, n, d;
    Nhap(a, m, n, d);
    ThemDong(a, m, n, d);
    Xuat(a, m, n);
    return 0;
}

void Nhap(int a[][100], int& m, int& n, int& d)
{
    cin >> m >> n >> d;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void ThemDong(int a[][100], int& m, int n, int d)
{
    if (n == 0)
    {
        m++;
        return;
    }
    ThemDong(a, m, n - 1, d);
    for (int i = m; i > d; i--)
        a[i][n - 1] = a[i - 1][n - 1];
    a[d][n - 1] = 1;
}

void Xuat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(8) << a[i][j];
        }
        cout << endl;
    }
}