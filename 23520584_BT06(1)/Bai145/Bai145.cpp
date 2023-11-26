#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ktTonTai(int[], int);

int main()
{
    int n;
    int a[100];
    Nhap(a, n);
    if (ktTonTai(a, n))
        cout << "Ton tai.";
    else
        cout << "Khong ton tai.";
    return 0;
}

void Nhap(int a[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int ktTonTai(int a[], int n)
{
    if (n <= 1)
        return 0;
    if (a[n - 1] == 0 && a[n - 2] == 0)
        return 1;
    return ktTonTai(a, n - 1);
}