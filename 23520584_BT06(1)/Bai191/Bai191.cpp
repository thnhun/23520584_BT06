#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int GanNhat(float[], int, float&, float&);
int main() {
	int n;
	float x1, x2;
	cout << "Nhap n: ";
	cin >> n;
	float a[100];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Mang mot chieu cac so la: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(3) << a[i];
	cout << endl;
	cout << "khoang cach ngan nhat la: ";
	cout << GanNhat(a, n, x1, x2);
	return 0;
}
int GanNhat(float a[], int n, float& x1, float& x2) {
	if (n <= 2)
		return 0;
	x1 = a[n - 1];
	x2 = a[n - 2];
	float lc = GanNhat(a, n - 1, x1, x2);
	if (abs(x1-x2) < lc)
		lc = abs(x1-x2);
	return lc;
}