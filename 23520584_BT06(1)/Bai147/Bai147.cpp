#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ktTang(int[], int);

int main()
{
    int n;
    int a[100];
    Nhap(a, n);
    if (ktTang(a, n) == 1)
        cout << "Mang co tang dan.";
    else
        cout << "Mang khong tang dan.";
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

int ktTang(int a[], int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if ((a[n - 2] <= a[n - 1]) && ktTang(a, n - 1) == 1)
        return 1;
    return 0;
}
