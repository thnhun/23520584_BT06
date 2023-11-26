#include <iostream>
#include <cmath>
using namespace std;

float Tinh(int);

int main()
{
    int n;
    cin >> n;
    cout << Tinh(n);
    return 0;
}

float Tinh(int n) 
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    float a = Tinh(n - 1);
    float b = Tinh(n - 2);
    return ((1 + n) * a - n * b);
}
