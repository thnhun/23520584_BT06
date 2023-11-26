#include <iostream>
#include <iomanip>
void Nhap(float[], int&);
void Xuat(float[], int);
void XuatBo2(float, float);
void LietKe(float[], int);
using namespace std;

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    cout << "Mang da nhap :" << endl;
    Xuat(a, n);
    cout << "Cac cap so [x,y] trong mang gom :" << endl;
    LietKe(a, n);
    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap so phan tu cua mang : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] : ";
        cin >> a[i];
    }
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << setprecision(3) << a[i];
    }
    cout << endl;
}

void XuatBo2(float x, float y)
{
    cout << setw(10) << setprecision(3);
    cout << "(" << x << "," << y << ")" << endl;
}

void LietKe(float a[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i <= n - 2; i++)
    {
        XuatBo2(a[i], a[n - 1]);
        XuatBo2(a[n - 1], a[i]);
    }
    LietKe(a, n - 1);
}