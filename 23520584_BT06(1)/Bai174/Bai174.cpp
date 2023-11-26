#include <iostream>
#include <iomanip>
void Nhap(float[], int&);
void Xuat(float[], int);
void NguyenHoa(float[], int);
using namespace std;

int main()
{
    float a[100];
    int n;
    Nhap(a, n);
    cout << "Mang da nhap :" << endl;
    Xuat(a, n);
    cout << "Mang sau nguyen hoa : " << endl;
    NguyenHoa(a, n);
    Xuat(a, n);
    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap so phan tu cua mang : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] : ";
        cin >> a[i];
    }
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << setprecision(3) << a[i];
    }
    cout << endl;
}

void NguyenHoa(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            a[i] = (float)(int)(a[i] + 0.5);
        else
            a[i] = (float)(int)(a[i] - 0.5);
    }
}
