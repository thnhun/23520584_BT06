#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool ktHoanThien(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            sum += i;
        }
    }
    return sum == n;
}
void LietKe(int a[][100], int m, int n, int d)
{
    if (n == 0)
        return;
    LietKe(a, m, n - 1, d);
    if (ktHoanThien(a[d][n - 1]))
        cout << setw(4) << a[d][n - 1];
}
int main() {
    int m, n, d;
    cin >> m;
    cin >> n;
    cin >> d;
    int a[100][100];
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
            cin >> a[i][j];
    }
    LietKe(a, m, n, d);
    return 0;
}