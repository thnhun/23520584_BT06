#include <iostream>
#include <iomanip>
using namespace std;
void Dem(int, int, int&, int[], int[], int[], int[]);
int main() {
	int n;
	int a[100];
	int s1[100], s2[100];
	int cot[100];
	int dem = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= 99; i++)
		cot[i] = 1;
	for (int i = 1; i <= 99; i++)
		s1[i] = 1;
	for (int i = 1; i <= 99; i++)
		s2[i] = 1;
	cout << "So cach giai bai toan " << n << " quan hau la: ";
	Dem(1, n, dem, a, cot, s1, s2);
	cout << dem;
	return 0;
}
void Dem(int i, int n, int &dem, int a[], int cot[], int s1[], int s2[]) {
	for (int j = 1; j <= n; j++) {
		if (cot[j] == 1 && s1[i - j + n] == 1 && s2[i + j - 1] == 1) {
			a[i] = j;
			cot[j] = 0;
			s1[i - j + n] = 0;
			s2[i + j - 1] = 0;
			if (i == n)
				dem++;
			else
				Dem(i + 1, n, dem, a, cot, s1, s2);
			cot[j] = s1[i - j + n] = s2[i + j - 1] = 1;
		}
	}
}