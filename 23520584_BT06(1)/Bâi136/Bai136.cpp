#include<iostream>
using namespace std;

void Nhap(int[], int&);
bool ktDang5m(int);
int Dang5mLN(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Ket qua la: " << Dang5mLN(a, n);
	return 0;
}
void Nhap(int a[100], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
bool ktDang5m(int n)
{
	if (n <= 0)
		return false;
	while (n % 5 == 0)
		n /= 5;
	return n == 1;
}
int Dang5mLN(int a[], int n)
{
	if (n == 0)
		return 0;
	int max = Dang5mLN(a, n - 1);
	if(!ktDang5m(a[n-1]))
		return max;
	if (max == 0)
		return a[n - 1];
	if (a[n - 1] > max)
		max = a[n - 1];
	return max;
}
