#include <iostream>
using namespace std;
float Tong(int n)
{
    if (n == 0)
        return 0;
    float s = Tong(n - 1);
    return (s + sqrt(1 + (float)1 / n / n + (float)1 / (n + 1) / (n + 1)));
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    float kq = Tong(n);
    cout << kq << endl;
    return 0;
}