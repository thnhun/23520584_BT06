#include <iostream>
#include <cmath>
using namespace std;
float Tinh(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong la: " << Tinh(n);
	return 0;
}
float Tinh(int n) {
	if (n == 0)
		return 1;
	return 1 / (1 + Tinh(n - 1));
}