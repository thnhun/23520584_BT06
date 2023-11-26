#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int Tong3m(int[][50], int, int);
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int main() {
	int m, n;
	int a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "Tong cac so co dang 3m la: ";
	cout << Tong3m(a, m, n);
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
bool ktDang3m(int n) {
	if (n <= 0)
		return false;
	int flag = 1;
	int t = n;
	while (t > 1) {
		if (t % 3 != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		return true;
	return false;
}
int Tong3m(int a[][50], int m, int n) {
	if (m == 0)
		return 0;
	int s = Tong3m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang3m(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}