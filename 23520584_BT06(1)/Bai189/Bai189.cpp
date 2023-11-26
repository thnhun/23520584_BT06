#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	LietKe(a, n);
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

void LietKe(int a[], int n)
{
	if (n <= 1)
		return;
	if (n == 2)
	{
		if (a[n - 2] % 2 == 0 && a[n - 1] % 2 == 0)
			cout << a[n - 2];
		return;
	}
	if ((a[n - 2] % 2 == 0) && ((a[n - 3] % 2 == 0) || (a[n - 1] % 2 == 0)))
	{
		cout << a[n - 2] << setw(6);
	}
	LietKe(a, n - 1);
}