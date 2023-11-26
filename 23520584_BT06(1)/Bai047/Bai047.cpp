#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);
int TinhBn(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "so a" << n << " la: " << TinhAn(n) << endl;
	cout << "so b" << n << " la: " << TinhBn(n);
	return 0;
}
int TinhAn(int n) {
	if (n == 1)
		return 2;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (x * x + 2 * y * y);
}
int TinhBn(int n) {
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return 2 * x * y;
}