#include <iostream>
#include <cmath>
using namespace std;
int TichChuSo(int n);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich la: " << TichChuSo(n);
	return 0;
}
int TichChuSo(int n) {
	n = abs(n);
	if (n <= 9)
		return n;
	int T = TichChuSo(n / 10);
	int dv = n % 10;
	return T * dv;
}