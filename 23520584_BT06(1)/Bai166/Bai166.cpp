/*
#include<iostream>
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
	int start = 0;
	if (n < 2 || start >= n)
		return;
	cout << "Mang con tu " << start + 1 << " den " << n << ": ";
	for (int i = start++; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	Lietke(a, n - 1);
}
*/

#include <iostream>

using namespace std;

void lietKeMangCon(int a[], int n) 
{
	for (int i = 0; i < n; i++) 
		for (int j = i + 2; j < n; j++) 
		{
			cout << "Mang con tu " << i + 1 << " den " << j + 1 << ": ";
			for (int k = i; k <= j; k++) 
				cout << a[k] << " ";
			cout << endl;
		}
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
int main() {
	int arr[100], n;
	Nhap(arr, n);
	lietKeMangCon(arr, n);

	return 0;
}
