#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
void XoaViTri(float[], int&, int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[100];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	cout << "Mang mot chieu cac so la: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(3) << a[i];
	cout << endl;
	int vt;
	cout << "Nhap vi tri: ";
	cin >> vt;
	XoaViTri(a, n, vt);
	cout << "Mang sau khi xoa ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(3) << a[i];
	return 0;
}
void XoaViTri(float a[], int& n, int vt) {
	if (vt == (n - 1)) {
		n--;
		return;
	}
	a[vt] = a[vt + 1];
	XoaViTri(a, n, vt + 1);
}