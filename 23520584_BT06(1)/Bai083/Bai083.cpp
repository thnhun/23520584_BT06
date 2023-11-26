#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
void LietKe(float[], int);
int main() {
	float a[100];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	cout << "Mang 1 chieu cac so la: ";
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(3) << a[i];
	cout << endl;
	cout << "Cac vi tri co gia tri nho nhat la: ";
	LietKe(a, n);
	return 0;
}
float NhoNhat(float a[], int n) {
	float lc = a[0];
	for (int i = 1; i < n; i++)
		if (lc > a[i])
			lc = a[i];
	return lc;
}
void LietKe(float a[], int n) {
	if (n == 0)
		return;
	float lc = NhoNhat(a, n - 1);
	if (lc > a[n - 1]) {
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);
}