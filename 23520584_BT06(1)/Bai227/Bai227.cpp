#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int DemChan(int[][50], int, int);
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int main() {
	int m, n;
	int a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "So luong gia tri chan la: ";
	cout << DemChan(a, m, n);
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
int DemChan(int a[][50], int m, int n) {
	if (m == 0)
		return 0;
	int dem = DemChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 == 0)
			dem = dem + 1;
	return dem;
}