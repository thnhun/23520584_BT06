#include<iostream>
using namespace std;

float TongCot(float a[][100], int m, int n, int c)
{
    if (m == 0)
        return 0;
    return TongCot(a, m - 1, n, c) + a[m - 1][c];
}

void ThemDong(float a[][100], int& m, int n)
{
    if (n == 0)
    {
        m++;
        return;
    }
    ThemDong(a, m, n - 1);
    a[m - 1][n - 1] = TongCot(a, m - 1, n, n - 1);
}
int main()
{
    float a[100][100];
    int m = 3; 
    int n = 3; 


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Ma tran truoc khi them dong:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    ThemDong(a, m, n);

    cout << "Ma tran sau khi them dong:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}