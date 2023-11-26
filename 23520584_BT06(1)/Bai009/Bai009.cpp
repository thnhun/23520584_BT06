#include <iostream>
using namespace std;

long double LuyThua(double, int);

int main()
{
    double x;
    cin >> x;
    int n;
    cin >> n;
    cout << LuyThua(x, n);
    return 0;
}

long double LuyThua(double x, int n)
{
    if (n == 0)
        return 1;
    float t = LuyThua(x, n - 1);
    return (t * x);
}