#include <iostream>
using namespace std;
void Nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
int ChuSoDau(int n) 
{
    n = abs(n);
    if (n <= 9)
        return n;
    return ChuSoDau(n / 10);
}
int TimGiaTri(int a[], int n) {
    if (n == 0)
        return 0;
    int lc = TimGiaTri(a, n - 1);
    if (lc != 0)
        return lc;
    if (ChuSoDau(a[n - 1]) % 2 != 0)
        return a[n - 1];
    return 0;
}
int main() 
{
    int a[100];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Nhap(a, n);
    cout << "Gia tri dau tien co chu so dau tien la so le trong mang la:" << TimGiaTri(a, n);
    return 0;
}