#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
void DichPhai(int[], int);
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
	cout << "Mang sau khi dich phai xoay vong la: ";
	DichPhai(a, n);
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
	return 0;
}
void DichPhai(int a[], int n) {
	if (n <= 1)
		return;
	swap(a[n - 2], a[n - 1]);
	DichPhai(a, n - 1);
}