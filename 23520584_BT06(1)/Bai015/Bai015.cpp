#include <iostream>
using namespace std;

float Tong(int);

int main()
{
    int n;
    cin >> n;
    cout << Tong(n);
    return 0;
}

float Tong(int n)
{
    if (n == 0)
        return 0;
    float s = Tong(n - 1);
    return (s + (float)1 / n / (n + 1));
}