#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DemDoiXung(int[], int);
bool ktDoiXung(int);

int main()
{
    int n;
    int a[100];
    Nhap(a, n);
    cout << DemDoiXung(a, n);
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

int DemDoiXung(int a[], int n)
{
    if (n == 0)
        return 0;
    int count = DemDoiXung(a, n - 1);
    if (ktDoiXung(a[n - 1]))
        count++;
    return count;
}

bool ktDoiXung(int num)
{
    int temp = num;
    int reverse = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    return num == reverse;
}