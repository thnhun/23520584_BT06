#include <iostream>
using namespace std;

void Nhap(float[], int&);
float CuoiCung(float[], int);

int main()
{
    int n;
    float a[100];
    Nhap(a, n);
    cout << CuoiCung(a, n);
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

float CuoiCung(float a[], int n)
{
    if (n == 0)
        return 0;
    if ((a[n - 1] < 0) && (a[n - 1] > -1))
        return a[n - 1];
    return CuoiCung(a, n - 1);
}