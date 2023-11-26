#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float a[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void LietKe(float a[], int n, float x, float y) 
{
    if (n == 0)
        return;
    LietKe(a, n - 1, x, y);
    if (a[n - 1] >= x && a[n - 1] <= y)
        cout << setw(10) << a[n - 1];
}
int main() 
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float* a = new float[n]; 
    Nhap(a, n);
    float x, y;
    cout << "Nhap x va y: ";
    cin >> x >> y;
    cout << "Cac gia tri thoa man dieu kien: ";
    LietKe(a, n, x, y);
    return 0;
}