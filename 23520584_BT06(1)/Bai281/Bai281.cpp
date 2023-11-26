#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
float LonNhatCot(float[][50], int, int, int);
void ThemDong(float[][50], int&, int);
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int main() {
	int m, n;
	float a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	ThemDong(a, m, n);
	cout << "Ma tran sau khi them dong la: ";
	cout << endl;
	Xuat(a, m, n);
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
			a[i][j] = rand() / (RAND_MAX / 200.0) - 100.0;
}
void Xuat(float a[][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(8) << setprecision(3) << a[i][j];
		cout << endl;
	}
}
float LonNhatCot(float a[][50], int m, int n, int c) {
	if (m == 1)
		return a[0][c];
	float lc = LonNhatCot(a, m - 1, n, c);
	if (a[m - 1][c] > lc)
		lc = a[m - 1][c];
	return lc;
}
void ThemDong(float a[][50], int& m, int n) {
	if (n == 0) {
		m++;
		return;
	}
	ThemDong(a, m, n - 1);
	a[m - 1][n - 1] = LonNhatCot(a, m - 1, n, n - 1);
}