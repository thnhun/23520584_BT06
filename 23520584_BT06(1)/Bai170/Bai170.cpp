#include <iostream>
using namespace std;

int DemMangConTang(float a[], int n) {
    int dem = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            int j = i + 1;
            while (j < n && a[j] > a[j - 1]) {
                j++;
            }
            int k = j - i;
            if (k > 1) {
                dem++;
            }
        }
    }
    return dem;
}

int main() {
    float a[] = { 1.2, 3.4, 5.6, 7.8, 9.0 };
    int n = sizeof(a) / sizeof(a[0]);
    int dem = DemMangConTang(a, n);
    cout << dem;
    return 0;
}