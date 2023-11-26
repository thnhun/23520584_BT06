#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void XuatBo3(float, float, float);
void LietKe(float[], int);
void XuatBo3(float x, float y, float z)
{
    cout << setw(10) << setprecision(3);
    cout << "(" << x << "," << y << "," << z << ")" << endl;
}
void LietKe(float a[], int n)
{
    if (n <= 2)
        return;
    for (int i = 0; i <= n - 3; i++)
        for (int j = i + 1; j <= n - 2; j++)
        {
            if (a[i] == (a[j] + a[n - 1]))
            {
                XuatBo3(a[i], a[j], a[n - 1]);
                XuatBo3(a[i], a[n - 1], a[j]);
            }
            if (a[j] == (a[i] + a[n - 1]))
            {
                XuatBo3(a[j], a[i], a[n - 1]);
                XuatBo3(a[j], a[n - 1], a[i]);
            }
            if (a[n - 1] == (a[i] + a[j]))
            {
                XuatBo3(a[n - 1], a[i], a[j]);
                XuatBo3(a[n - 1], a[j], a[i]);
            }
        }
    LietKe(a, n - 1);
}

int main() {
    float a[] = { 1.2, 2.3, 3.5, 4.7, 5.9 };
    int n = sizeof(a) / sizeof(a[0]);
    LietKe(a, n);
    return 0;
}