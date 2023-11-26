#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int TimViTri(float [], int, float);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[100];
	float x;
	cout << "Nhap gia tri x: ";
	cin >> x;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	cout << "Mang mot chieu cac so la: ";
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
	cout << endl;
	cout << "Vi tri trong mang co gia tri gan x nhat la: " << TimViTri(a,n,x);
	return 0;
}
int TimViTri(float a[], int n, float x) {
	if (n == 1)
		return 0;
	int lc = TimViTri(a, n - 1, x);
	if (abs(a[n - 1] - x) < abs(a[lc] - x))
		lc = n - 1;
	return lc;
}