#include<iostream>
#include<cmath>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "ket qua la: " << Tong(n);
	return 0;
}
float Tong(int n)
{
	if (n == 0)
		return 0;
	return pow((n + Tong(n - 1)), (float)1 / (n + 1));

}