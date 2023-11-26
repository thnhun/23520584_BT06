#include <iostream>
using namespace std;
float TinhAn(int n)
{
    if (n == 1)
        return 2;
    float at = TinhAn(n - 1);
    return (-9 * at - 24) / (5 * at + 13);
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    float kq = TinhAn(n);
    cout << kq << endl;
    return 0;
}