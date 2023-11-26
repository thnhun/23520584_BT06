#include <iostream>
#include <iomanip>
using namespace std;
float Tinh(int n)
{
    if (n == 0)
        return 0;
    return sqrt(n + Tinh(n - 1));
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