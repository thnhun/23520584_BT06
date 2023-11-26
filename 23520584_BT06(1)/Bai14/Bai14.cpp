#include <iostream>
using namespace std;

int Tong(int n)
{
    if (n == 0)
        return 0;
    int s = Tong(n - 1);
    return (s + n * (n + 1) * (n + 2));
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