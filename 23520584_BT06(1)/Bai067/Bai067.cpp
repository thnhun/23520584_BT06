#include <iostream>
#include <iomanip>
using namespace std;

void Xuat(int[], int);

int main()
{
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	Xuat(a, n);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
	{
		return;
	}
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}
