#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
void DichXuongCot(float[][50], int, int, int);
void DichXuong(float[][50], int, int);
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int main() {
	int m, n;
	float a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	DichXuong(a, m, n);
	cout << "Ma tran sau khi dich xuong la: ";
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
void DichXuongCot(float a[][50], int m, int n, int c) {
	float temp = a[m - 1][c];
	for (int i = m - 1; i >= 1; i--)
		a[i][c] = a[i - 1][c];
	a[0][c] = temp;
}
void DichXuong(float a[][50], int m, int n) {
	if (n == 0)
		return;
	DichXuong(a, m, n - 1);
	DichXuongCot(a, m, n, n - 1);
}