#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int TongCot(int[][50], int, int, int);
void Nhap(int[][50], int&, int&, int&);
void Xuat(int[][50], int, int);
int main() {
	int m, n, c;
	int a[50][50];
	Nhap(a, m, n, c);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "Tong cac so chinh phuong la: ";
	cout << TongCot(a, m, n, c);
	return 0;
}
void Nhap(int a[][50], int& m, int& n, int& c) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap cot: ";
	cin >> c;
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
bool ktChinhPhuong(int n) {
	if (n <= 0)
		return false;
	int t = sqrt(n);
	if (t * t == n)
		return true;
	return false;
}
int TongCot(int a[][50], int m, int n, int c) {
	if (m == 0)
		return 0;
	int s = TongCot(a, m - 1, n, c);
	if (ktChinhPhuong(a[m - 1][c]))
		s = s + a[m - 1][c];
	return s;
}