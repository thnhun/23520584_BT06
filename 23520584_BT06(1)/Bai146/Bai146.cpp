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
int ktChanLe(int a[], int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 0;
    if (n == 2)
    {
        if ((a[0] + a[1]) % 2 != 0)
            return 1;
        return 0;
    }
    if ((a[n - 1] + a[n - 2]) % 2 != 0)
        if (ktChanLe(a, n - 1) == 1)
            return 1;
    return 0;
}
int main()
{
    int a[100];
    int n;
    cout << "Nhap n:";
    cin >> n;
    Nhap(a, n);
    cout << "Gia tri nho nhat trong mang la: " << ktChanLe(a, n) << endl;
    delete[] a;
    return 0;
}
