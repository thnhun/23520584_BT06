#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void LietKe(int[][50], int, int);
void Nhap(int[][50], int&, int&);
void Xuat(int[][50], int, int);
int main() {
	int m, n;
	int a[50][50];
	Nhap(a, m, n);
	cout << "Ma tran la: ";
	cout << endl;
	Xuat(a, m, n);
	cout << "cac so co dang 2m la: ";
	LietKe(a, m, n);
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
bool ktDang2m(int n){
	if (n <= 0)
		return false;
	int flag = 1;
	int t = n;
	while (t > 1) {
		if (t % 2 != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		return true;
	return false;
}
void LietKe(int a[][50], int m, int n) {
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang2m(a[m - 1][j]))
			cout << setw(6) << a[m - 1][j];
}