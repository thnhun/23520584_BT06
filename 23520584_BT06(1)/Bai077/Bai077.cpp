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
	cout << "Cac vi tri co so am la: ";
	LietKe(a, n);
	return 0;
}
void LietKe(float a[], int n) {
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] < 0)
		cout << setw(6) << n-1;
}