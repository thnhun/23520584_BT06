#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&, int&);
void SapCotGiam(float[][100], int, int, int);
void Xuat(float[][100], int, int);

int main()
{
    float a[100][100];
    int m, n, c;
    Nhap(a, m, n, c);
    SapCotGiam(a, m, n, c);
    Xuat(a, m, n);
    return 0;
}

void Nhap(float a[][100], int& m, int& n, int& c)
{
    cin >> m >> n >> c;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void SapCotGiam(float a[][100], int m, int n, int c) 
{
    if (m == 1)
        return;
    for (int i = 0; i <= m - 2; i++) 
        if (a[i][c] < a[m - 1][c]) 
            swap(a[i][c], a[m - 1][c]);
    SapCotGiam(a, m - 1, n, c);
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