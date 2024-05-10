#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Razmer Massu: ";
    cin >> n;

    double arr[6];


    cout << "Element massu:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }


    double maxAbsValue = arr[0] >= 0 ? arr[0] : -arr[0];
    int maxAbsIndex = 0;
    for (int i = 1; i < n; ++i) {
        double currValue = arr[i];
        double currAbsValue = currValue >= 0 ? currValue : -currValue;
        if (currAbsValue > maxAbsValue) {
            maxAbsValue = currAbsValue;
            maxAbsIndex = i;
        }
    }


    cout << "Index: " << maxAbsIndex << endl;


    double sum = 0;
    bool foundPositive = false;
    for (int i = 0; i < n; ++i) {
        if (foundPositive) {
            sum += arr[i];
        }
        else if (arr[i] > 0) {
            foundPositive = true;
        }
    }


    cout << "Summa=: " << sum << endl;

    return 0;
}
