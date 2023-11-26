#include<iostream>
#include<iomanip>

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaAm(float[], int&);

using namespace std;

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    cout << "Mang da nhap :" << endl;
    Xuat(a, n);
    cout << "\nMang sau xoa am : " << endl;
    XoaAm(a, n);
    Xuat(a, n);
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
        cout << setw(10) << setprecision(3) << a[i];
    cout << endl;
}

void XoaViTri(float a[], int& n, int k)
{
    for (int i = k; i <= n - 2; i++)
        a[i] = a[i + 1];
    n--;
}

void XoaAm(float a[], int& n)
{
    if (n == 0)
        return;

    if (a[n - 1] < 0)
        XoaViTri(a, n, n - 1);

    XoaAm(a, n);
}
