#include<iostream>
using namespace std;

void Nhap(int[], int&);
bool ktNt(int);
int DemNT(int[], int);

int main()
{
	int a[100], n;
	Nhap(a, n);
	cout << "Ket qua la: " << DemNT(a, n);
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
bool ktNt(int n) 
{
	if (n < 2) 
		return false;

	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0)
			return false;

	}
	return true;
}
int DemNT(int a[], int n)
{
	if (n < 1)
		return 0;
	int dem = DemNT(a, n - 1);
	if (ktNt(a[n - 1]))
		dem++;
	return dem;
}