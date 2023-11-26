#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int DemHoanThien(int[], int);
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
	cout << "So luong so hoan thien la: " << DemHoanThien(a, n);
	return 0;
}
bool ktHoanThien(int n) {
	if (n < 0)
		return false;
	int i = 1;
	int s = 0;
	while (i < n) {
		if (n % i == 0)
			s = s + i;
		i++;
	}
	if (s == n)
		return true;
	return false;
}
int DemHoanThien(int a[], int n){
	if (n == 0)
		return 0;
	int dem = DemHoanThien(a, n - 1);
	if (ktHoanThien(a[n - 1]))
		dem++;
	return dem;
}