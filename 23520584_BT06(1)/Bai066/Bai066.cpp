#include <iostream>
long  ChinhHop(int, int);
using namespace std;


int main() 
{
    int n, k;

    cout << "Nhap gia tri cua n: ";
    cin >> n;

    cout << "Nhap gia tri cua k: ";
    cin >> k;

    if (n < 0 || k < 0 || k > n)
    {
        cout << "Nhap gia tri khong hop le. Yeu cau n >= 0, k >= 0, va k <= n." << endl;
        return 1;
    }

    long ketQua = ChinhHop(n, k);
    cout << "Chinh Hop C(" << n << ", " << k << ") la: " << ketQua << endl;
    return 0;
}

long  ChinhHop(int n, int k) 
{
    if (k == 0 || k == n)
        return 1;
    else
        return ChinhHop(n - 1, k - 1) + ChinhHop(n - 1, k);
}
