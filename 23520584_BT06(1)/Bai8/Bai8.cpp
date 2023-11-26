#include <iostream>
using namespace std;
int GiaiThua(int n)
{
    if (n == 0)
        return 0;
    int T = GiaiThua(n - 1);
    return(T * n);
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    float kq = GiaiThua(n);
    cout << kq << endl;
}