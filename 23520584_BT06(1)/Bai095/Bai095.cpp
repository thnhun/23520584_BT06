#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int DemChan(int[], int);
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
	cout << "So luong gia tri chan la: " << DemChan(a, n);
	return 0;
}
int DemChan(int a[], int n) {
	if (n == 0)
		return 0;
	int dem = DemChan(a, n - 1);
	if (a[n - 1] % 2 == 0)
		dem++;
	return dem;
}