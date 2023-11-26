#include <iostream>
#include <cmath>
using namespace std;

int ChuSoDau(int);

int main()
{
    int n;
    cin >> n;
    cout << ChuSoDau(n);
    return 0;
}

int ChuSoDau(int n)
{
    n = abs(n);
    if (n <= 9)
        return n;
    return ChuSoDau(n / 10);
}