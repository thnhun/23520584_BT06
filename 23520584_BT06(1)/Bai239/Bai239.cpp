#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
float LonNhat(float[][50], int, int);
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int main() {
	int m, n;
	float a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "Gia tri lon nhat la: ";
	cout << LonNhat(a, m, n);
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
float LonNhat(float a[][50], int m, int n) {
	if (m == 1) {
		float lc = a[0][0];
		for (int j = 0; j < n; j++)
			if (a[0][j] > lc)
				lc = a[0][j];
		return lc;
	}
	float lc = LonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > lc)
			lc = a[m - 1][j];
	return lc;
}