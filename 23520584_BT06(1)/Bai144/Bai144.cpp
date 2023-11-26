#include<iostream>
#include<iomanip>
void Nhap(int[], int&);
void Xuat(int[], int);
int ktTinhChat(int[], int);
bool ktHoanThien(int);
using namespace std;

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "Mang da nhap :" << endl;
	Xuat(a, n); 
	int flag = ktTinhChat(a, n);
	if (flag == 1)
		cout << "\nMang ton tai so hoan thien lon hon 256.";
	else
		cout<< "\nMang ko ton tai so hoan thien lon hon 256.";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] : ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(10) << setprecision(3) << a[n - 1];
}

int ktTinhChat(int a[], int n)
{
	if (n == 0)
		return 0;
	if (ktHoanThien(a[n - 1]) && a[n - 1] > 256)
		return 1;
	return ktTinhChat(a, n - 1);
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	return s == k;
}