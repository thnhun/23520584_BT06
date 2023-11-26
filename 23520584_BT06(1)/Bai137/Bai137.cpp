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
	cout << "Gia tri co so lan xuat hien nhieu nhat la: " << TimGiaTri(a, n);
	return 0;
}
int TanSuat(int a[], int n, int x) {
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int TimGiaTri(int a[], int n) {
	if (n == 1)
		return a[0];
	int lc = TimGiaTri(a, n - 1);
	if (TanSuat(a, n, a[n - 1]) > TanSuat(a, n, lc))
		lc = a[n - 1];
	return lc;
}