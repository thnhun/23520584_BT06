#include <iostream>
#include <cmath>
using namespace std;
void ThemBaoToan(float[], int&, float);
void ThemBaoToan(float a[], int& n, float x)
{
    if (n == 0)
    {
        a[0] = x;
        n++;
        return;
    }
    if (x >= a[n - 1])
    {
        a[n] = x;
        n++;
        return;
    }
    a[n] = a[n - 1];
    n--;
    ThemBaoToan(a, n, x);
    n++;
}

int main() {
    float a[] = { 1.2, 5.6, 12.3, 15.6, 20.7 };
    int n = sizeof(a) / sizeof(a[0]);
    float x;
    cin >> x;
    ThemBaoToan(a, n, x);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}