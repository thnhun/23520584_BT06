#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Lietke(float[], int);
float Max(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Lietke(a, n);
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
void Lietke(float a[], int n)
{
	if (n == 0)
		return;
	float max = Max(a, n - 1);
	if (max < a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (max == a[n - 1])
		cout << setw(6) << n - 1;
	Lietke(a, n - 1);
}

float Max(float a[], int n)
{
	float max = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}