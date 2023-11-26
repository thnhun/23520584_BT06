#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int TimGiaTri(int[], int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[100];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (201) - 100;
	cout << "Mang mot chieu cac so la: ";
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
	cout << endl;
	cout << "So nguyen to lon nhat la: " << TimGiaTri(a, n);
	return 0;
}
bool ktNguyenTo(int n) {
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int TimGiaTri(int a[], int n) {
	if (n == 0)
		return 0;
	int lc = TimGiaTri(a, n - 1);
	if (!ktNguyenTo(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;
}