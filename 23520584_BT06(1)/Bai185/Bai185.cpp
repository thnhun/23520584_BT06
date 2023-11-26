#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int DemPhanBiet(float [], int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[100];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	cout << "Mang mot chieu cac so la: ";
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(3) << a[i];
	cout << endl;
	cout << "So luong gia tri phan biet: ";
	cout << DemPhanBiet(a, n);
	return 0;
}
int DemPhanBiet(float a[], int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int dem = DemPhanBiet(a, n - 1);
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}