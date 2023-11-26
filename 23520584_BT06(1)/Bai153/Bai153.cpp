#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void SapTang(float[], int);
void Xuat(float[], int);

int main()
{
    int n;
    float a[100];
    Nhap(a, n);
    SapTang(a, n);
    Xuat(a, n);
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

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << setw(6);
    }
}

void SapTang(float a[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[n - 1])
            swap(a[i], a[n - 1]);
    }
    SapTang(a, n - 1);
}