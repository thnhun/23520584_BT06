#include <iostream>
using namespace std;

void Nhap(float*& a, int& n) 
{
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    a = new float[n];
    for (int i = 0; i < n; ++i) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
float NhoNhat(float a[], int n) 
{
    if (n == 1)
        return a[0];
    float lc = NhoNhat(a, n - 1);
    if (a[n - 1] < lc)
        lc = a[n - 1];
    return lc;
}
int main() 
{
    float* a;
    int n;
    Nhap(a, n);
    cout << "Gia tri nho nhat trong mang la: " << NhoNhat(a, n) << endl;
    delete[] a; 
    return 0;
}
