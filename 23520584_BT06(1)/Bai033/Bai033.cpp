#include <iostream>
#include <cmath>
using namespace std;

float TinhAn(int);

int main()
{
    int n;
    cin >> n;
    cout << TinhAn(n);
    return 0;
}

float TinhAn(int n)
{
    if (n == 1)
        return 2;
    float at = TinhAn(n - 1);
    return (at * at + 2) / (2 * at);
}