#include <iostream>

using namespace std;

int main() {
    const int size = 30;
    double arr[size];


    cout << "Enter " << size << " real numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }


    double maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }


    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] != maxElement) {
            arr[newSize++] = arr[i];
        }
    }


    while (newSize < size) {
        arr[newSize++] = 0;
    }


    cout << "Resulting array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
