#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int ktCotGiam(float[][50], int, int, int);
void Nhap(float[][50], int&, int&, int&);
void Xuat(float[][50], int, int);
int main() {
	int m, n, c;
	float a[50][50];
	Nhap(a, m, n, c);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "Kiem tra cot giam dung =1, sai =0: ";
	cout << ktCotGiam(a,m,n,c);
	return 0;
}
void Nhap(float a[][50], int& m, int& n, int& c) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap vi tri cot: ";
	cin >> c;
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
int ktCotGiam(float a[][50], int m, int n, int c) {
	if (m == 1)
		return 1;
	if (a[m - 2][c] >= a[m - 1][c] && ktCotGiam(a, m - 1, n, c) == 1)
		return 1;
	return 0;
}