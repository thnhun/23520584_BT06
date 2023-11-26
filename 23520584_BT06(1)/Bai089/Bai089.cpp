#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int TongChinhPhuong(int[], int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (201) - 100;
	cout << "Mang mot chieu cac so la: ";
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
	cout << endl;
	cout << "Tong cac gia tri chinh phuong trong mang cac so nguyen la: " << TongChinhPhuong(a, n);
	return 0;
}
bool ktChinhPhuong(int n) {
	if (n < 0)
		return false;
	int t = sqrt(n);
	if (t * t == n)
		return true;
	return false;
}
int TongChinhPhuong(int a[], int n) {
	if (n == 0)
		return 0;
	int s = TongChinhPhuong(a, n - 1);
	if (ktChinhPhuong(a[n - 1]))
		s = s + a[n - 1];
	return s;
}