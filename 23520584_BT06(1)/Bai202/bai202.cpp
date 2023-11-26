#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void LietKe(int[][100], int, int);
bool ktDX(int);

int main()
{
    int a[100][100], m, n, c;
    Nhap(a, m, n);

    cout << "Nhap cot can kiem tra: ";
    cin >> c;

    LietKe(a, m, c);
    return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }
}

void LietKe(int a[][100], int m, int c)
{
    if (m == 0)
        return;

    LietKe(a, m - 1, c);

    if (ktDX(a[m - 1][c]))
        cout << setw(4) << a[m - 1][c];
}

bool ktDX(int n)
{
    int dv = 0;
    int dn = 0;

    int a = n;

    while (n != 0)
    {
        dv = n % 10;
        dn = dn * 10 + dv;
        n = n / 10;
    }

    return a == dn;
}
