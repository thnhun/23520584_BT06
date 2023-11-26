#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool ktChinhPhuong(int n) 
{
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}
void LietKe(int a[][100], int m, int n)
{
    if (m == 0)
        return;
    LietKe(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if (ktChinhPhuong(a[m - 1][j]))
            cout << setw(4) << a[m - 1][j];
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
            cin >> a[i][j];
    }
    LietKe(a, m, n);
    return 0;
}