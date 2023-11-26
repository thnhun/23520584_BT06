#include<iostream>
#include<iomanip>
int DemSoLe(int);
using namespace std;

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << "So chu so le la : " << DemSoLe(n);
	return 0;
}

int DemSoLe(int n)
{
	n = abs(n);

	if (n <= 9)
	{
		if (n % 2 == 0)
			return 0;
		return 1;
	}
	int dem = DemSoLe(n / 10);
	int dv = n % 10;
	if (n % 2 == 0)
		return dem;
	return dem + 1;
}
