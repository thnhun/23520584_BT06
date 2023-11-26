#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int DemCapChan(int[], int);

int main() {
    int a[100];
    int n;
    Nhap(a, n);
    cout << DemCapChan(a, n);
    return 0;
}

void Nhap(int a[], int& n) 
{
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
}

int DemCapChan(int a[], int n) 
{
    if (n <= 1)
        return 0;
    else 
    {
        if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
            return 1 + DemCapChan(a, n - 1);
        else
            return DemCapChan(a, n - 1);
    }
}