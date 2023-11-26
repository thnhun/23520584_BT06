#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
void SapCotTang(float[][50], int, int, int);
void SapCotGiam(float[][50], int, int, int);
void SapXep(float[][50], int, int);
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int main() {
	int m, n;
	float a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	SapXep(a, m, n);
	cout << "Ma tran sau khi sap xep la: ";
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
void HoanVi(float& x, float& y) {
	float temp = x;
	x = y;
	y = temp;
}
void SapCotTang(float a[][50], int m, int n, int c) {
	if (m == 1)
		return;
	for (int i = 0; i < m - 1; i++)
		if (a[i][c] > a[m - 1][c])
			HoanVi(a[i][c], a[m - 1][c]);
	SapCotTang(a, m - 1, n, c);
}
void SapCotGiam(float a[][50], int m, int n, int c) {
	if (m == 1)
		return;
	for (int i = 0; i < m - 1; i++)
		if (a[i][c] < a[m - 1][c])
			HoanVi(a[i][c], a[m - 1][c]);
	SapCotGiam(a, m - 1, n, c);
}
void SapXep(float a[][50], int m, int n) {
	if (n == 1)
		return;
	SapCotGiam(a, m, n, 0);
	if ((n - 1) % 2 == 0)
		SapCotGiam(a, m, n, n - 1);
	else
		SapCotTang(a, m, n, n - 1);
	SapXep(a, m, n - 1);
}