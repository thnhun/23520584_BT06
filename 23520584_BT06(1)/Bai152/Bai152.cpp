#include <iostream>
#include <cmath>
using namespace std;
void XayDung(int[], int, int[], int&);
bool ktNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void XayDung(int a[], int n, int b[], int& k)
{
    if (n == 0)
    {
        k = 0;
        return;
    }
    XayDung(a, n - 1, b, k);
    if (ktNguyenTo(a[n - 1]))
        b[k++] = a[n - 1];
}

int main() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(a) / sizeof(a[0]);
    int b[100];
    int m;
    XayDung(a, n, b, m);
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
