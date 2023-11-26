#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
void ViTriLeTang(float[], int);
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
	ViTriLeTang(a, n);
	cout << "Sap xep vi tri le tang dan la: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(3) << a[i];
	return 0;
}
void HoanVi(float& x, float& y) {
	float temp = x;
	x = y;
	y = temp;
}
void ViTriLeTang(float a[], int n) {
	if (n == 0)
		return;
	for (int i = 0; i < n - 1; i++)
		if (i % 2 != 0 && (n - 1) % 2 != 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
	ViTriLeTang(a, n - 1);
}