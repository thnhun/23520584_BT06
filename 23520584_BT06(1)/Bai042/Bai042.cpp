#include<iostream>
#include<iomanip>
int ktToanChan(int);
using namespace std;

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	int flag = ktToanChan(n);
	if (flag == 1)
		cout << "Toan chan";
	else 
		cout << "Khong toan chan";
	return 0;
}

int ktToanChan(int n)
{
    n = abs(n);

    if (n == 0)
    {
        return 1;
    }
    else 
        if (n % 2 != 0)
        {
            return 0;
        }
        else
        {
            return ktToanChan(n / 10);
        }
    
}
