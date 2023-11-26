#include <iostream>
using namespace std;
void Nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int ChuSoDau(int n) 
{
	while (n >= 10) 
		n /= 10;
	return n;
}
int TongGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = TongGiaTri(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		s = s + a[n - 1];
	return s;
}
int main()
{
	int a[100],n;
	cout << "Nhap n:";
	cin >> n;
	Nhap(a,n);
	int kq = TongGiaTri(a, n);
	cout << "Tong cac chu so co so dau tien la so chan trong mang la:" << kq;
	return 0;
}