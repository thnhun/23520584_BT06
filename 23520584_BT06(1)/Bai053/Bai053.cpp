#include <iostream>
#include <cmath>
using namespace std;
float Tinh(float, int);
int main() {
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong la: " << Tinh(x, n);
	return 0;
}
float Tinh(float x, int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return (1 + x);
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x) * a - (x * b));
}