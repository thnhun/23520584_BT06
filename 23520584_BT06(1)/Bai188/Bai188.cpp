#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int ktThuoc(int[], int, int[], int);
int TanSuat(int[], int, float);
int TanSuat(int a[], int n, float x)
{
	if (n == 0)
		return 0;
	int dem = TanSuat(a, n - 1, x);
	if (a[n - 1] == x)
		dem++;
	return dem;
}
int ktThuoc(int a[], int n, int b[], int k)
{
	if (n == 1)
	{
		if (TanSuat(b, k, a[0]) == 0)
			return 0;
		return 1;
	}
	if (TanSuat(b, k, a[n - 1]) > 0 &&
		ktThuoc(a, n - 1, b, k) == 1)
		return 1;
	return 0;
}
int main()
{
	int a[] = { 1.2, 2.3, 3.5, 4.7, 5.9 };
	int b[] = { 1.2, 2.3, 3.5, 4.7, 5.9 };
	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(b) / sizeof(b[0]);
	ktThuoc(a, n, b, m);
	if (ktThuoc(a, n, b, m)) 
	{
		cout << "Tat ca cac phan tu trong mang a deu nam trong mang b.\n";
	}
	else 
	{
		cout << "Khong phai tat ca cac phan tu trong mang a deu nam trong mang b.\n";
	}
	return 0;
}
