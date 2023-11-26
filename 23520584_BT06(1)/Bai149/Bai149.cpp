#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int ktBang(int[], int);
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
	cout << "Kiem tra bang nhau: " << ktBang(a, n);
	return 0;
}
int ktBang(int a[], int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if ((a[n - 2] == a[n - 1]) && ktBang(a, n - 1) == 1)
		return 1;
	return 0;
}