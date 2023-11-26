#include <iostream>
using namespace std;

void Nhap(int[], int[], int&, int&);
bool laMangConRecursive(int[], int[], int, int, int = 0, int = 0);

int main() {
    int a[100], b[100], m, n;
    Nhap(a, b, m, n);

    if (laMangConRecursive(a, b, m, n))
        cout << "a la mang con cua b" << endl;
    else
        cout << "a khong phai la mang con cua b" << endl;

    return 0;
}

void Nhap(int a[], int b[], int& m, int& n) {
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Nhap m: ";
    cin >> m;
    for (int i = 0; i < m; i++) {
        cout << "b[" << i << "]: ";  
        cin >> b[i];
    }
}

bool laMangConRecursive(int a[], int b[], int m, int n, int i, int j) {

    if (i == m)
        return true;

    if (j == n)
        return false;


    if (a[i] != b[j])
        return laMangConRecursive(a, b, m, n, i, j + 1);

    return laMangConRecursive(a, b, m, n, i + 1, j + 1);
}
