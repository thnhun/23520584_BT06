#include <iostream>
#include <iomanip>
using namespace std;

bool ktToanLe(int);
void LietKe(int[], int);

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    LietKe(a, n);
    return 0;
}

void LietKe(int a[], int n)
{
    if (n == 0)
        return;
    LietKe(a, n - 1);
    if (ktToanLe(a[n - 1]))
        cout << setw(6) << a[n - 1];
}

bool ktToanLe(int num)
{
    int digit = 0;
    if (num == 0)
        return false;
    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 == 0)
            return false;
        num /= 10;
    }
    return true;
}
