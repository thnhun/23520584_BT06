#include <iostream>
using namespace std;

void Nhap(float[], int&);
int TimViTri(float[], int);

int main()
{
    int n;
    float a[100];
    Nhap(a, n);
    cout << TimViTri(a, n);
    return 0;
}

void Nhap(float a[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int TimViTri(float a[], int n)
{
    if (n == 0)
        return -1;
    int lc = TimViTri(a, n - 1);
    if (a[n - 1] <= 0)
        return lc;
    if (lc == -1)
        return n - 1;
    if (a[n - 1] < a[lc])
        lc = n - 1;
    return lc;
}
