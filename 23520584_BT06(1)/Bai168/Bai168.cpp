#include <iostream>
#include <iomanip>

const int MAX = 100;

void NhapMang(float[], int&);
void XuatMang(float[], int);
void XuatMangConTang(float[], int, int);
float TongMangConTang(float[], int, int, float&);

using namespace std;

int main()
{
    float a[MAX];
    int n;
    NhapMang(a, n);
    cout << "Mang da nhap: ";
    XuatMang(a, n);

    cout << "\nXuat va tinh tong mang con tang: ";
    float tongMangConTang = 0;
    TongMangConTang(a, n, 0, tongMangConTang);

    cout << "\nTong tat ca cac mang con tang trong mang la: " << tongMangConTang << endl;

    return 0;
}

void NhapMang(float a[], int& n)
{
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void XuatMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << fixed << setw(10) << setprecision(2) << a[i];
    cout << endl;
}

void XuatMangConTang(float a[], int n, int i)
{
    if (i == n)
        return;

    int j = i;
    while (j < n - 1 && a[j] < a[j + 1])
    {
        cout << fixed << setw(10) << setprecision(2) << a[j];
        j++;
    }
    cout << fixed << setw(10) << setprecision(2) << a[j] << endl;

    XuatMangConTang(a, n, i + 1);
}

float TongMangConTang(float a[], int n, int i, float& tong)
{
    if (i == n)
        return tong;

    int j = i;
    float sum = 0;
    while (j < n - 1 && a[j] < a[j + 1])
    {
        cout << fixed << setw(10) << setprecision(2) << a[j];
        sum += a[j];
        j++;
    }
    cout << fixed << setw(10) << setprecision(2) << a[j] << endl;
    sum += a[j];
    tong += sum;

    return TongMangConTang(a, n, i + 1, tong);
}
