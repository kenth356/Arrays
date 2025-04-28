#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }
    cout << "\nReversed array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
