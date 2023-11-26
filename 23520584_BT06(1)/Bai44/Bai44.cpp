#include <iostream>
using namespace std;
int ktGiam(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktGiam(n / 10) && hc >= dv)
		return 1;
	return 0;
}
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	float kq = ktGiam(n);
	cout << kq << endl;
	return 0;
}