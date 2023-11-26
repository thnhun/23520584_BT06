#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
float TongCot(float[][50], int, int, int);
float TongNhoNhat(float[][50], int, int);
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int main() {
	int m, n;
	float a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "tong cot nho nhat la: ";
	cout << TongNhoNhat(a, m, n);
	return 0;
}
void Nhap(float a[][50], int& m, int& n) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void Xuat(float a[][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(8) << setprecision(3) << a[i][j];
		cout << endl;
	}
}
float TongCot(float a[][50], int m, int n, int c) {
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}
float TongNhoNhat(float a[][50], int m, int n) {
	if (n == 1)
		return TongCot(a, m, n, 0);
	float lc = TongNhoNhat(a, m, n - 1);
	if (TongCot(a, m, n, n - 1) < lc)
		lc = TongCot(a, m, n, n - 1);
	return lc;
}