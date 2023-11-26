#include <iostream>
using namespace std;

void Nhap(int[], int&);
int TimGiaTri(int[], int);
bool ktDang2m(int);

int main()
{
    int n;
    int a[100];
    Nhap(a, n);
    TimGiaTri(a, n);
    if (TimGiaTri(a, n) != 0)
        cout << TimGiaTri(a, n);
    else
        cout << 0;
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

bool ktDang2m(int n)
{
    if (n <= 0)
        return false;
    while (n % 2 == 0)
        n /= 2;
    return (n == 1);
}

int TimGiaTri(int a[], int n)
{
    if (n == 0)
        return 0;
    int lc = TimGiaTri(a, n - 1);
    if (lc != 0)
        return lc;
    if (ktDang2m(a[n - 1]))
        return a[n - 1];
    return 0;
}
