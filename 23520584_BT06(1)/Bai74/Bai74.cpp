#include <iostream>
using namespace std;
void LietKeSoChan(int arr[], int n)
{
    if (n == 0) 
        return;
    int ChuSoDau = arr[n - 1];
    while (ChuSoDau >= 10) 
        ChuSoDau /= 10;
    if (ChuSoDau % 2 == 0) 
        cout << arr[n - 1] << " ";
    LietKeSoChan(arr, n - 1);
}
int main()
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];
    cout << "Cac gia tri co chu so dau tien la so chan: ";
    LietKeSoChan(arr, n);
    return 0;
}