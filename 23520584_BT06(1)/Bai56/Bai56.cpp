#include <iostream>
using namespace std;
float Tinh(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    float a = Tinh(n - 1);
    float b = Tinh(n - 2);
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