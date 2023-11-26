#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
void LietKe(float[], int);
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
	cout << "Cac day con tang la: ";
	LietKe(a, n);
	return 0;
}
int ktCon(float a[], int n, int vt, int l) {
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}
void XuatCon1(float a[], int n, int vt, int l) {
	if (l == 0)
		return;
	XuatCon1(a, n, vt, l - 1);
	cout << " " << a[vt + l - 1];
}
void XuatCon2(float a[], int n, int l) {
	if (n < 1)
		return;
	XuatCon2(a, n - 1, l);
	XuatCon1(a, n, n - 1, l);
}
void LietKe(float a[], int n) {
	if (n <= 2)
		return;
	LietKe(a, n - 1);
	for (int l = 1; l <= n; l++)
		if (ktCon(a, n, n - l, l) == 1)
			XuatCon1(a, n, n - l, l);
	cout << endl;
}