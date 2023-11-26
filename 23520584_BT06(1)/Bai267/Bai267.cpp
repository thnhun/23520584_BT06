#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void XayDung(float[][100], int, int, float[][100], int&, int&);
void Xuat(float[][100], int, int);

int main()
{
    float a[100][100], b[100][100];
    int m, n, k, l;
    Nhap(a, m, n);
    XayDung(a, m, n, b, k, l);
    Xuat(b, k, l);
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

void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l) 
{
    if (m == 0) 
    {
        k = 0;
        l = n;
        return;
    }
    XayDung(a, m - 1, n, b, k, l);
    for (int j = 0; j < l; j++)
        b[m - 1][j] = abs(a[m - 1][j]);
    k++;
}

void Xuat(float b[][100], int k, int l)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << setw(10) << b[i][j];
        }
        cout << endl;
    }
}