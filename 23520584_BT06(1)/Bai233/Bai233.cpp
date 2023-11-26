#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int DemHoanThien(int[][50], int, int, int);
void Nhap(int[][50], int&, int&, int&);
void Xuat(int[][50], int, int);
int main() {
	int m, n, d;
	int a[50][50];
	Nhap(a, m, n, d);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "So luong cac so hoan thien la: ";
	cout << DemHoanThien(a, m, n, d);
	return 0;
}
void Nhap(int a[][50], int& m, int& n, int& d) {
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
bool ktHoanThien(int n) {
	int i = 1;
	int s = 0;
	while (i < n) {
		if (n % i == 0)
			s = s + i;
		i++;
	}
	if (s == n)
		return true;
	return false;
}
int DemHoanThien(int a[][50], int m, int n, int d) {
	if (n == 0)
		return 0;
	int dem = DemHoanThien(a, m, n - 1, d);
	if (ktHoanThien(a[d][n - 1]))
		dem = dem + 1;
	return dem;
}