#include <iostream>
using namespace std;

void LietKe(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
        }
        float sum = arr[i];
        for (int j = i + 1; j < n; j++) {
            sum += arr[j];
            if (sum > 0) {
                cout << sum << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    float arr[] = { 1.5, -2.3, 3.7, 4.2, -5.1, 6.8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    LietKe(arr, n);
    return 0;
}
