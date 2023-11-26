#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Lietke(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	Lietke(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void Lietke(int a[], int n)
{
	if (n == 0)
		return;
	Lietke(a, n - 1);
	if (a[n - 1] % 2 == 0)
		cout << setw(6) << a[n - 1];
}