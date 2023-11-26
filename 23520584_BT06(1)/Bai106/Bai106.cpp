#include<iostream>
using namespace std;

void Nhap(float[], int&, float&);
float XaNhat(float[], int, float);

int main()
{
	float a[100], x;
	int n;
	Nhap(a, n, x);
	cout << "Ket qua la: " << XaNhat(a, n, x);
	return 0;
}
void Nhap(float a[], int& n, float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
float XaNhat(float a[], int n, float x)
{
	if (n == 1)
		return a[0];
	float lc = XaNhat(a, n - 1, x);
	if (abs(a[n - 1] > (lc - x)))
		lc = a[n - 1];
	return lc;
}