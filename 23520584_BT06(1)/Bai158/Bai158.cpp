#include <iostream>
#include <cmath>
using namespace std;
void DuongTang(float[], int);
void HoanVi(float&, float&);
void DuongTang(float a[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i <= n - 2; i++)
        if (a[i] > 0 && a[n - 1] > 0 && a[i] > a[n - 1])
            HoanVi(a[i], a[n - 1]);
    DuongTang(a, n - 1);
}
void HoanVi(float& a, float& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    float a[] = { 1.2, -3.4, 9.0, -7.8, 5.6 };
    int n = sizeof(a) / sizeof(a[0]);
    DuongTang(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
