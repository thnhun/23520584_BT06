#include<iostream>
#include<iomanip>
int TinhAn(int);
using namespace std;

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	cout << "So hang thu "<<n<<" cua day la : " <<  TinhAn(n);
	return 0;
}

int TinhAn(int n)
{
	if (n == 1)
		return 2;
	return TinhAn(n - 1) + 2 * n + 1;
}

