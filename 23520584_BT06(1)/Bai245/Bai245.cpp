#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
float AmLonNhat(float[][50], int, int);
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
int main() {
	int m, n;
	float a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "gia tri am lon nhat la: ";
	cout << AmLonNhat(a, m, n);
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
float AmLonNhat(float a[][50], int m, int n) {
	if (m == 0)
		return 0;
	float lc = AmLonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] < 0)
			if (lc == 0 || a[m - 1][j] > lc)
				lc = a[m - 1][j];
	return lc;
}