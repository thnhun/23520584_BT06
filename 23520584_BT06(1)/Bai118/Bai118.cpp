#include<iostream>
using namespace std;

void Nhap(float[], int&);
bool ChinhPhuong(float); 
float ChinhPhuongDau(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "Ket qua la: " << ChinhPhuongDau(a, n);
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
bool ChinhPhuong(float n)
{
	for (int i = 0; i < n; i++)
		if (i * i == n)
			return true;
	return false;
}
float ChinhPhuongDau(float a[], int n)
{
	if (n == 0)
		return -1;
	float lc = ChinhPhuongDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ChinhPhuong(a[n - 1]))
		return a[n - 1];
	return -1;
}
