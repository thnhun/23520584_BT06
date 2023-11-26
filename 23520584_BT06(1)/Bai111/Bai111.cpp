#include <iostream>
using namespace std;

void Nhap(float[], int&);
float AmDau(float[], int);

int main()
{
    int n;
    float a[100];
    Nhap(a, n);
    float firstNegative = AmDau(a, n);
    if (firstNegative != 0)
        cout << firstNegative;
    else
        cout << 0;
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

float AmDau(float a[], int n)
{
    if (n == 0)
        return 0;
    float lc = AmDau(a, n - 1);
    if (lc != 0)
        return lc;
    if (a[n - 1] < 0)
        return a[n - 1];
    return 0;
}
