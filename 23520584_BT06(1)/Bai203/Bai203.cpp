#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void LietKe(int[][50], int, int, int);
void Nhap(int[][50], int&, int&, int &);
void Xuat(int[][50], int, int);
int main() {
	int m, n, c;
	int a[50][50];
	Nhap(a, m, n, c);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "cac so co dang 5m la: ";
	LietKe(a, m, n, c);
	return 0;
}
void Nhap(int a[][50], int& m, int& n, int &c) {
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
bool ktDang5m(int n) {
	if (n <= 0)
		return false;
	int flag = 1;
	int t = n;
	while (t > 1) {
		if (t % 5 != 0)
			flag = 0;
		t = t / 5;
	}
	if (flag == 1)
		return true;
	return false;
}
void LietKe(int a[][50], int m, int n, int c) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n, c);
	if (ktDang5m(a[m - 1][c]))
		cout << setw(6) << a[m - 1][c];
}