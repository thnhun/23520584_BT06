#include <iostream>
using namespace std;

void Nhap(int[], int&);
int TimGiaTri(int[], int);
bool ktToanLe(int);

int main()
{
    int n;
    int a[100];
    Nhap(a, n);
    cout << TimGiaTri(a, n);
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

bool ktToanLe(int n)
{
    while (n > 0)
    {
        if ((n % 10) % 2 == 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int TimGiaTri(int a[], int n)
{
    if (n == 0)
        return 0;
    int lc = TimGiaTri(a, n - 1);
    if (!ktToanLe(a[n - 1]))
        return lc;
    if (lc == 0)
        return a[n - 1];
    if (a[n - 1] > lc)
        lc = a[n - 1];
    return lc;
}
