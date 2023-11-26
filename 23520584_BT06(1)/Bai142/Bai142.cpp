#include<iostream>
using namespace std;

void Nhap(int[], int&);
int ktChan(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Ket qua la: " << ktChan(a,n);
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

int ktChan(int a[], int n)
{
	if (n == 0)
		return 0;
	int flag = ktChan(a, n - 1);
	if (a[n - 1] % 2 == 0)
		flag = 1;
	return flag;
}
