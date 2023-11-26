#include <iostream>
using namespace std;
void DuaVeDau(int[], int);
void HoanVi(int&, int&);
void HoanVi(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void DuaVeDau(int a[], int n)
{
    if (n == 0)
        return;
    if (a[n - 1] % 3 != 0)
    {
        DuaVeDau(a, n - 1);
        return;
    }
    for (int i = 0; i <= n - 2; i++)
        if (a[i] % 3 != 0)
        {
            HoanVi(a[n - 1], a[i]);
            break;
        }
    DuaVeDau(a, n - 1);
}


int main()
{
    int a[] = { 3, 4, 6, 9, 1, 2, 5, 8, 7 };
    int n = sizeof(a) / sizeof(a[0]);
    DuaVeDau(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}