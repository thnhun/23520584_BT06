#include <iostream>
using namespace std;
void Nhap(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
float Tong(float a[], int n)
{
    if (n == 0)
        return 0;
    return Tong(a, n - 1) + a[n - 1];
}

int main()
{
    float a[100];
    int n;
    cout << "Nhap n:";
    cin >> n;
    Nhap(a, n);
    float kq = Tong(a, n);
    cout << kq << endl;
    return 0;
}