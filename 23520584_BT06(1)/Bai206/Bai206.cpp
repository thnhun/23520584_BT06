#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool ktChinhPhuong(int n) 
{
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}
int TongChinhPhuong(int a[][100], int m, int n)
{
    if (m == 0)
        return 0;
    int s = TongChinhPhuong(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if (ktChinhPhuong(a[m - 1][j]) && j % 2 != 0)
            s = s + a[m - 1][j];
    return s;
}
int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    int a[100][100];
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> a[i][j];
        }
    }
    int k = TongChinhPhuong(a, m, n);
    cout << k;
    return 0;
}