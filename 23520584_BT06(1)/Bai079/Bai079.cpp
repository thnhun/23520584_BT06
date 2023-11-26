#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;

void Nhap(int[], int&, int&, int&);
void LietKe(int[], int, int, int);

int main()
{
    int x, y;
    int n;
    int a[MAX];
    Nhap(a, n, x, y);
    LietKe(a, n, x, y);

    return 0;
}

void Nhap(int a[], int& n, int& x, int& y)
{
    cin >> n;
    cin >> x >> y;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void LietKe(int a[], int n, int x, int y)
{
    if (n == 0)
        return;

    LietKe(a, n - 1, x, y);

    if (a[n - 1] >= x && a[n - 1] <= y && a[n - 1] % 2 == 0)
        cout << setw(6) << a[n - 1];
}