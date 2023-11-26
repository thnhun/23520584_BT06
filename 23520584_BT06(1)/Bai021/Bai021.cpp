#include <iostream>
using namespace std;

float Tinh(float, int);

int main()
{
    int n;
    cin >> n;
    float x;
    cin >> x;
    cout << Tinh(x, n);
    return 0;
}

float Tinh(float x, int n)
{
    if (n == 0)
        return x;
    float s = Tinh(x, n - 1);
    return (s * (x + n));
}