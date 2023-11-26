#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void Xuat(float a[], int n)
{
    if (n == 0)
        return;
    Xuat(a, n - 1);
    cout << setw(10) << setprecision(3) << a[n - 1];
}

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    float* a = new float[n];
    Nhap(a, n);
    cout << "Mang da nhap: ";
    Xuat(a, n);
    return 0;
}