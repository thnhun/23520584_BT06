#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TongGiaTri(float[], int);

int main()
{
    int n;
    float a[100];
    Nhap(a, n);
    float sum = TongGiaTri(a, n);
    cout << sum;
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

float TongGiaTri(float a[], int n)
{
    if (n <= 1)
        return 0;
    float s = TongGiaTri(a, n - 1);
    if (a[n - 1] > a[n - 2])
        s = s + a[n - 1];
    return s;
}