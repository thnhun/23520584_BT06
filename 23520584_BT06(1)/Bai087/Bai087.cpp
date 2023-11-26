#include <iostream>
#define MAX 100
using namespace std;

float TongDuong(float[], int);

int main()
{
    int n;
    cin >> n;

    float a[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << TongDuong(a, n);

    return 0;
}

float TongDuong(float a[], int n)
{
    if (n == 0)
        return 0;
    float s = TongDuong(a, n - 1);
    if (a[n - 1] > 0)
        s = s + a[n - 1];
    return s;
}
