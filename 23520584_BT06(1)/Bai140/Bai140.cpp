#include <iostream>
using namespace std;
void Nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
int ktKhong(int a[], int n)
{
    if (n == 0)
        return 0;
    if (a[n - 1] == 0)
        return 1;
    return ktKhong(a, n - 1);
}
int main()
{
    int a[100];
    int n;
    cout << "Nhap n:";
    cin >> n;
    Nhap(a, n);
    cout << "Gia tri nho nhat trong mang la: " << ktKhong(a, n) << endl;
    delete[] a;
    return 0;
}
