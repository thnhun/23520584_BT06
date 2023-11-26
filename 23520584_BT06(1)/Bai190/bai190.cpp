#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool kiemTraGiongNhau(int[], int[], int, int);
int demXuatHien(int[], int[], int, int);

int main() {
    int a[100], b[100], m, n;
    Nhap(a, m);
    Nhap(b, n);
    int soLanXuatHien = demXuatHien(a, b, m, n);

    cout << "So lan xuat hien cua mang a trong mang b la: " << soLanXuatHien << endl;

    return 0;
}

void Nhap(int a[], int& m) {
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> a[i];
}

bool kiemTraGiongNhau(int a[], int b[], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i] == b[j])
                return true;
    return false;
}

int demXuatHien(int a[], int b[], int m, int n) {
    if (m == 0)
        return 0;

    return kiemTraGiongNhau(a, b, m, n) + demXuatHien(a + 1, b, m - 1, n);
}
