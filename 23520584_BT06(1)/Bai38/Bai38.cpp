#include <iostream>
using namespace std;
int ChuSoNhoNhat(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	int lc = ChuSoNhoNhat(n = 10);
	int dv = n % 10;
	if (dv < lc)
		lc = dv;
	return lc;
}
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	float kq = ChuSoNhoNhat(n);
	cout << kq << endl;
	return 0;
}