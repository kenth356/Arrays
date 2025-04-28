#include <iostream>
using namespace std;

int main() {
    string name[] = {"Dylan", "Kenth", "Razzell", "Robert"};
    for (int i = 0; i < sizeof(name)/sizeof(string); i++) {
        cout << " " << name[i];
    }

    int number[] = {10, 20, 30, 40};
    for (int i = 0; i < sizeof(number)/sizeof(int); i++) {
        cout << " " << number[i];
    }

    return 0;
}