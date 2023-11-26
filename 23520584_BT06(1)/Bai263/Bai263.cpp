#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int ktDong(int[][50], int, int, int);
void LietKe(int[][50], int, int);
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int main() {
	int m, n;
	int a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "Chi so toan chan la: ";
	LietKe(a, m, n);
	return 0;
}
void Nhap(int a[][50], int& m, int& n) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % (201) - 100;
}
void Xuat(int a[][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << setw(6) << a[i][j];
		cout << endl;
	}
}
int ktDong(int a[][50], int m, int n, int d) {
	if (n == 0)
		return 0;
	if (n == 1) {
		if (a[d][0] % 2 == 0)
			return 1;
		else
			return 0;
	}
	if (a[d][n - 1] % 2 == 0 && ktDong(a, m, n - 1, d) == 1)
		return 1;
	return 0;
}
void LietKe(int a[][50], int m, int n) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m, n, m - 1) == 1)
		cout << setw(4) << (m - 1);
}