#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
void HoanViCot(float[][50], int, int, int, int);
void Nhap(float[][50], int&, int&, int&, int&);
void Xuat(float[][50], int, int);
int main() {
	int m, n, c1, c2;
	float a[50][50];
	Nhap(a, m, n, c1, c2);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	HoanViCot(a, m, n, c1, c2);
	cout << "Ma tran sau khi hoan vi la: ";
	cout << endl;
	Xuat(a, m, n);
	return 0;
}
void Nhap(float a[][50], int& m, int& n, int& c1, int& c2) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap vi tri 2 cot can hoan vi: ";
	cin >> c1 >> c2;
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
void HoanViCot(float a[][50], int m, int n, int c1, int c2) {
	if (m == 0)
		return;
	HoanViCot(a, m - 1, n, c1, c2);
	HoanVi(a[m - 1][c1], a[m - 1][c2]);
}