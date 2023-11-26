#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int HoanThienCuoi(int[], int);
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
		cout << setw(5) << a[i];
	cout << endl;
	cout << "So hoan thien cuoi cung la: " << HoanThienCuoi(a, n);
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
int HoanThienCuoi(int a[], int n) {
	if (n == 0)
		return -1;
	if (ktHoanThien(a[n - 1]))
		return a[n - 1];
	return HoanThienCuoi(a, n - 1);
}