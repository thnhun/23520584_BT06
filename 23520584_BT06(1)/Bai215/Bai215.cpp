#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int TongDong(int[][50], int, int, int);
void Nhap(int[][50], int&, int&, int&);
void Xuat(int[][50], int, int);
int main() {
	int m, n, d;
	int a[50][50];
	Nhap(a, m, n, d);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "Tong cac so doi xung la: ";
	cout << TongDong(a, m, n, d);
	return 0;
}
void Nhap(int a[][50], int& m, int& n, int &d) {
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap vi tri dong: ";
	cin >> d;
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
bool ktDoiXung(int n) {
	if (n <= 0)
		return false;
	int t = n;
	int s = 0;
	while (t != 0) {
		int du = t % 10;
		s = s * 10+ du;
		t = t / 10;
	}
	if (s == n)
		return true;
	return false;
}
int TongDong(int a[][50], int m, int n, int d) {
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, d);
	if (ktDoiXung(a[d][n - 1]))
		s = s + a[d][n - 1];
	return s;
}