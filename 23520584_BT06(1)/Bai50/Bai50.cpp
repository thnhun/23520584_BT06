#include <iostream>
using namespace std;
float Tinh(int n)
{
    if (n == 0)
        return -1;
    if (n == 1)
        return 3;
    int x = Tinh(n - 1);
    int y = Tinh(n - 2);
    return (5 * x - y);
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    float kq = Tinh(n);
    cout << kq << endl;
    return 0;
}