#include<iostream>
using namespace std;

void Nhap(float[], int&);
float AmLN(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Ket qua la: " << AmLN(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
float AmLN(float a[], int n)
{
	if (n == 0)
		return 0;
	float max = AmLN(a, n - 1);
	if (a[n - 1] >= 0)
		return max;
	if (max == 0)
		return a[n - 1];
	if (a[n - 1] > max)
		max = a[n - 1];
	return max;
}