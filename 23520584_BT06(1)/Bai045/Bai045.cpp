#include <iostream>
#include <cmath>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{
    int n;
    cin >> n;
    cout << TinhAn(n) << " " << TinhBn(n);
    return 0;
}

int TinhAn(int n)
{
    if (n == 1)
        return 1;
    int x = TinhAn(n - 1);
    int y = TinhBn(n - 1);
    return (3 * y + 2 * x);
}

int TinhBn(int n)
{
    if (n == 1)
        return 1;
    int x = TinhAn(n - 1);
    int y = TinhBn(n - 1);
    return (x + 3 * y);
}