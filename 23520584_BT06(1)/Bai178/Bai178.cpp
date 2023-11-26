#include<iostream>
using namespace std;

void Nhap(int[], int&);
void DichTrai(int[], int);
void Xuat(int[], int);

int main()
{
    int a[100], n;
    Nhap(a, n);
    DichTrai(a, n);
    Xuat(a, n);
    return 0;
}
void Nhap(int a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
}
void DichTrai(int a[], int n)
{
    if (n <= 1)
        return;
    DichTrai(a, n - 1);
    swap(a[n - 2], a[n - 1]);
}
void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\na[" << i << "]: ";
        cout << a[i];
    }
}