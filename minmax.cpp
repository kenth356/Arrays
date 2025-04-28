#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 2, 33, 4, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxVal = arr[0];
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    cout << "Maximum: " << maxVal << "\nMinimum: " << minVal << endl;
    return 0;
}
