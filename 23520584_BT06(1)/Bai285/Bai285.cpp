#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void BienDoi(float[][100], int, int);
void Xuat(float[][100], int, int);

int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    BienDoi(a, m, n);
    Xuat(a, m, n);
    return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void BienDoi(float a[][100], int m, int n)
{
    if (m == 0)
        return;
    BienDoi(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if (a[m - 1][j] < 0)
            a[m - 1][j] = -a[m - 1][j];
}

void Xuat(float a[][100], int m, int n)
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